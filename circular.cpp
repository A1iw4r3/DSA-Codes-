#include<iostream>
using namespace std;
class node{
	private:
		int data;
		node* next;
	public:
		node(int data):data(data),next(nullptr){}
		friend class linkedlist;
};
class linkedlist{
	private:
		node* head;
		node* tail;
	public:
		linkedlist(){
			head=nullptr;
			tail=nullptr;
		}
		void add_node(int data){
			node* tmp=new node(data);
			if(head==nullptr){
				head=tmp;
				tail=tmp;
				tail->next=head;
			}
			else{
				tail->next=tmp;
				tmp->next=head;
				head=tmp;
			}
		}
		void remove_node(){
			if(head==nullptr)
				return;
			else{
				node* tmp=head;
				tail->next=head->next;
				head=head->next;
				delete tmp;
			}
		}
		void remove_all(){
			do{
				node* tmp=head;
				head=head->next;
				delete tmp;
			}while(head!=head);
		}
		
		void print(){
			node* tmp=head;
			do{
				cout<<tmp->data<<" -> ";
				tmp=tmp->next;
			}while(tmp->next!=head);
			cout<<"NULL"<<endl;
		}
		void add_middle(int data,int position){
			int count=1;
			node* current=head;
			do{
				current=current->next;
				count++;
			}while(current->next!=head&&count<position-1);
			node* tmp=new node(data);
			tmp->next=current->next;
			current->next=tmp;
		}
		~linkedlist(){
			remove_all();
		}
};
int main(){
	linkedlist a;
	a.add_node(5);
	a.add_node(6);
	a.add_node(7);
	a.add_node(4);
	a.add_middle(2,1);
	a.print();
}

#include<iostream>
using namespace std;
class node{
	private:
		node* next;
		node* previous;
		int data;
	public:
		node(int data):data(data),next(nullptr),previous(nullptr){}	
		friend class linkedlist;
};
class linkedlist{
	private:
		node* head;
	public:
		linkedlist(){
			head=nullptr;
		}
		void add_node(int data){
			node* tmp=new node(data);
			if(head==nullptr)
				head=tmp;
			else{
				tmp->next=head;
				head->previous=tmp;
				head=tmp;
			}
		}
		void remove_node(){
			if(head==nullptr)
				return;
			else if(head->next==nullptr&&head->previous==nullptr){
				delete head;
			}
			else{
				node* tmp=head;
				head=head->next;
				head->previous=nullptr;
				delete tmp;
			}	
		}
		void add_middle(int data,int position){
			int count=1;
			node* current=head;
			while(current->next!=nullptr&&count<position){
				current=current->next;
				count++;
			}
			node* tmp=new node(data);
			tmp->next=current->next;
			current->next=tmp;
			current->next->previous=tmp;
			tmp->previous=current;
		}
		void remove_all(){
			while(head!=nullptr){
				node* tmp=head;
				head=head->next;
				delete tmp;
			}
		}
		void print(){
			node* tmp=head;
			while(tmp!=nullptr){
				cout<<tmp->data<<" -> ";
				tmp=tmp->next;
			}cout<<"NULL"<<endl;
		}
};
int main(){
	linkedlist a;
	a.add_node(5);
	a.add_node(6);
	a.add_node(7);
	a.add_middle(8,2);
	a.print();
}

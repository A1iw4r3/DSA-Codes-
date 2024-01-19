#include<iostream>
using namespace std;
class node{
	private:
		node* next;
		int data;
	public:
		node(int data){
			next=nullptr;
			this->data=data;
		}
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
				head=tmp;
			}
		}
		void delete_node(){
			if(head==nullptr)
				return ;
			else{
				node* tmp=head;
				head=head->next;
				delete tmp;
			}
		} 
		void delete_all(){
			if(head==nullptr)
				return ;
			else{
				while(head!=nullptr){
					node* tmp=head;
					head=head->next;
					delete tmp;
				}
			}
		}
		~linkedlist(){
			delete head;
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
	a.add_node(7);
	a.add_node(6);
	a.add_node(3);
	a.print();
}
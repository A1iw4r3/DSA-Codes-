#include<iostream>
using namespace std;
class list{
	list* next;
	int data;
	string s;
	bool b;
	list(int data):data(data),next(nullptr){};
	list(string data):s(data),next(nullptr){};
	list(bool data):b(data),next(nullptr){};
	friend class linkedlist;
};
class linkedlist{
	list* head;
	public:
	linkedlist(){
		head=nullptr;
	}
	void add_node(int data){
		list* tmp=new list(data);
		if(head==nullptr){
			head=tmp;
		}
		else{
			tmp->next=head;
			head=tmp;
		}
	}
	void add_node(string data){
		list* tmp=new list(data);
		if(head==nullptr){
			head=tmp;
		}
		else{
			tmp->next=head;
			head=tmp;
		}
	}
	void add_node(bool data){
		list* tmp=new list(data);
		if(head==nullptr){
			head=tmp;
		}
		else{
			tmp->next=head;
			head=tmp;
		}
	}
	void remove_node(){
		list* tmp=head;
		head=head->next;
		delete tmp;
	}
	void print(){
		list* tmp=head;
		while(tmp!=nullptr){
			cout<<tmp->data<<" -> ";
			tmp=tmp->next;
		}
		cout<<"NULL"<<endl;
	}
};
int main(){
	linkedlist a;
	a.add_node(5);
	a.add_node(6);
	a.add_node(7);
	a.add_node(1);
	a.add_node("Ali");
	a.print();
}
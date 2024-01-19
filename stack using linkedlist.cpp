#include<iostream>
using namespace std;
class node{
	private:
		double transition;
		string type;
		node* next=NULL;
	public:
		node(double transition,string type):transition(transition),type(type){}
		friend class stack;
};
class stack{
	private:
		node* head=NULL;
	public:
		void push(double transition,string type){
			node* tmp=new node(transition,type);
			if(head==NULL)
				head=tmp;
			else{
				tmp->next=head;
				head=tmp;
			}
		}
		void top(){
			cout<<head->type<<"  -  "<<head->transition<<endl;
		}
		void pop(){
			node* tmp=head;
			head=head->next;
			delete tmp;
		}
};
int main(){
	stack obj;
	obj.push(10000,"Grossary");
	obj.top();
}
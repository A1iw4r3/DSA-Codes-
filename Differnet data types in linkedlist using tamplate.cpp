#include<iostream>
using namespace std;
template<class T>
class node{
	private:
		T data;
		node* next;
		node(T data):data(data),next(nullptr){}
		friend class linkedlist;
};
template<class T>
class linkedlist{
	private:
		node<T> * head;
		linkedlist(){
			head=nullptr;
		}
	public:
		void add_node(T data){
			node<T>
			if(head==nullptr){
				
			}
		}
};

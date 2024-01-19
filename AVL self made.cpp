#include<iostream>
#include<algorithm>
using namespace std;
class AVLNode{
	int data;
	int height;
	AVLNode* LeftChild;
	AVLNode* RightChild;
	AVLNode(int data):data(data){
		LeftChild=NULL;
		RightChild=NULL;
		height=1;
	}
	friend class AVL;
};
class AVL{
	private:
		AVLNode* Root=NULL;
	AVLNode* insertion(int data,AVLNode* t){
		if(t==NULL)
			return new AVLNode(data);
			
		if(data < t->data)
			t->LeftChild=insertion(data,t->LeftChild);
		
		else if(data>t->data)
			t->RightChild=insertion(data,t->RightChild);
			
		balance(t);	
		
		update_height(t);
		
		return t;
	}
	AVLNode* rotateLeft(AVLNode* t){
		AVLNode* tmp1=t->RightChild;
		AVLNode* tmp2=tmp1->LeftChild;
		tmp1->LeftChild=t;
		t->RightChild=tmp2;
		update_height(t);
		update_height(tmp1);
		return tmp1;
	}
	AVLNode* rotateRight(AVLNode* t){
		AVLNode* tmp1=t->LeftChild;
		AVLNode* tmp2=tmp1->RightChild;
		tmp1->RightChild=t;
		t->LeftChild=tmp2;
		update_height(t);
		update_height(tmp1);
		return tmp1;
	}
	int height(AVLNode* t){
		if(t==NULL)
			return 0;
		else{
			return t->height;
		}
	}
	int balance_factor(AVLNode* t){
		if(t==NULL){
			return 0;
		}
		else{
			return height(t->LeftChild)-height(t->RightChild);
		}
	}
	void update_height(AVLNode* t){
		t->height=max(height(t->LeftChild),height(t->RightChild))+1;
	}
	void balance(AVLNode* &t){
		if(t==NULL)
			return ;
		if(balance_factor(t)>1){
			if(balance_factor(t->LeftChild)>=0){
				rotateRight(t); //left-left case
			}
			else{
				t->LeftChild=rotateLeft(t->LeftChild);  // Left-Right case
				rotateRight(t);  
			}
		}
		if(balance_factor(t)<-1){
			if(balance_factor(t)<=0){
				rotateLeft(t);   // Right-Right case
			}
			else{
				t->RightChild=rotateRight(t->RightChild);
				rotateLeft(t);
			}
		}
		update_height(t);
	}
	void inorder(AVLNode* t){
		if(t==NULL)
			return;
		inorder(t->LeftChild);
		cout<<t->data<<" ";
		inorder(t->RightChild);
	}
	public:
		void add_node(int data){
			Root=insertion(data,Root);
		}
		void display(){
			inorder(Root);
		}
};
int main(){
	AVL AVLTree;
	AVLTree.add_node(4);
	AVLTree.add_node(5);
	AVLTree.add_node(9);
	AVLTree.add_node(6);
	AVLTree.display();
}
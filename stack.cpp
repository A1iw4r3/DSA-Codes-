#include<iostream>
using namespace std;
class stack{
	private:
		char stk[10];
		int num=0;
	public:
		void push(char a){
			stk[num]=a;
			num++;
		}
		char pop(){
			return stk[--num];
		}
};
int main(){
	stack a;
	a.push('t');
	a.push('a');
	a.push('k');
	cout<<a.pop()<<" <- ";
	cout<<a.pop()<<" <- ";
	cout<<a.pop()<<endl;
}
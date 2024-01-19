#include<iostream>
using namespace std;
class Queue{
	private:
		char q[10];
		int num=0;
	public:
		void enqueue(char a){
			q[num]=a;
			num++;
		}
		char dequeue(){
			char tmp=q[0];
			for(int i=0;i<num-1;i++)
				q[i]=q[i+1];
			num--;
			return tmp;
		}
};
int main(){
	Queue a;
	a.enqueue('a');
	cout<<a.dequeue();
	return 0;
}
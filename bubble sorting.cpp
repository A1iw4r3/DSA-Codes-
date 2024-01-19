#include<iostream>
using namespace std;
class bubble_sort{
	private:
		int size;
		int *array;
		void bubble_sorting();
		void swap(int &x,int &y);
	public:
		void get_array();
		
		void display_array(){
			for(int i=0;i<size;i++){
				cout<<array[i]<<" ";
			}
		}
		~bubble_sort(){
			delete [] array;
		}
};
void bubble_sort::swap(int &x,int &y){
			int tmp=x;
	    		x=y;
	    		y=tmp;
		}

void bubble_sort:: bubble_sorting(){
	int count=1;
			while(count<size){
				for(int i=0;i<size-count;i++){
					if(array[i]>array[i+1]){
						swap(array[i],array[i+1]);
					}
				}
				count++;
			}
		}
void bubble_sort::get_array(){
			cout<<"Enter size of Array: ";
			cin>>size;
			array=new int[size];
			for(int i=0;i<size;i++){
				cout<<"Enter element "<<i+1<<" of Array: ";
				cin>>array[i];
			}
			bubble_sorting();
		}
int main(){
	bubble_sort a;
	a.get_array();
	a.display_array();
}
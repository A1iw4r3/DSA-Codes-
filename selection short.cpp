#include<iostream>
using namespace std;
class selection_sort{
	private:
		int size;
		int *array;
		void selection_sorting();
		void swap(int &x,int &y);
	public:
		void get_array();
		
		void display_array(){
			for(int i=0;i<size;i++){
				cout<<array[i]<<" ";
			}
		}
		~selection_sort(){
			delete [] array;
		}
};
void selection_sort::swap(int &x,int &y){{
			int tmp=x;
	    		x=y;
	    		y=tmp;
		}
}
void selection_sort:: selection_sorting(){
			for(int i=0;i<size-1;i++){
				for(int j=i+1;j<size;j++){
					if(array[i]>array[j]){
						swap(array[i],array[j]);
						}
					}
				}
		}
void selection_sort::get_array(){
			cout<<"Enter size of Array: ";
			cin>>size;
			array=new int[size];
			for(int i=0;i<size;i++){
				cout<<"Enter element "<<i+1<<" of Array: ";
				cin>>array[i];
			}
			selection_sorting();
		}
int main(){
	selection_sort a;
	a.get_array();
	a.display_array();
}
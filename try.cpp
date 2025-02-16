#include<iostream>
using namespace std;

class abc{
	int name;
	int id;
	protected:
		abc(){
			
		}
		void dispaly(){
			
		}
};

class xyz:public abc{
	int number;
	public:
		xyz(){
			
		}
		void display(){
			
		}
};

inline int hello(int &a){	///inline function	///pass by reference
	xyz a[3];
	while(a!=0){
		
		a--;
	}
}

int hello(){
	cout<<"hello......."<<endl;
}

int main(){
	hello();
	int *num = new int;
	cout<<"Enter a number ";
	cin>>num;
	hello(num);
	delete num;
	return 0;
}

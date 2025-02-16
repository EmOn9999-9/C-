/* In destructor function is automatically called after object is made in any function 
but after the function is ended */

#include<iostream>
using namespace std;

class nothing {
	public:
	~nothing(){
		cout<<"hello"<<endl;
	}
};

int main(){
	nothing a;
	cout<<"hi"<<endl;
	return 0;
}


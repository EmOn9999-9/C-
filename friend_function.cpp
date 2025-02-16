#include<iostream>
using namespace std;

class csit{
	int id;
	public:
		csit(int i){
			id=i;
		}
		friend void fun (csit c);
};

void fun(csit c){
	cout<<c.id<<endl;
	
}

int main(){
	csit c(5);
	fun(c);
	return 0;
}

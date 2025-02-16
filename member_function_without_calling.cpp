#include<iostream>
using namespace std;

class nepal{
	int num1, num2;
	public:
		void result();
		nepal(){
			cout<<"enter two numbers"<<endl;
			cin>>num1>>num2;
		}
};

void nepal::result(){
	cout<<"num1="<<num1<<endl<<"num2="<<num2<<endl<<endl;
}

int main(){
	nepal a,b;		/*a and b are object of class nepal */
	cout<<endl<<"for a"<<endl;
	a.result();
	cout<<"for b"<<endl;
	b.result();
	return 0;
}

/* Here, function nepal inside class nepal will automatically called after making object in main function */

/* types of constructors
1---> Default constructor
2---> Copy constructor
3---> Parameterized constructor	*/

#include<iostream>
using namespace std;

class example{
	int num;
	public:
		example(){
			num=2;
		}
		example(int n){
			num=n;
		}
		example(example &s){
			num=s.num;
		}
		
		int display(){
			return num;
		}
};

int main(){
	example a;
	example b(5);
	example c(b);
	cout<<"num for a is "<<a.display()<<endl;
	cout<<"num for b is "<<b.display()<<endl;
	cout<<"num for c is "<<c.display()<<endl;
	return 0;
}

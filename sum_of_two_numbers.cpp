#include<iostream>
using namespace std;
class two;
class one{
	int num;
	public:
		one(int i){
			num=i;
		}
		friend void sum(one a , two b);
};

class two{
	int num;
	public:
		two(int i){
			num=i;
		}
		friend void sum(one a , two b);
};

void sum(one a , two b){
	int s=a.num+b.num;
	cout<<"sum is "<<s<<endl;
}

int main(){
	one a(5);
	two b(4);
	sum(a,b);
	return 0;
}

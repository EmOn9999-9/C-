#include<iostream>
using namespace std;

class CSIT{
	int num;
	public:
		void get(int x){
			num=x;
		}
		int operator==(CSIT b){
			if(num==b.num){
				return 1;
			}else{
				return 0;
			}
		}
};

int main(){
	CSIT a,b;
	a.get(5);
	b.get(5);
	if(a==b){
		cout<<"a equals to b"<<endl;
	}else{
		cout<<"a doesn't equals to b"<<endl;
	}
	return 0;
}

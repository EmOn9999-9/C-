#include<iostream>
using namespace std;

class bank{
	string name;
	long long int account_num;
	string acc_type;
	long int balance;
	long int rem_balance;
	long int amount;
	public:
		bank(){
			cout<<"enter name :-";
			cin>>name;
			cout<<"enter account number :-";
			cin>>account_num;
			cout<<"enter account type :-";
			cin>>acc_type;
			cout<<"enter balance :-";
			cin>>balance;
		}
		void withdraw(){
			cout<<"how much ammount you want to withdraw ";
			cin>>amount;
			if(amount<balance){
				rem_balance=balance-amount;
			}
			else{
				cout<<endl<<"-----insufficient balance-----"<<endl;
			}
		}
		~bank(){
			if(amount<balance){
				cout<<endl<<"name :- "<<name<<endl;
				cout<<" remaining balance :- "<<rem_balance;
			}
		}
};

int main(){
	bank a;
	a.withdraw();
	return 0;
}

/*Q2. Write a class Account with data members acc no, balance, and min_balance(static).
  •   Include methods for reading and displaying values of objects. 
  •  Define static member function to display min_balance.
  •  Create array of objects to store data of 5 accounts and read and   
        display values of each object.
*/


#include<iostream>
using namespace std;

class account{
	long int acc_no;
	float balance;
	static float min_balance ;
	public:
		account(){
			cout<<endl<<"enter account number and balance ";
			cin>>acc_no>>balance;
		}
		void display(){
			if(balance>=min_balance){
				cout<<endl<<"account number :- "<<acc_no<<endl;
				cout<<"balance :- "<<balance<<endl;
			}
		}
		static void min_bala(){
		 	cout<<endl<<"\n\nminimum balance:-"<<min_balance<<endl;
		}
};

float account::min_balance = 100000.0;

int main(){
	account a[5];
	for(int i=0;i<5;i++){
		a[i].display();
	}
	account::min_bala();
	return 0;
}

/*Q1. Create a class author with attributes name and qualification. Also create a class 
publication with pname. From these classes derive a class book having attribute title and 
price. Each of the three classes should have a getdata() method to get their data from the 
user. The classes should have putdata( ) method to display the data. Create instances of the
class book in main.*/


#include<iostream>
using namespace std;

class author{
	string name;
	string qualification;
	public:
		void getdata(){
			cout<<"enter name and qualification ";
			cin>>name>>qualification;
		}
		void putdata(){
			cout<<endl<<"name :- "<<name<<endl;
			cout<<"qualification :- "<<qualification<<endl;
		}
};

class publication{
	string pname;
	public:
		void getdata(){
			cout<<"enter publication name ";
			cin>>pname;
		}
		void putdata(){
			cout<<"publication name :- "<<pname<<endl;
		}
};

class book: public author , public publication{
	string title;
	int price;
	public:
		void getdata(){
			author::getdata();
			publication::getdata();
			cout<<"enter title and price ";
			cin>>title>>price;
		}
		void putdata(){
			author::putdata();
			publication::putdata();
			cout<<"title :- "<<title<<endl;
			cout<<"price :- "<<price<<endl;
		}
};


int main(){
	book a;
	a.getdata();
	a.putdata();
	return 0;
}

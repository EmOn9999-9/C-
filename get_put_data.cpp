/* Create a class author with attributes name and qualification. Also create a class
publication with attribute pname. From these classes derive a class book having attributes 
title and price. Each of the three classes should have getData()method to input and putData()
method to display the data. Create instsnces of class book in main. */

#include<iostream>
using namespace std;

class author {
	string name, qualification;
	public:
		void getData(){
			cout<<"enter name and qualification ";
			cin>>name>>qualification;
		}
		void putdata(){
			cout<<endl<<"Name: "<<name<<endl;
			cout<<"Qualification: "<<qualification<<endl;
		}
};
class publication{
	string pname;
	public:
		void getData(){
			cout<<"enter name of publication ";
			cin>>pname;
		}
		void putdata(){
			cout<<"Pub-Name: "<<pname<<endl;
		}	
};

class book : public author , public publication{
	string title;
	int price;
	public:
		void getData(){
			author::getData();
			publication::getData();
			cout<<"enter title and price ";
			cin>>title>>price;
		}
		void putdata(){
			author::putdata();
			publication::putdata();
			cout<<"Title: "<<title<<endl;
			cout<<"Price: "<<price;
		}
};

int main(){
	book a;
	a.getData();
	a.putdata();
	return 0;
}

#include<iostream>
using namespace std;

class publication{
	string topic;
	int price;
	public:
		void getdata(){
			cout<<"enter topic and price ";
			cin>>topic>>price;
		}
		void putdata(){
			cout<<endl<<"topic: "<<topic<<endl;
			cout<<"price: Rs."<<price<<endl;
		}
};

class book:public publication{
	int pcount;
	public:
		void getdata(){
			publication::getdata();
			cout<<"enter page count of book";
			cin>>pcount;
		}
		void putdata(){
			publication::putdata();
			cout<<"page count: "<<pcount<<endl;
		}
};

class cd_rom: public publication{
	int ptime;
	public:
		void getdata(){
			publication::getdata();
			cout<<"enter play time in minutes ";
			cin>>ptime;
		}
		void putdata(){
			publication::putdata();
			cout<<"play time: "<<ptime<<endl;
		}
};

int main(){
	book a;
	cd_rom b;
	a.getdata();
	b.getdata();
	a.putdata();
	b.putdata();
	return 0;	
}

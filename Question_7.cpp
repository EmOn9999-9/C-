#include<iostream>
using namespace std;

class vechicles{
	int mileage;
	long int price;
	public:
		vechicles(){
			cout<<"Enter price and mileage ";
			cin>>price>>mileage;
		}
		
		void display(){
			cout<<"price :- "<<price<<endl;
			cout<<"mileage :- "<<mileage<<endl;
		}
};

class car:public vechicles{
	long int cost;
	int warranty;
	int capacity;
	string fuel_type;
	public:
		car(){
			cout<<"enter ownership cost , warranty (in years) , fuel capacity , fuel type (petrol or diesel)";
			cin>>cost>>warranty>>capacity>>fuel_type;
		}
		
		void display(){
			vechicles::display();
			cout<<"ownership cost :- "<<cost<<endl;
			cout<<"warranty :- "<<warranty<<" years"<<endl;
			cout<<"fuel capacity :- "<<capacity<<endl;
			cout<<"fuel type :- "<<fuel_type<<endl;
		}
};

class bike:public vechicles{
	int cylinder;
	int gears;
	string cooling_type;
	string wheel;
	int size;
	public:
		bike(){
			cout<<"enter no. of cylinders , gears , cooling type(air,liquid or oil) , wheel type(alloys or spokes) and fuel tank size ";
			cin>>cylinder>>gears>>cooling_type>>wheel>>size;
		}
		
		void display(){
			vechicles::display();
			cout<<"no. of cylinders :- "<<cylinder<<endl;
			cout<<"no. of gears :- "<<gears<<endl;
			cout<<"cooling type :- "<<cooling_type<<endl;
			cout<<"wheel type :- "<<wheel<<endl;
			cout<<"fuel tank size :- "<<size;
		}
};

class audi:public car{
	string model;
	public:
		audi(){
			cout<<"enter model ";
			cin>>model;
		}
		
		void display(){
			car::display();
			cout<<"model :- "<<model<<endl;
		}
};

class ford:public car{
	string model;
	public:
		ford(){
			cout<<"enter model ";
			cin>>model;
		}
		
		void display(){
			car::display();
			cout<<"model :- "<<model;
		}
};

class bajaj:public bike{
	string make_type;
	public:
		bajaj(){
			cout<<"enter make type ";
			cin>>make_type;
		}
		
		void display(){
			bike::display();
			cout<<"make type :- "<<make_type<<endl;
		}
};

class tvs:public bike{
	string make_type;
	public:
		tvs(){
			cout<<"enter make type ";
			cin>>make_type;
		}
		
		void display(){
			bike::display();
			cout<<"make type :- "<<make_type;
		}
};

int main(){
	cout<<"FOR AUDI"<<endl;
	audi a;
	cout<<endl<<"FOR FORD"<<endl;
	ford b;
	cout<<endl<<"FOR BAJAJ"<<endl;
	bajaj c;
	cout<<endl<<"FOR TVS"<<endl;
	tvs d;
	
	cout<<endl<<endl<<"FOR AUDI"<<endl;
	a.display();
	cout<<endl<<endl<<"FOR FORD"<<endl;
	b.display();
	cout<<endl<<endl<<"FOR BAJAJ"<<endl;
	c.display();
	cout<<endl<<endl<<"FOR TVS"<<endl;
	d.display();
	
	return 0;
}

/* Write a program to print the area of a rectangle by creating a class named ‘Area’ 
taking the values of its length and breadth as parameters of its constructor and 
having a function named ‘returnArea’ which returns the area of the rectangle. 
Length and breadth of the rectangle are entered through the keyboard.*/


#include<iostream>
using namespace std;

class Area{
	int length , breadth;
	public:
		Area(){
			cout<<"enter length and breadth ";
			cin>>length>>breadth;
		}
		int returnArea(){
			return length*breadth;
		}
};

int main(){
	Area a;
	cout<<"Area of rectange is "<<a.returnArea();
	return 0;
}

#include<bits/stdc++.h>
using namespace std;


class Shape{
	public:
		int id;
		Shape():id(0){
			cout<<"default ctor.this"<<this<<" id="<<id<<endl; 
		}
		Shape(int n):id(n){
			cout<<"ctor.this"<<this<<" id="<<id<<endl; 
		}
		void draw(){
			cout<<"draw something!!!"<<endl;
		}
		~Shape(){
			cout<<"dtor.this"<<this<<" id="<<id<<endl; 
		}
		
};
int main(){
	// new  delete
	cout<<"### new  delete ###"<<endl;
	Shape* ps=new Shape();
	ps->draw();
	delete ps; 
	
	// array new   arraw delete
	cout<<"### array new, arraw delete ###"<<endl;
	const int size = 3;
	Shape* buf = new Shape[size];
	Shape* tmp = buf;
	
	cout<<"buf="<<buf<<" tmp="<<tmp<<endl;
	
	for(int i=0;i<size;i++)
		new(tmp++)Shape(i);
	
	cout<<"buf="<<buf<<" tmp="<<tmp<<endl;
	
	delete [] buf;
}

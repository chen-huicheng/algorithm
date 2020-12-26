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
	
	//placement new  允许将对象在已申请的内存中构建 	
	for(int i=0;i<size;i++)
		new(tmp++)Shape(i);
	
	cout<<"buf="<<buf<<" tmp="<<tmp<<endl;
	
//	delete buf; 
	delete [] buf;
	
//	Shape* test;
//	new(test)Shape(4);
//	delete test;
	int a=0;
	return 0;
}

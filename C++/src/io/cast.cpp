#include<bits/stdc++.h>
using namespace std;
class Base{
	 int b;
};
class Derived:public Base{
	int d;
};
class Square{
public:
	Square(){
		cout<<"init Square  □"<<endl;
	}
	~Square(){
		cout<<"delate Square  □"<<endl;
	}
	virtual void draw()
	{
		cout<<"draw □"<<endl; 
	}
};
void run()
{
	Square s;
	throw 3;
}
int main(){
	try{
		run();
	}catch(int){
		cout<<"catch exception"<<endl;
	}
//	const_cast<T>(exp)  T:类型   exp:表达式
//	static_cast<T>(exp) 
	int a=0;
	const int *b=&a;
	int *c=const_cast<int*>(b);
	*c=3;
	cout<<a<<endl;
	double d=static_cast<double>(a)/2;
	cout<<d<<endl;
	
	Derived derived;
	Base *pb=&derived;
	cout<<"derived:"<<&derived<<endl;
	cout<<"  Base :"<<pb<<endl; 
	return 0;
} 



 

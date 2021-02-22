#include<bits/stdc++.h>
using namespace std;
int main(){
	// 容器直接  赋值
	list<int> l1(3,2222);
	
	vector<int> c1(10,1);
	vector<int> c2(5,0);
	vector<double> cd(5,4);

//!	cd=c1;   //不同类型 不能使用 = 赋值   此处  容器类型和容器存储的元素类型必须一致； 
	c1=c2;  // 同类型可以使用 =  赋值    
	cout<<"c1 = c2;  c1=";	
	for(int i=0;i<c1.size();i++)
		cout<<c1[i]<<" ";
	cout<<endl;
	
	
//	不同容器类型可以使用以下方式 copy    容器元素可以不同  如下  list<int>  to vector<double> 
	vector<double> c3(l1.begin(),l1.end());
	cout<<"c3(l1.begin(),l1.end());  c3=";	
	for(int i=0;i<c3.size();i++)
		cout<<c3[i]<<" ";
	cout<<endl;

	return 0;
} 

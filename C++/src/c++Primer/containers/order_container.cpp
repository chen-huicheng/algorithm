#include<bits/stdc++.h>
using namespace std;
int main(){
	// ����ֱ��  ��ֵ
	list<int> l1(3,2222);
	
	vector<int> c1(10,1);
	vector<int> c2(5,0);
	vector<double> cd(5,4);

//!	cd=c1;   //��ͬ���� ����ʹ�� = ��ֵ   �˴�  �������ͺ������洢��Ԫ�����ͱ���һ�£� 
	c1=c2;  // ͬ���Ϳ���ʹ�� =  ��ֵ    
	cout<<"c1 = c2;  c1=";	
	for(int i=0;i<c1.size();i++)
		cout<<c1[i]<<" ";
	cout<<endl;
	
	
//	��ͬ�������Ϳ���ʹ�����·�ʽ copy    ����Ԫ�ؿ��Բ�ͬ  ����  list<int>  to vector<double> 
	vector<double> c3(l1.begin(),l1.end());
	cout<<"c3(l1.begin(),l1.end());  c3=";	
	for(int i=0;i<c3.size();i++)
		cout<<c3[i]<<" ";
	cout<<endl;

	return 0;
} 

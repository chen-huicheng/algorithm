#include<bits/stdc++.h>
using namespace std;

struct T1{
	char n;    // 1 bytes
}; 

struct T2{ 
	char c;   // 1 bytes
	int n;    // 4 bytes
}; 

struct T3{
	char n;		// 1 bytes
	double d;	// 8 bytes
}; 

struct T4 //ռ��32���ֽ�
{
 
    int i_int;
    T4* p_next; 
    char c_char;  
};
struct T5  
{
	int i_int;
	char c_char;
    T5* p_next;
};

int main(){
//	���뷽ʽ 
	cout<<"size of T1: "<<sizeof(T1)<<endl;
	cout<<"size of T2: "<<sizeof(T2)<<endl;
	cout<<"size of T3: "<<sizeof(T3)<<endl;
	
	cout<<"size of int*: "<<sizeof(int*)<<endl;
	cout<<"size of double*: "<<sizeof(double*)<<endl;
	
//    ������ͬ���ݳ�Ա ȴռ�ڴ��С��ͬ   ������Ե��� 
    T4 node1;
    T5 node2;
    cout<<"sizeof node1 : "<<sizeof(node1)<<endl;
    cout<<"address of node1:       \t"<<&node1<<endl;
    cout<<"address of node1.i_int: \t"<<&node1.i_int<<endl;
    cout<<"address of node1.p_next:\t"<<&node1.p_next<<endl;
//    ���ַ��ĵ�ַת��Ϊָ������  ��Ȼcout�Ὣ��ַת��Ϊ�ַ���� 
    cout<<"address of node1.c_char:\t"<<(void *)&node1.c_char<<endl; 
    
    cout<<"sizeof node1 : "<<sizeof(node2)<<endl;
    cout<<"address of node1:       \t"<<&node2<<endl;
    cout<<"address of node2.i_int: \t"<<&(node2.i_int)<<endl;
    cout<<"address of node2.c_char:\t"<<(void *)&(node2.c_char)<<endl;
    cout<<"address of node2.p_next:\t"<<&(node2.p_next)<<endl;
    
    cout<<"\nsizeof int: "<<sizeof(int)<<endl; 
    
    char str[10];
    cout<<"address of str:\t"<<static_cast<void*>(str)<<endl;
    cout<<"address of str:\t"<<static_cast<void*>(str+1)<<endl;
    
	return 0;
} 

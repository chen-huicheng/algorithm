#include<bits/stdc++.h>
using namespace std;
int main()
{
	istringstream strm;  //��ʼ����ʽ  istringstream strm(str)  explicit���캯��    
	string str;
	getline(cin,str); 
	strm.str(str);      // ��string str������strm��      strm.str() �����������string 
	while(strm>>str)
	{
		cout<<str<<endl;   
	}
	cout<<strm.str()<<endl;
	return 0;
 } 
/*
input :a  b  c
output��
 a
 b
 c
 a  b  c
 */

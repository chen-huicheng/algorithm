#include<bits/stdc++.h>
using namespace std;
int main()
{
	istringstream strm;  //初始化方式  istringstream strm(str)  explicit构造函数    
	string str;
	getline(cin,str); 
	strm.str(str);      // 将string str拷贝到strm中      strm.str() 返回所保存的string 
	while(strm>>str)
	{
		cout<<str<<endl;   
	}
	cout<<strm.str()<<endl;
	return 0;
 } 
/*
input :a  b  c
output：
 a
 b
 c
 a  b  c
 */

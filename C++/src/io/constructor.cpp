#include<bits/stdc++.h>
using namespace std;
class Dog{
	public:
		Dog();
		Dog(string name);
		~Dog();
	private:
		string name;
};
Dog::Dog(string name):name(name){
	cout<<"create dog  "<<name<<endl;
}
Dog::Dog(){
	cout<<"create dog!!"<<endl;
}
Dog::~Dog(){
	cout<<"delete dog!!"<<endl;
}
Dog getDog(string name)
{
	Dog dog(name);
	return dog;
}
int main(){
	Dog dog;
	dog = getDog("haa");
	return 0;
}

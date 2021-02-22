#include<bits/stdc++.h>
using namespace std;
struct WidgetImpl {
	vector<int> data;
	int n;
};

class Widget {
	public:
		Widget();
		Widget(const Widget& rhs);
		Widget& operator=(const Widget& rhs);
		void swap(Widget& rhs);
		int id;
		void getN() {
			cout<<pImpl<<endl;
		}
	private:
		WidgetImpl *pImpl;
};
Widget::Widget():id(0),pImpl(new WidgetImpl) {

}
Widget::Widget(const Widget& rhs):id(rhs.id) {
	pImpl=new WidgetImpl;
	*pImpl=*(rhs.pImpl);
}
Widget& Widget::operator=(const Widget& rhs) {
	Widget tmp(rhs);
	swap(tmp);
	return *this;
}
void Widget::swap(Widget& rhs) {
	using std::swap;
	swap(id,rhs.id);
	swap(pImpl,rhs.pImpl);
}
namespace std {
	template<>
	void swap<Widget>(Widget& a,Widget& b) {
		a.swap(b);
	}
}
int main() {
	Widget w1;
	w1.id=1;
	cout<<"w1:"<<w1.id<<endl;

	Widget w2;
	w2.id=2;
	cout<<"w2:"<<w2.id<<endl;
	
	Widget w3(w1);
	cout<<"w3:"<<w3.id<<endl;
	
	cout<<w2.id<<"  "<<w3.id<<endl;
	w2.getN();
	w3.getN(); 
	swap(w3,w2);
	cout<<w2.id<<"  "<<w3.id<<endl;
	w2.getN();
	w3.getN(); 
	
	return 0;
}

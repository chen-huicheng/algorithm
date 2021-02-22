#include<bits/stdc++.h>
#include <ext/pool_allocator.h>
using namespace std;

template<typename  Alloc>
void cookie_test(Alloc alloc, size_t size) {
    typename  Alloc::value_type* p1, *p2, *p3;
    p1 = alloc.allocate(size);
    p2 = alloc.allocate(size);
    p3 = alloc.allocate(size);

    cout << "p1 = " << (void*)p1 << '\t';
    cout << "p2 = " << (void*)p2 << '\t';
    cout << "p3 = " << (void*)p3 << '\t'<<endl;

    alloc.deallocate(p1, sizeof(typename  Alloc::value_type));
    alloc.deallocate(p2, sizeof(typename  Alloc::value_type));
    alloc.deallocate(p3, sizeof(typename  Alloc::value_type));
}

int main() {
	cout  << "size of double(allocator) " << sizeof(double) << endl;
    cookie_test(std::allocator<double>(), 1); 
    
	cout  << "size of int(allocator) " << sizeof(int) << endl;
	cookie_test(std::allocator<int>(), 1); 		

	cout  << "size of char(allocator) " << sizeof(char) << endl;
	cookie_test(std::allocator<char>(), 1); 
	
	//cookie ռ8���ֽ� �ֱ���ͷ����β��  ����ռ�����ֽ�����Ϊ  8 ��������   ����8����������Ҫpadding 
	//  ���  ������double  ����  char ��int �� ʹ�� new �����ڴ�  ����ռ��  16 ���ֽ�
	//  8 ���ֽ� cookie   [char (1�ֽ� padding 7�ֽ�)��int(4�ֽ� padding 4�ֽڣ���double(8�ֽ� û��padding��] 
	
	
	//ʹ����չ�� ext/pool_allocator.h �е� __pool_alloc ���Բ���cookieʱ �ڴ��ַ��� 
	
	cout  << "size of double(__pool_alloc) " << sizeof(double) << endl;
    cookie_test(__gnu_cxx::__pool_alloc<double>(), 1); 
    
    cout  << "size of int(__pool_alloc) " << sizeof(int) << endl;
    cookie_test(__gnu_cxx::__pool_alloc<int>(), 1); 
    
    cout  << "size of char(__pool_alloc) " << sizeof(char) << endl;
    cookie_test(__gnu_cxx::__pool_alloc<char>(), 1); 
	return 0;
}

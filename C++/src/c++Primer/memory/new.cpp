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
	
	//cookie 占8个字节 分别在头部和尾部  而且占的总字节数需为  8 的整数倍   不是8的整数倍需要padding 
	//  因此  不论是double  还是  char 、int 等 使用 new 申请内存  均是占用  16 个字节
	//  8 个字节 cookie   [char (1字节 padding 7字节)、int(4字节 padding 4字节）、double(8字节 没有padding）] 
	
	
	//使用扩展包 ext/pool_allocator.h 中的 __pool_alloc 测试不带cookie时 内存地址情况 
	
	cout  << "size of double(__pool_alloc) " << sizeof(double) << endl;
    cookie_test(__gnu_cxx::__pool_alloc<double>(), 1); 
    
    cout  << "size of int(__pool_alloc) " << sizeof(int) << endl;
    cookie_test(__gnu_cxx::__pool_alloc<int>(), 1); 
    
    cout  << "size of char(__pool_alloc) " << sizeof(char) << endl;
    cookie_test(__gnu_cxx::__pool_alloc<char>(), 1); 
	return 0;
}

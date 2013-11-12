#include <iostream>
#include <test/test_1.h>
#include <test/test_2.h>


void test_static_lib() {
	int add = test_1(1, 2);
	
	int sub = test_2(2, 1);
}

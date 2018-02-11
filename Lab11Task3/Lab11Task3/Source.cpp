#include <iostream>
using namespace std;
int foo1(void) {                   //Return local 
	int p = 99;
	return p;
}
char *foo2(void) {               //Returns Pointer to array
	char buffer[] = "test_123";
	return buffer;
}
int *foo3(void) {                 //Returns Pointer to array
	int t[3] = { 1,2,3 };
	return t;
}
int *foo4(void) {                             //Returning address of an aarry in the stack & returing somthing in the heep
	cout << "you just called me" << endl;
	int *t; t = new int(5);
	return t;
}
int main(void)
{
	int *p;
	p = foo4();
	printf("foo1: %d\n", foo1());
	printf("foo2: %s\n", foo2());
	cout << foo3() << endl;
	cout << " - > " << *p << endl;

	system("pause");
}
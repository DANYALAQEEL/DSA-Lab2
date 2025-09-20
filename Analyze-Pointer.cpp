#include <iostream>
using namespace std;
void analyze_pointer(int *ptr){
	cout << ptr << endl;
	cout << *ptr << endl;
}
int main() {
	int i = 4;
	analyze_pointer(&i);
	int *prt = new int;
	*prt = 20;
	analyze_pointer(prt);
	return 0;
}


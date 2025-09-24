#include <iostream>

using namespace std;
int multiplicar(int a, int b){
	int r = (a * b);
	return r;
}

int main(int argc, char** argv) {
	int r = multiplicar (6, 8);
	cout<<r; 
	return 0;
}

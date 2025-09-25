#include <iostream>
#include <unistd.h> // para sleep

using namespace std;

int main(int argc, char** argv) {
	for(int count = 0; count <= 10; count++)
	{
		cout << count << endl;
		sleep(1); // 1 segundo
	}
	return 0;
}

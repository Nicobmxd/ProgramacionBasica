#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[]) 
{int count;
	for(count = 0; count <= 10; count++)
	{
		printf("%d\n", count);
		sleep(1);
	}
	return 0;
}

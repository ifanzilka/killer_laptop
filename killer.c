#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	void *ptr;
		
	while (i < 100)
	{
		fork();
		i++;
	}
	while (ptr = malloc(1000000))
		;
	while(ptr = malloc(100000))
		;
	while (ptr = malloc(10000))
		;
	while (ptr = malloc(1000))
		;
	while(ptr = malloc(100))
		;

}

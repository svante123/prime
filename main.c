#include <stdio.h>
#include <stdbool.h>
bool prime;
int checkprime(int x)
{
	while( prime != true)

	{

	for(int y=1; y >= x;y++)
	{
		prime = true;
		
		for(int i=2; i<=x;  y++)
		{
			prime = false;
		}
	}
	if(prime = true)
	{
		printf("%d is a prime", x);
	}
	}
}



int main()
{
	int input;
	scanf("%d",&input);
	checkprime(input);
}

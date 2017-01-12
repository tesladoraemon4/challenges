#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	for (int i = 0; i < 1000; ++i)
	{
		for (int x = 0;x < 1000; ++x)
		{	
			if(3*x-7*i==4)
				printf("%i | %i\n", x,i);

		}
	}




	return 0;
}
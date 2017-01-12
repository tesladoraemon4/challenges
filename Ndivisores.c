#include <stdio.h>
//https://omegaup.com/arena/problem/ndivisores#problems
int main()
{		
	int n=0,max=0;
	scanf("%d",&n);



	for (int x=0; x<=n; x++)
	{
		for (int y=0; y<=n; y++){
			if(max==0)
				max = x;
			if((n == x*y) && x < max)
				max = x;
		}
	}


	printf("%d\n",max);


	
	return 0;
}
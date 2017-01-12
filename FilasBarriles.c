#include <stdio.h>
//https://omegaup.com/arena/problem/Cena#problems
int main()
{

	int num=0,cont1=0;
	scanf("%d",&num);

	int fila[num];

	for(int c = 0;c < num; c++){
		scanf("%d",&fila[c]);
		if(fila[c]==1)
			cont1++;
	}

	num=0;
	for(int x=0;x < cont1; x++)
		if(fila[x]==2)
			num++;


	printf("%d mov minimos\n",num*2);




	return 0;
}
//buscar el minimo recursivos
#include <stdio.h>
int minArra(int arra[],int tam);


int min=0,band=0;

int main()
{
	int array[]= {1,-12,4,5,6,7,8,-34,2,1,4};

	minArra(array,11);



	printf("%d\n",min);

	return 0;
}




int minArra(int arra[],int tam){

	tam--;
	if (tam == -1)
		return 1;
	if(band == 0){
		min = arra[tam];
		band = 1;
	}
	if(arra[tam] < min)
		min = arra[tam];
	
	minArra(arra,tam);

}
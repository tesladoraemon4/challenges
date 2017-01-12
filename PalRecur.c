//palindromos recursivos
#include <stdio.h>

int palindromo(char cad[],int j, int i);

int main()
{
	char cad []="ana";

	int band = palindromo(cad,0,-1);

	printf("%d\n",band);


	return 0;
}


int palindromo(char cad[],int i, int j){

	if(j==0)
		return 1;
	else if(j== -1){
		for(j=0;cad[j]!='\0';j++);
		j--;
	}
	if(cad[j]!=cad[i])
		return 0;
	palindromo(cad,i+1,j-1);

}
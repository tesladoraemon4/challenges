#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int someWiner(int posL, int posT);

//obtener los movimientyos de las tortugas
int getMovT(int numRad);
int getMovL(int numRad);


int main()
{
	int posT, posL, randoml, randomt;
	int win, movt;
	char table[70];


	posT = posL = 0;

	for(int y = 0 ; y < 70; y++)
		table[y]=' ';


	while(someWiner(posL,posT) != 1){
		table[posT] =' ';
		table[posL] =' ';

		randoml = rand()%4;


		posL += getMovL(randoml);


		randomt = rand()%2;


		posT += getMovT(randomt);



		if(posT == posL)
			printf("Auch Duele\n");



		posL = (posL>=0)?posL:0;
		table[posL] = 'L';

		posT = (posT>=0)?posT:0;
		table[posT] = 'T';

		printf("%s\n",table);


	}	

	win = someWiner(posL, posT);


	if(win == 3)
		printf("Empate\n");
	else if( posT > posL)
		printf("Gano la tortuga\n");
	else 
		printf("Gano la liebre\n");




	return 0;
}
















int getMovL(int numRad){
	switch(numRad){
		case 0:
			return 0;
		break;
		case 1:
			return 9;
		break;
		case 2:
			return 12;
		break;
		case 3:
			return 1;
		break;
		case 4:
			return 2;
		break;
		default:
			printf("Algo se chingo\n");
		break;

	}



}

int someWiner(int posL, int posT){
	if(posT >= 70){
		return 1;
	}else if(posL >= 70 && posT >= 70){
		return 3;
	}else if(posL >= 70 ){
		return 1;
	}
}


int getMovT(int numRad){

switch(numRad){
	case 0:
		return 3;
	break;
	case 1:
		return -6;
	break;
	case 2:
		return 1;
	break;
	default:
		printf("Algo no funciono \n");
	break;
}


}
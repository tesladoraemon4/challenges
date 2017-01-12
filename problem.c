#include <stdio.h>

#include <math.h>

//int sacarDigit(char[] cad);
int abs(int x);
int isdigit(char *punt);
int sacarDigit(char *punt);
//falta escalabilidads
int isdigit(char *punt){

	char expreg[10] = "0123456789";

	for (; *punt !='\0' ; punt++)
	{ 
		for(int x = 0; x < 10; x++){
			if(expreg[x]==*punt)
				break;
			if(x==9)
				return 0;
			
		}


	}
	return 1;


}
//sacar el digito despues de la coma  
int sacarDigit(char *punt){
	//busca la ,
	for (; *punt !='\0'; punt++);

	--punt;
	
	int numfin=0;
	for(int x=0;*punt != ',';punt--,x++)
		numfin += (*punt-'0') * elevar(10,x); 
	



	return numfin;

}
int main()
{
	char ent[5]="";
	int posx, posy,florr[50][50],mov/*Var para saber los espacios a recorrer*/,pluma,
	orienta,giro,comandDigit;

	posy = posy = pluma = mov = orienta = giro = 0;




	for (int x = 0; x < 50; x++)
		for (int y = 0; y < 50; y++)
			florr[x][y]=0;

		
	






	printf("Introduce los comandos para interpretar \n");


	while(ent != "9"){//repetimos hasta que introduzcan 9
		scanf("%s",ent);
		if(isdigit(ent)){
			comandDigit = ent[0]-'0';
			switch(comandDigit){
				case 1:
					pluma = 1;
				break;
				case 2:
					pluma = 0;
				break;
				case 3:
					giro++;
					orienta = abs(giro)%4;
				break;
				case 4:
					giro--;
					orienta = abs(giro)%4;
				break;
				case 6:
					for (int x = 0; x < 50; x++)
					{
						for (int y = 0; y < 50; y++)
						{
							if(x==posx && y == posy){
								printf("T");
							}else{
								printf("%d",florr[x][y]);
							}
						}
						printf("\n");
					}
				break;
				default://cuando se mueve
					printf("Comando introducido no valido\n");
				break;
			}
		}else{
			//sacar el otro digito

			mov = sacarDigit(ent);

			printf("%d\n", mov);

			for (int i = 0; i < mov; ++i)
			{
				switch(orienta){
					case 0:
						posy = (posy+1)%50;
						florr[posx][posy]=(pluma==1)?1:0;
					break;
					case 1:
						posx = (posx+1)%50;
						florr[posx][posy]=(pluma==1)?1:0;
					break;
					case 2:
						posy = (posy-1)%50;
						florr[posx][posy]=(pluma==1)?1:0;
					break;
					case 3:
						posx = (posx-1)%50;
						florr[posx][posy]=(pluma==1)?1:0;
					break;
					default:
						printf("Orienta tomo un valor de %d\n", orienta);
					break;
				}
			}
		}




	}



	
	
	return 0;
}




int abs(int x){
	return (x>=0)?x:-x;
}

int elevar(int base,int exponente){
	if (exponente == 0)
		return 1;
	else if(exponente == 1)
		return base;
	 int contador;
     for (contador=1; contador<=exponente; contador=contador+1);
     {
     	base *= base;
     }
     return base;
}




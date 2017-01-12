/*
	https://www.aceptaelreto.com/problem/statement.php?id=239
*/

#include <math.h>



#include <stdio.h>


#define secondsOneDay 144

#define hoursToSeconds 3600



int resolver(int s);
int cont=0;
int main()
{
	int days, emi;
	scanf("%d %d",&days,&emi);


	int totalSeconds = days * emi * secondsOneDay;


	printf("%d\n",totalSeconds);
	int edo = resolver(totalSeconds);




	return 0;
}



 
int resolver(int s,int cont){
	int r,mod;
	if(cont < 4){
		if(s >= 24 * hoursToSeconds){//contamos los dias
			mod = s % (hoursToSeconds)*24;
			r = s / (hoursToSeconds*24);
			printf("%d:",r);
			cont++;
			resolver(mod,cont);
		}
		if(s < 24 * hoursToSeconds && s >= hoursToSeconds){//horas
			mod = s % hoursToSeconds;
			r = s / hoursToSeconds;
			printf("%d:",r);
			cont++;
			resolver(mod);
		}
		if(s < hoursToSeconds && s >= 60){//minutos
			mod = s % 60;
			r = s / 60;
			printf("%d:",r);
			cont++;
			resolver(mod);
		}
		if(s < 60 && s >=0){//segundos
				printf("%d:",s);
				cont++;
				resolver(s);
		}else {
			printf("Algo se chingo\n");
			return -1;
		}
	}
	return -1;
}








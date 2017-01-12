// cedazo de ratostenes

#include <stdio.h>

int main()
{
	

	int tam=99999,sub,arra[tam],x;

                          //jdkfhgjskdlfhj

	for (int i = 0; i < tam; ++i)
		arra[i]=1;


	for(sub = 2; sub < tam; sub++){
		for(x = sub+1;x < tam;x++)
			if(x%sub == 0)
				arra[x]=0;
	}
	for (x = 0; x < tam; x++)
	{
		if(arra[x]==1)
			printf("%d\n",x);
	}



	return 0;
}

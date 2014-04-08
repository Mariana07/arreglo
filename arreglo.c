#include<stdio.h>

int main(){
int i,j,t,n,valor;
int a[10];
        
		
		
		
		printf("Ingrese valores en la pocision indicada \n");
        
		
		//valor del arreglo
        for (i=0;i<10; i++){     
        printf("pocision [%d]: ", i);
        scanf("%d", &a[i]);     
        }
        printf("\n");
        for(i=0;i<10;i++){
             printf("a[%d]: = %d\n", i, a[i]);
        }
        printf("\n");
        // arreglo ordenado
        
        for(j=1; j<10; j++){
        
             for(i=10-1;i>0;i--)
                  if(a[i] < a[i-1]){
                  t = a[i-1];
                  a[i-1] = a[i];
                  a[i] = t;
                  }
              }

        for (i=0;i<10;i++)
               {
               printf("a[%d]: = %d\n", i, a[i]);
               }       
       
return 0;
}

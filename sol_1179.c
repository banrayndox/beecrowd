#include <stdio.h>
 
int main() {

 int par[5];
 int impar[5];
 int N;
 int parCount=0;
 int imparCount=0;
 for(int i=0; i<15; i++){
     scanf("%d", &N);
     if(N%2==0){
         par[parCount] = N;
         parCount++;
     }else{
         impar[imparCount] = N;
         imparCount++; 
     }
     if(parCount==5){
         for(int i=0; i<5; i++){
             printf("par[%d] = %d\n",i,par[i]);
             if(i==4){
                 parCount=0;
             }
         }
     }
          if(imparCount==5){
         for(int i=0; i<5; i++){
             printf("impar[%d] = %d\n",i,impar[i]);
         if(i==4){
         imparCount=0;
             }
         }
     }
     
     
 }
     for (int i = 0; i < imparCount; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

  
    for (int i = 0; i < parCount; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

 
    return 0;
}

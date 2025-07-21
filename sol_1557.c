#include <stdio.h>
 #include <math.h>
int main() {
 
int N;
while(1){
    scanf("%d",&N);
    if(N==0){
        break;
    } 
    int arr[N][N];
    int count=0;
    int i,j;
    for(i =0; i<N; i++){
     for(j = 0; j<N; j++){
        arr[i][j] = pow(2, i+j);
     }   
    }
        int num = arr[N-1][N-1];
    do{count++;
      num/=10;
   
    }while(num>0);
     for(i =0; i<N; i++){
     for(j = 0; j<N; j++){
    int x = arr[i][j];
    printf("%*d", count,x);
   
      if(j<N-1){
         printf(" ");
        }else{
            printf("\n");
        }

     }   
    }
       
      
    printf("\n");
    
    
}
    return 0;
}

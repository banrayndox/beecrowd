#include <stdio.h>
 #include<stdlib.h>
int main() {
 int N;
 while(1){
    scanf("%d", &N);
    if(N==0){
        break;
    }
    int i,j;
    for(i=1; i<=N; i++){
        for(j=1; j<=N; j++){
            int x=abs(i-j)+1;
            printf("%3d", x);
            if(j<N){
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

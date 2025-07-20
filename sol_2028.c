#include <stdio.h>

int main() {
 
int N;
int caseo = 0;

while(scanf("%d", &N) !=EOF){
int numero = (N * (N + 1)) / 2 + 1;
    caseo++;
    if(numero>1){
    printf("Caso %d: %d numeros\n", caseo,numero);
    }else{
        printf("Caso %d: %d numero\n", caseo,numero);  
    }

if(N==0){
        printf("0");
}else{
        printf("0 ");
}
     for(int i=1; i<=N; i++){

for(int j=1; j<=i; j++){
    if(i==N && j==N){
            printf("%d",i);
    }else{
            printf("%d ",i);
    }

}
    }
printf("\n\n");

}
    return 0;
}

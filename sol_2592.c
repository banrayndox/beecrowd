#include <stdio.h>
 
int main() {
 
int N;
while(scanf("%d", &N) && N!=0){
int attempt = 0;
int array[N];

again:
    for(int i=0; i<N; i++){
     scanf("%d",&array[i]);   
    }
    attempt++;
    for(int i=0; i<N-1; i++){
    if(array[i]>array[i+1]) goto again;  
    }

printf("%d\n", attempt);
}


 
    return 0;
}

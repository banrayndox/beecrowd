#include <stdio.h>
 
int main() {
 
int N;
while(scanf("%d", &N) && N!=0){
int array[N+1];
for(int i=1; i<N+1; i++){
    scanf("%d", &array[i]);
}
int K;
scanf("%d", &K);
while(K!=array[K]){
    K=array[K];
}
printf("%d\n", K);}
    return 0;
}

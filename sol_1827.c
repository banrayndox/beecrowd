// not yet done
#include <stdio.h>

int main() {
int N;
int i,j;
while(scanf("%d", &N) !=EOF){
int obs = N/3;    
for(i=0; i<N; i++){
    for(j=0; j<N; j++){
    int x=0;
    if(i==j) x=2;
    if(i+j==N-1) x=3;
    if(i==j && i+j==N-1) x=4;
    printf("%d",x);
    if(j==N-1){
        printf("\n");
    }else{
        printf(" ");
    }
    
}    
}    
    printf("\n");
    
}
    return 0;
}

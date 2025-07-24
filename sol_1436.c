#include <stdio.h>
int main(){
    
int T;
scanf("%d", &T);
for(int i=1; i<=T; i++){
    int N;
    scanf("%d", &N);
    int player[N];
    for(int i=0; i<N; i++){
        scanf("%d", &player[i]);
    }
    
    
    printf("Case %d: %d\n",i,player[N/2]);
}
    return 0;
}

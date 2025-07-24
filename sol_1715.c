#include <stdio.h>
 
int main() {
int N,M;
scanf("%d %d", &N, &M);
int players[N][M];
for(int i=0; i<N; i++){
for(int j=0; j<M; j++){
    scanf("%d", &players[i][j]);
}    
}

int count=0;

for(int i=0; i<N; i++){
    int seconderyCount=0;
for(int j=0; j<M; j++){
    if(players[i][j]>0) seconderyCount++;
}
if(seconderyCount==M) count++;
}
printf("%d\n", count);
    return 0;
}

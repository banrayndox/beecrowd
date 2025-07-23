#include <stdio.h>
#include <stdlib.h> 
int main() {
 
int N;
while(scanf("%d", &N) && N!=0){
int V[N+1];    
for(int j=1; j<N+1; j++){
     scanf("%d", &V[j]);
}   

int highest = V[1];
for (int i = 2; i <= N; i++) {
if (V[i] > highest) {
 highest = V[i];
 }
}



 int minDiff = 1000000, index = 0;
for (int i = 1; i <= N; i++) {
if (V[i] == highest) continue;
int diff = abs(V[i] - highest);
if (diff < minDiff) {
minDiff = diff;
index = i;
 }
}

 
 printf("%d\n",index);   
}
 
    return 0;
}

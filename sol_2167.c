#include <stdio.h>
 
int main() {
 

int N;
scanf("%d", &N);
int R[N+1];
for(int i=1; i<=N; i++){
  scanf("%d", &R[i]);
  }
  
  int stop=0;
for(int i=1; i<N; i++){
    if(R[i+1]<R[i]){
        stop = i+1;
        break;
    }
}


printf("%d\n",stop);
 
    return 0;
}

#include <stdio.h>
 
int main() {
 
 int N,M;
 scanf("%d %d", &N, &M);
 int array[N+1][M+1];
 for(int i=1; i<N+1; i++){
 for(int j=1; j<M+1; j++){
     scanf("%d", &array[i][j]);
 }
 }
 int x=0;
 int y=0;
  for(int i=1; i<N; i++){
 for(int j=1; j<M; j++){
   if(array[i][j]==42 && array[i][j-1]==7 && array[i][j+1]==7
   && array[i-1][j-1]==7 && array[i-1][j]==7 && array[i-1][j+1]==7
   && array[i+1][j-1]==7 && array[i+1][j]==7 && array[i+1][j+1]==7 ) {
       x=i; y=j;
   } 
 }
  if (x != 0) break;
 }
 
 printf("%d %d\n", x, y);
    return 0;
}

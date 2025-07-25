#include <stdio.h>
 
int main() {
 int N,M;

 while(scanf("%d %d", &N, &M)!=EOF)
{ 
     int array[N][M];
 for(int i=0; i<N; i++){
 for(int j=0; j<M; j++){
     scanf("%d",&array[i][j]);
 }
 }

 for(int i=0; i<N; i++){
 for(int j=0; j<M; j++){
  int x=0;
 if(array[i][j]==1) x=9;
 else{
     if(i-1>=0 && array[i-1][j]) x++;
     if(j-1>=0 && array[i][j-1]) x++;
     if(i+1<N && array[i+1][j]) x++;
      if(j+1<M && array[i][j+1]) x++;
 }
    printf("%d", x);

  }
printf("\n");
 }
 }


    return 0;
}

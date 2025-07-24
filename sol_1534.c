#include <stdio.h>
 
int main() {
int N;
while( scanf("%d", &N) !=EOF){
for(int i=1; i<=N; i++){
  for(int j=1; j<=N; j++){
      int x=3;
 if(i==j)  x=1;
 if(i+j == N+1) x=2;
printf("%d",x);
if(j==N) printf("\n");
}  
}
}
    return 0;
}

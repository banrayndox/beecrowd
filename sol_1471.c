#include <stdio.h>
int main(){
    
int N,R;
while(scanf("%d %d", &N, &R)!=EOF){
    
int returned[N+1];

for(int i=1; i<N+1; i++){
returned[i] = 0;    
}
    
for(int i=1; i<R+1; i++){
    int t;
scanf("%d",&t);
returned[t] = t;
}
    
if(N==R) printf("*\n");
else{
    
for(int i=1; i<N+1; i++){
    
if(returned[i]==0) printf("%d ",i);    
    
}    
 printf("\n");    
}  
}
  return 0;
}

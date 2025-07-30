#include<stdio.h>
#include<string.h>
#define MAX 1000001
int main(){

long long N;
scanf("%lld", &N);

long long X[MAX];
for(long long i=0; i<N; i++)
scanf("%lld", &X[i]);
    
long long visited[MAX];
memset(visited,0,sizeof(visited));
    
long long attack=0;
long long i=0;
while(i>=0 && i<N ){
if(X[i]<=0) break;

if(!visited[i]){
    attack++;
    visited[i] = 1;
    
}

long long parity = X[i]%2;
if(X[i]>0){
    X[i]--;
}
if(parity){
    i++;
} else {
    i--;
}

    
}
long long total = 0;
for(long long i=0; i<N; i++){
    total+=X[i];
}
printf("%lld %lld\n", attack, total);
return 0;    
}

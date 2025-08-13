// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
int n;
scanf("%d", &n);
int array[n+1];
for(int i=1; i<=n; i++){
    scanf("%d", &array[i]);
}
int attack[n+1];
memset(attack, 0 , sizeof(attack));
int pos = 1;
while(pos>=1 && pos<=n){
    int parity = array[pos]%2;
    if(array[pos] > 0){
        array[pos]--;

    }
  attack[pos] = 1;

    if(parity==0) pos--;
    else pos++;
}
int visited=0;
for(int i=1; i<=n; i++){
    if(attack[i]) visited++;
}
long long total = 0;
for(int i=1; i<=n; i++){
    total+=(long long)array[i];
}
printf("%d %lld\n", visited, total );
    return 0;
}

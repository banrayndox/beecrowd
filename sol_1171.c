#include <stdio.h>
 
int main() {
 
int N,num;
int freq[2001] = {0};
scanf("%d", &N);
for(int i=0; i<N; i++){
    scanf("%d", &num);
    freq[num]++;
}
for(int i=0; i<2001; i++){
    if(freq[i]>0) printf("%d aparece %d vez(es)\n",i,freq[i]);
}
    return 0;
}

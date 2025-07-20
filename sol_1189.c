#include <stdio.h>
#include<string.h>
int main() {

char O;
scanf("%c", &O);
getchar();
float M[12][12];
float sum=0.0;
int count=0;
for(int i=0; i<12; i++){
    for(int j=0; j<12; j++){
    scanf("%f",&M[i][j]);
    if(i>j && (i+j<12-1)){
       count++;
       sum+=M[i][j];
    }
    }
    
}
if(O=='S'){
 printf("%.1f\n",sum); 
    
}else{
     printf("%.1f\n", sum/count);
 }
    return 0;
}

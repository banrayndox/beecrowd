#include <stdio.h>
 #include<string.h>
int main() {
char O;
scanf("%c",&O);
getchar();
float M[12][12]; 
int diagonalUp=0;
float sum=0.0;
for(int i=0; i<12; i++){
for(int j=0; j<12; j++){
    scanf("%f",&M[i][j]);    
    if(i<j){
    diagonalUp++;
    sum+=M[i][j];
}
}
}
if(O=='S'){
    printf("%.1f\n", sum);
}else if(O=='M'){
    printf("%.1f\n",sum/diagonalUp);
}

 
 
 
    return 0;
}

#include <stdio.h>
#include<string.h>
#include<math.h>
int main() {

char O;
scanf("%c", &O);
getchar();
double M[12][12];
double sum=0.0;
int count=0;
for(int i=0; i<12; i++){
    for(int j=0; j<12; j++){
    scanf("%lf",&M[i][j]);
    if(i<j && (i+j<12-1)){
       count++;
       sum+=M[i][j];
    }
    }
    
}

 double result = (O == 'S') ? sum : sum / count;
    result = result + 0.0001;
    
    printf("%.1lf\n", result); 
    return 0;
}

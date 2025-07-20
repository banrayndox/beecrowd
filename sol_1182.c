#include <stdio.h>
#include <string.h>
int main() {

int C;
char T;
scanf("%d",&C);
getchar();
scanf("%c",&T);
float sum=0.0;
float M[12][12];
for(int i=0; i<12; i++){
    for(int j=0; j<12; j++){
        scanf("%f",&M[i][j]);
    }
}

for(int i=0; i<12; i++){
    sum+=M[i][C];
}
if(T=='S'){
    printf("%.1f\n", sum);
} else if(T=='M'){
    printf("%.1f\n",sum/12.0);
}

 
    return 0;
}

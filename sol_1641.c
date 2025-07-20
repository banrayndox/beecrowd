#include <stdio.h>
#include <math.h>
#define PI 3.1416 
int main() {
 
int R,W,L;
int count=1;
while(scanf("%d",&R) && R!=0){
scanf("%d %d", &W, &L);
double dTable = R * 2.0;
double dPizza = sqrt(W*W + L*L);


if(dTable>=dPizza){
       printf("Pizza %d fits on the table.\n",count);
}else{
    printf("Pizza %d does not fit on the table.\n",count);
}    
  
  count++;    

  
}

    return 0;
}

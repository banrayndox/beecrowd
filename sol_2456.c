#include <stdio.h>
 
int main() {
int cards[5];
for(int i=0; i<5; i++){
    scanf("%d", &cards[i]);
}
int C=0;
int D=0;
for(int i=0; i<4; i++){
    if(cards[i]<cards[i+1]){
        C++;
    }else if(cards[i]>cards[i+1]){
        D++;
    }
}
if(C==4){
    printf("C\n");
}else if(D==4){
     printf("D\n");
} else{
       printf("N\n"); 
}

    return 0;
}

#include <stdio.h>

int main() {
int N; // size of matrix
int i,j; // initializing loop variable
while(scanf("%d", &N) !=EOF){
int start = N/3;  //  start inner square
int end = N-start; // end of inner square
for(i=0; i<N; i++){ // main loop

    for(j=0; j<N; j++){ // secondery loop
    int x=0; // default or outer
    if(i==j) x=2; //first diagonal 
    if(i+j==N-1) x=3; //secondery diagonal
        if (i >= start && i < end && j >= start && j < end) x = 1;  //inner
    if(i==j && i+j==N-1) x=4; //center point


    printf("%d",x); // print

    if(j==N-1)  printf("\n"); // new line

}    
}    
    printf("\n"); //endline
    
}
    return 0;
}

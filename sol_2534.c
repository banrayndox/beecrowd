
//_______________________R A K I B____B I S W A S H________________________________

// solution 2534 - General Exam - beecrowd

#include <stdio.h> // include header file for input and output
 
int main() { //declare main function
 
int N,Q; // declare two variable 
while(scanf("%d %d", &N, &Q)!=EOF){
int ni[N+1]; // declare N size array for store number of citizens
for(int i=1; i<N+1; i++){ // use loop for take input and fill the ni Array
    scanf("%d", &ni[i]);
}

for(int i=1; i<N; i++){
    for(int j=1; j<N; j++){
        // sort them in the same array
        if(ni[j]<ni[j+1]){
            int temp = ni[j];
            ni[j] = ni[j+1];
            ni[j+1] = temp;
        }    
    }
}    
 int qi[Q+1]; //declare array for store queries
for(int i=1; i<Q+1; i++){ // take input and store into qi array
    scanf("%d", &qi[i]);
}  
for(int i=1; i<Q+1; i++){
//print them by using qi and ni array

    int count = qi[i];
    printf("%d\n", ni[count]);
}
    
}
    return 0;
}

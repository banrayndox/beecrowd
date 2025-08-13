// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#define ll long long
int main() {
char pattern[15], line[1050];
int k=1;
while(scanf("%s", pattern)!=EOF){
scanf("%s", line);
int len_pattern = strlen(pattern);
int len_line = strlen(line);

printf("Caso #%d:\n", k);
int count = 0;
int last_position = 0;
for(int i=0; i<=len_line - len_pattern ; i++){
    if(strncmp(pattern, line+i ,len_pattern) == 0){
        count++;
        last_position = i+1;
    }
}

    if (count == 0) {
            printf("Nao existe subsequencia\n");
        } else {
            printf("Qtd.Subsequencias: %d\n", count);
            printf("Pos: %d\n", last_position);
        }
        printf("\n");
k++;
}

    return 0;
}

#include <stdio.h>
#include <string.h> 
#include <ctype.h>
int main() {
 
int N;
scanf("%d", &N);
getchar();
while(N--){
    char line[201];
    int digit[26]={0};
    fgets(line,sizeof(line), stdin);
    int len = strlen(line);

    if(line[len-1] == '\n') { 
        line[len-1] = '\0'; 
        len--;
    }

    for(int i=0; line[i]!='\0'; i++){
        if(isalpha(line[i])){
          char lower = tolower(line[i]);
          digit[lower-'a']++;
        }
        
    }
    int highest = 0;
    for(int i=0; i<26; i++){
        if(digit[i]>highest) highest = digit[i];
    }
    
    for(int i=0; i<26; i++){
        if(digit[i]==highest) printf("%c",'a'+i);
    }
    putchar('\n');
}
 
    return 0;
}

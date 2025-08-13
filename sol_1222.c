#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
 
 int total_words,max_line_page,max_char_line;
 while(scanf("%d %d %d", &total_words, &max_line_page, &max_char_line)!=EOF){
  char words_list[total_words][max_char_line];
  for(int i=0; i<total_words; i++){
      scanf("%s", words_list[i]);
  }
   int line_count = 1;
   int page_count = 1;
   int chars = 0;
   for(int i=0; i<total_words; i++){
       int len = strlen(words_list[i]);
       if(chars==0){
           chars+= len;
       }else{
           if(chars + 1 + len <= max_char_line){
           chars+= 1 + len;
           }else{
               line_count++;
               chars = len;
               if(line_count> max_line_page){
                   page_count++;
                   line_count = 1;
               }
           }
       }
       
       
   }
   
   
   printf("%d\n", page_count);
 }
    return 0;
}

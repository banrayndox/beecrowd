#include <stdio.h>
#include <string.h>
#define ll long long
int main() {
  ll dollars,cents;
 while(scanf("%lld %lld", &dollars, &cents)!= EOF){
  char converted[25];
  sprintf(converted, "%lld", dollars);
  int len = strlen(converted);
  int comma_count = (len-1)/3;
  int total_len = len+comma_count;
  char converted_dollars[total_len+1];
       converted_dollars[total_len] = '\0';
  int count = 0;
  int position = total_len-1;
  int pos = len-1;
  while(position >=0){
      count++;
    converted_dollars[position--] = converted[pos--];
    if(count==3 ){
        converted_dollars[position--] = ',';
        count = 0;
    }
  }

  printf("$%s.%02lld\n", converted_dollars,cents);
 }
    return 0;
}

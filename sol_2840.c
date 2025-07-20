#include <stdio.h>
int main() {
 
int R,L,ans;
scanf("%d %d", &R, &L);
double result = (4.0 / 3.0) * 3.1415 * R * R * R;
ans = L/result;
 printf("%d\n", ans);
    return 0;
}

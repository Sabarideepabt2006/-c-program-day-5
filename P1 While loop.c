#include<stdio.h>
int main() {
  int N,i=0;
  int noise,violation=0,cstreak=0,lstreak=0;
  scanf("%d",&N);
  while(i<N) {
    scanf("%d",&noise);
    if(noise > 70) {
      violation++;
      cstreak++;
      if (cstreak>lstreak) {
        lstreak=cstreak;
      }
    }
      else {
        cstreak=0;
      }
      i++;
    }
    printf("Noise Violations: %d\n",violation);
    printf("Longest Violation Streak: %d\n",lstreak);
    return 0;

}
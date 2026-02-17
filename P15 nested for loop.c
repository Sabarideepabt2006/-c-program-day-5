#include <stdio.h>
int main() {
    int a=65;
    for (int i=4;i>=0;i--) {
        for (int j=0;j<=i;j++) {
            printf("%c",a+j);
        }
        printf("\n");
    }
   return 0;
}
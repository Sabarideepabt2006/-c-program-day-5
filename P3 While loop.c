#include<stdio.h>
int main() {
    int data;
    int n;
    int used;
    int i=0,days=0;
    scanf("%d %d",&data,&n);
    while(i<n && data>0) {
        scanf("%d",&used);
        data=data-used;
        days++;
        if (data<=0) {
            data=0;
            break;
        }
        i++;
    }
    printf("Days used:%d\n",used);
    printf("remaining:%d\n",data);
    return 0;
}
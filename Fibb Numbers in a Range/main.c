#include<stdio.h>
#include<math.h>

int main(){
    int a,n=0,p=1,c=0;
    printf("Enter a range to find fibbonaci numbers: ");
    scanf("%d",&a);
    while(n<a){
        printf("%d, ",n);
        c=n+p;
        n=p;
        p=c;
    }
    return 0;
    }



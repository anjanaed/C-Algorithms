#include<stdio.h>
#include<math.h>

int main(){
    int a,c,d,count=0,count1=0,f=0,p;
    printf("Enter a range to find armstrong numbers: ");
    scanf("%d",&a);
    for (int i=a;i>9;i--) {
        d = i;
        while (d >= 1) {
            count = count + 1;
            d = d / 10;
        }
        p=i;
        while(p>=1){
            c=p%10;
            f=f+pow(c,count);
            p=p/10;
        }
        if(i==f){
            printf("%d, ",i);
            count1=count1+1;
        }
        count=0;
        f=0;
    }
    printf("\n");
    printf("There are %d Armstrong numbers between 0 - %d",count1,a);
    return 0;
    }
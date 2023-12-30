#include<stdio.h>
#include<math.h>

int main(){
    int n,count=0,p,x,q,tot=0;
    scanf("%d",&n);
    p=n,q=n;
    while (p>0){
        p=p/10;
        count=count+1;
    }
    for(int i=count;i>0;i--){
        x=q%10;
        tot+=(x*pow(10,i-1));
        q=q/10;
    }
    if (n==tot){
        printf("%d is a Palindrome Number!",n);
    }
}
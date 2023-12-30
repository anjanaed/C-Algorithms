#include<stdio.h>

int main(){
    int a;
    printf("Enter the Range to find Prime numbers: ");
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count=count+1;
            }
        }
        if(count==2){
            printf("%d,",i);
        }
    }
}
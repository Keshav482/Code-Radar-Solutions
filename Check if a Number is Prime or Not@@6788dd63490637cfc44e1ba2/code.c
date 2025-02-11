#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int c=0;
    for(int i=2;i<=a;i++){
        if(a%i==0){
            c+=1;
        }
    }
    if(c<=1){
        printf("Prime");
    }
    else{
        printf("Not Prime")
    }
    return 0;
}
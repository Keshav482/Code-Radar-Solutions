#include <stdio.h>
int isPrime(num){
    int c=0;
    for (int i=1;i<=num;i++){
        if(num%i==0){
            c++;
        }
    }
    if(c==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d", isPrime(num));

    }
    return 0;

}
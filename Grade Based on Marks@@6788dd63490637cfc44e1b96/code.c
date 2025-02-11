#include <stdio.h>
int main() {
    int c;
    scanf("%d", &c);
    if (c>=90) {
        printf("A");
    }
    else if (c>=80 && c<90) {
        printf("B");
    }
    else if (c>=70 && c<80) {
        printf("C");
    }
    else if(c>=60 && c<70){
        printf("D");
    }
    else{
        printf("F");
    }

    return 0;
}

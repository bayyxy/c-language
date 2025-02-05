#include <stdio.h>

int main () {
    int a = 0;
    int b = 1;
    int i;
    
    for(i = 0;i<7;i++){
        
        printf("%d\t",b);
        a+=1;
        b+=a;
    }
    return 0;
}
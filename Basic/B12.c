#include <stdio.h>
#include <stdlib.h>
int f(int n){
    if(n == 0 || n == 1){
        return n + 1;
    }
    else{
        return f(n - 1) + f(abs(n / 2));
    }
}
int main(){
    int inp;
    scanf("%d", &inp);
    printf("%d\n", f(inp));
    return 0;
}
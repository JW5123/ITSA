#include <stdio.h>
int power(int x, int n){
    if(n == 0)
        return 1;
    else
        return (x * power(x, n - 1));
}
int main(){
    int a, b;
    while(scanf("%d %d", &a, &b) != EOF){
        printf("%d\n", power(a, b));
    }
    return 0;
}
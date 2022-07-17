#include <stdio.h>
#include <stdbool.h>
bool m(int num){
    for(int i = 2; i <= num / 2; ++i){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int inp;
    scanf("%d", &inp);
    if(m(inp))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
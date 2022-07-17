#include <stdio.h>
int main(){
    int n;
    int x1, y1, x2, y2; 
    char p;
    scanf("%d", &n);
    while(n--){
        scanf(" %c %d %d %d %d", &p, &x1, &y1, &x2, &y2);
        switch (p){
            case '+':
                printf("%d %d\n", x1 + x2, y1 + y2);
                break;
            case '-':
                printf("%d %d\n", x1 - x2, y1 - y2);
                break;
            case '*':
                printf("%d %d\n", x1 * x2 - y1 * y2, x2 * y1 + x1 * y2);
                break;
        }
    }
    return 0;
}

/*
case '/':
    printf("%d %d\n", (x1 * x2 + y1 * y2) / (x2 * x2 + y1 * y2), (x2 * y1 - x1 * y2) / (x2 * x2 + y1 * y2));
    break;
*/
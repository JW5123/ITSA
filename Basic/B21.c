#include <stdio.h>
int main(){
    double n[10];
    double max, min;
    max = min = n[0];
    for(int i = 1; i <= 10; ++i){
        scanf("%lf", &n[i]);
        if(n[i] > max){
            max = n[i];
        }
        if(n[i] < min){
            min = n[i];
        }
    }
    printf("maximum:%.2lf\n", max);
    printf("minimum:%.2lf\n", min);
    return 0;
}
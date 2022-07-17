#include <stdio.h>
#define MAX 10
int main(){
    double arr[MAX], sum = 0;
    for(int i = 0; i < MAX; i++){
        scanf("%lf", &arr[i]);
        sum += arr[i] * arr[i];
    }
    printf("%.6lf\n", sum);
    return 0;
}
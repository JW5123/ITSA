#include <stdio.h>
#include <stdlib.h>
int comp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
int main(){
    int n;
    float arr[20];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }
    qsort(arr, n, sizeof(int), comp);
    printf("%.2f\n", arr[n - 1]);
    printf("%.2f\n", arr[0]);
    return 0;
}
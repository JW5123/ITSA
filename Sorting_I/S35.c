#include <stdio.h>
#define N 7
int main(){
    int a[N] = {1, 6, 9, 23, 56, 95};
    int inp;
    scanf("%d", &inp);
    for(int i = 0 ; i < N; i++){
        if(a[i] > inp){ //compare
            for(int j = N - 1; j > i; j--){
                a[j] = a[j - 1];
            }
            a[i] = inp;
            break;
        }
    }
    for(int i = 0; i < N; i++){
        if(i == 6)
            printf("%d", a[i]);
        else
            printf("%d,", a[i]);
    }
    printf("\n");
    return 0;
}

/*
#include <stdio.h>
#include <stdlib.h>
#define N 7
int comp(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}
int main(){
    int a[] = {1, 6, 9, 23, 56, 95, 0};
    scanf("%d", &a[6]);
    qsort(a, N, sizeof(int), comp);
    for(int i = 0 ; i < N; i++){
        if(i == 0)
            printf("%d", a[i]);
        else
            printf(",%d", a[i]);
    }
    printf("\n");
    return 0;
}
*/
#include <stdio.h>
int main(){
    int m, n, count;
    scanf("%d %d", &m, &n);
    int arr[m * n];
    for(int i = 0; i < m * n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            count++;
            printf("%d", arr[j * n + i]);
            if(count % m != 0){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
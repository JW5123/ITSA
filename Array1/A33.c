//轉置矩陣
#include <stdio.h>   
#include <stdlib.h>   
int main(){   
    int N, M, count;   
    scanf("%d %d", &N, &M);   
    if(N == 0 || M == 0){   
        exit(EXIT_SUCCESS);   
    }   
    int arr[N * M];   
    for(int i = 0; i < N * M; i++){   
        scanf("%d", &arr[i]);   
    }   
    for(int i = 0; i < M; i++){   
        for(int j = 0; j < N; j++){   
            count++;   
            printf("%d", arr[j * M + i]);   
            if(count % N != 0){   
                printf(" ");   
            }   
        }   
        printf("\n");   
    }   
    return 0;   
}  
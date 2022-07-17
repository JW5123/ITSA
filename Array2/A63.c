#include <stdio.h>
int main(){
    int M, N;
    scanf("%d %d", &M, &N);
    int A[M][N], B[M][N];
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &A[i][j]);
        }
    }
    scanf("%d %d", &M, &N);
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &B[i][j]);
        }
    }
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            if(j != 0){
                printf(" ");
            }
            printf("%d", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
}
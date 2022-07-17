#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    bool win = false;
    for(int i = 0 ; i < 3; i++){
        if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
            win = true;
        if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
            win = true;
    }
    if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
        win = true;
    if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
        win = true;
    if(win == true)
        printf("True\n");
    else
        printf("False\n");
    return 0;
}



/*
if(arr[0][0] == arr[1][0] && arr[1][0] == arr[2][0])
        printf("True\n");
    else if(arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1])
        printf("True\n");
    else if(arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2])
        printf("True");
    else if(arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2])
        printf("True\n");
    else if(arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2])
        printf("True\n");
    else if(arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])
        printf("True\n");
    else if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
        printf("True\n");
    else if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
        printf("True\n");
    else
        printf("False\n");
*/
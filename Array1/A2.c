#include <stdio.h>
void revers(int arr[], int first, int last){
    while (first < last){
        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
        first++;
        last--;
    }
}
int main(){
    int arr[6];
    for(int i = 0; i < 6; i++){
        scanf("%d", &arr[i]);
    }
    revers(arr, 0, 5);
    for(int i = 0; i < 6; i++){
        if(i != 5){
            printf("%d ", arr[i]);
        }
        else{
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}
/*
#include <stdio.h>
int main(){
    int arr[6];
    for(int i = 0; i < 6; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < 3; i++){
        int temp = arr[i];
        arr[i] =  arr[5 - i];
        arr[5 - i] = temp;
    }
    for(int i = 0; i < 6; i++){
        if(i != 5){
            printf("%d ", arr[i]);
        }
        else{
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}
*/
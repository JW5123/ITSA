#include <stdio.h>
#include <math.h>
int main(){
    int arr[6], sum = 0;
    for(int i = 0 ; i < 6; i++){
        scanf("%d", &arr[i]);
        sum += pow(arr[i], 3);
    }   
    printf("%d\n", sum);
    return 0;
}

/*
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int arr[6], sum = 0;
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
        sum += pow(arr[i], 3);
    }
    cout << sum << endl;
    return 0;
}
*/
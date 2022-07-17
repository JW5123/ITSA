#include <stdio.h>
int main(){
    char arr[12][10] = {"rat", "ox", "tiger", "rabbit", "dragon", "snake", 
                        "horse", "sheep", "monkey", "rooster", "dog", "pig"};
    int inp;
    scanf("%d", &inp);
    int sum = (inp - 1912) % 12;
    printf("%s\n", arr[sum]);
    return 0;
}
/*
#include <stdio.h>
int main(){
    int inp;
    scanf("%d", &inp);
    int sum = (inp - 1912) % 12;
    switch (sum){
    case 0: printf("rat\n"); break;
    case 1: printf("ox\n"); break;
    case 2: printf("tiger\n"); break;
    case 3: printf("rabbit\n"); break;
    case 4: printf("dragon\n"); break;
    case 5: printf("snake\n"); break;
    case 6: printf("horse\n"); break;
    case 7: printf("sheep\n"); break;
    case 8: printf("monkey\n"); break;
    case 9: printf("rooster\n"); break;
    case 10: printf("dog\n"); break;
    case 11: printf("pig\n"); break;
    }
    return 0;
}
*/
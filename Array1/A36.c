#include <stdio.h>  
int main(){  
    char arr[12][20] = {"Capricorn" ,"Aquarius", "Pisces",   
                        "Aries", "Taurus", "Gemini",   
                        "Cancer", "Leo", "Virgo",   
                        "Libra", "Scorpio", "Sagittarius"};  
    int m, d;  
    scanf("%d %d", &m, &d);  
    switch (m){  
    case 1: printf("%s\n", d < 21 ? arr[0] : arr[1]); break;  
    case 2: printf("%s\n", d < 19 ? arr[1] : arr[2]); break;  
    case 3: printf("%s\n", d < 21 ? arr[2] : arr[3]); break;  
    case 4: printf("%s\n", d < 21 ? arr[3] : arr[4]); break;  
    case 5: printf("%s\n", d < 22 ? arr[4] : arr[5]); break;  
    case 6: printf("%s\n", d < 22 ? arr[5] : arr[6]); break;  
    case 7: printf("%s\n", d < 23 ? arr[6] : arr[7]); break;  
    case 8: printf("%s\n", d < 24 ? arr[7] : arr[8]); break;  
    case 9: printf("%s\n", d < 24 ? arr[8] : arr[9]); break;  
    case 10: printf("%s\n", d < 24 ? arr[9] : arr[10]); break;  
    case 11: printf("%s\n", d < 23 ? arr[10] : arr[11]);break;  
    case 12: printf("%s\n", d < 22 ? arr[11] : arr[0]); break;  
    default:  
        break;  
    }  
    return 0;  
}  
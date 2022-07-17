#include <stdio.h>
#include <string.h>
int main()
{
    char in[999], *str;
    while (gets(in) != NULL)
    {
        int n = 0, a[999], sun = 0;
        float ave;
        str = strtok(in, " ");
        while (str != NULL)
        {
            sscanf(str, "%d", &a[n]);
            n++;
            str = strtok(NULL, " ");
        }
        for (int i = 0; i < n; i++)
            sun += a[i];
        ave = (float)sun / (float)n;
        printf("Size: %d\n", n);
        printf("Average: %.3f\n", ave);
    }
    return 0;
}
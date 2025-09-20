#include<stdio.h>
int main()
{
    int KB,MB,GB,bytes;
    printf("Enter bytes:");
    scanf("%d",&bytes);
    KB = bytes / 1024;
    printf("%d = %d / 1024 = KB.\n",KB,bytes);
    MB = bytes / (1024 * 1024);
    printf("%d = %d / (1024 * 1024) = MB.\n",MB,bytes);
    GB = bytes / (1024 * 1024 *1024);
    printf("%d = %d / (1024 * 1024 * 1024) = GB.\n",GB,bytes);
    return 0;
}

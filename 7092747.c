#include <stdio.h>
 
#define SIZE 101
 
int main(int argc, char **argv)
{
    char str[SIZE];
 
    while (fgets(str, SIZE, stdin))
    {
        printf("%s", str);
    }
 
    return 0;
}

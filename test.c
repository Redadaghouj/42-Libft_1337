#include <stdio.h>
#include <unistd.h>

int main()
{
    char c = 'x';
    write(1, &c, 1);
    return 0;
}
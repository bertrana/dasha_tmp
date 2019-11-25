// Разработать фильтр, ограничивающий длину каждой строки 69 символами.

#include <stdio.h>

int main()
{
    int c;
    auto cnt = 0;
    while ((c = getchar()) != EOF){
        if (c == '\n')
            cnt = 0;
        else
            cnt = cnt + 1;
        if (cnt <= 69)
            putchar(c);
    }
}

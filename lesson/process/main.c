#include "process.h"
void test()
{
    int rate = 2;
    int total = 2048;
    int current = 0;

    while (current < total)
    {
        current += rate;
        if (current > total)
            current = total;
        process(current, total);
    }

    printf("\n");
}

int main()
{
    test();
    return 0;
}

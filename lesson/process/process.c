#include "process.h"
#include <unistd.h>

#define M 100

void process(double downloaded, double total)
{
    if (downloaded > total || total <= 0) return;

    static const char *str = "/|\\-";
    static int pos = 0;

    double rate = downloaded * 100.0 / total;
    char arr[M + 1] = {0};
    int current = (int)rate;

    for (int i = 0; i < current; i++)
    {
        arr[i] = '=';
    }

    printf("[%-100s][%.2f%%][%c]\r", arr, rate, str[pos]);
    fflush(stdout);
    usleep(100000);

    pos = (pos + 1) % 4;
}

void processSimple(void)
{
    char *str = "/|\\-";
    char arr[M + 1] = {0};

    for (int i = 0; i <= M; i++)
    {
        arr[i] = '=';
        printf("[%-100s][%3d%%][%c]\r", arr, i, str[i % 4]);
        fflush(stdout);
        usleep(100000);
    }
    printf("\n");
}

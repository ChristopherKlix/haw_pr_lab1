#include <stdio.h>
#include <errno.h>
#include <time.h>

int msleep(long msec);


int main(int argc, char const *argv[])
{
    fprintf(stderr, "┌─────────────────────────────┐\n");
    fprintf(stderr, "│  Computing      0           │\n");
    fprintf(stderr, "└─────────────────────────────┘");
    fprintf(stderr, "\33[1A\33[1000C");

    for (int i = 0; i < 20; i++)
    {
        fprintf(stderr, "\33[2K\r");
        fprintf(stderr, "│  Computing    %-3d           │", i);
        // fprintf(stderr, "\33[2K");
        // fprintf(stderr, "\r");
        msleep(100);
    }

    fprintf(stderr, "\33[1B");
    fprintf(stderr, "\n");
    return 0;
}


int msleep(long msec)
{
    struct timespec ts;
    int res;

    if (msec < 0)
    {
        errno = EINVAL;
        return -1;
    }

    ts.tv_sec = msec / 1000;
    ts.tv_nsec = (msec % 1000) * 1000000;

    do {
        res = nanosleep(&ts, &ts);
    } while (res && errno == EINTR);

    return res;
}
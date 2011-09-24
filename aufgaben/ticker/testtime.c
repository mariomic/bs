#include <time.h>
  #include <stdio.h>

  int main(void)
  {
    time_t t;
    struct tm *ts;

    t = time(NULL);
    ts = localtime(&t);
    printf("Aktuelle Zeit: %s", asctime(ts));

    return 0;
  }

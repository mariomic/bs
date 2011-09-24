#include <time.h>
  #include <stdio.h>

  int main(void)
  {
    time_t t;
    struct tm *ts;
//test
    t = time(NULL);
    ts = localtime(&t);
    printf("Aktuelle Zeit: %s", asctime(ts));

    return 0;
  }

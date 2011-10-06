#include<stdio.h>

int main() {
  int a = 10;
  printf("a bevor sub: %d\n", a);
  sub(a);

  printf("a  nach sub: %d\n", a);

}

sub(int b) {
 b = b - 1;
}

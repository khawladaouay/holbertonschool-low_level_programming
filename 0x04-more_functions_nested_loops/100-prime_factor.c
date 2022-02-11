#include <stdio.h>
int main() {
  long f, n;
  n=612852475143;
  f=2;
    while (f * f <= n)
    {
        while (n % f == 0)
        {
            n /= f;
        }
        f++;
    }
    if (n > 1)
printf("%ld", f);

   return 0;
}

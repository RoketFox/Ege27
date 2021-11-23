#include <iostream>
#include <inttypes.h>
using namespace std;

void count_of_prod()
{

   uint32_t n; cin >> n;
   uint32_t nn, n5, n11, n55;

   nn = n5 = n11 = n55 = 0;

   for (uint32_t i = 0; i < n; i++)
   {
        int a; cin >> a;
        if (a % 55 == 0)
            n55++;
        else if (a % 5 == 0)
            n5++;
        else if (a % 11 == 0)
            n11++;
   }
   nn = n - n55 - n11 - n5;
   cout << n55*n11+n55*n5+n55*nn+n55*(n55-1)/2+n5*n11;
}

int main()
{
    count_of_prod();
}

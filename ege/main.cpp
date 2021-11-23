#include <iostream>
#include <inttypes.h>

using namespace std;

void count_of_prod()
{
    /**
    n55*(n55-1)/2+55n*n5+n55*n11+n55*no+n11
    */

   int n; cin >> n;
   int nn, n2, n7, n11, n14, n22, n77, n154;
   cout << n << endl;

   nn = n2 = n7 = n11 = n14 = n22 = n77 = n154 = 0;

   for (int i = 0; i < n; i++)
   {
        int a; cin >> a;
        if      (a % 154 == 0) n154++;
        else if (a % 77  == 0) n77++;
        else if (a % 22  == 0) n22++;
        else if (a % 14  == 0) n14++;
        else if (a % 11  == 0) n11++;
        else if (a % 7   == 0) n7++;
        else if (a % 2   == 0) n2++;
        else                   n++;
   }

   ///cout << n55*n11+n55*n5+n55*nn+n55*(n55-1)/2+n5*n11;
   cout << " " << nn<< " " << n2<< " " << n7<< " " << n11<< " " << n14<< " " << n22<< " " << n77<< " " << n154 << " " << endl;
   cout << n154*nn + n154*n2 + n154*n7 + n154*n11 + n154*n14 + n154*n22 + n154*n77 + n154*(n154-1)/2 + n14*n11 + n14*n77 + n14*n22 + n22*n77 + n22*n7 + n77*n2;
}

int main()
{
    count_of_prod();
    return 0;
}

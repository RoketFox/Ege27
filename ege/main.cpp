#include <iostream>

using namespace std;

void number_sums_div_eff_1()
{
       int n; cin >> n;
       int odd(0);
       int even(0);

       for (int i = 0; i < n; i++)
       {
           int a(0); cin >> a;
           if (a % 2 == 1 && a > odd)  odd  = a;
           if (a % 2 == 0 && a > even) even = a;
       }
       if (odd > 0 && even > 0) cout << odd + even << endl;
       else cout << -1 << endl;
}

int main()
{
    number_sums_div_eff_1();
    return 0;
}

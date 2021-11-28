#include <iostream>

using namespace std;

void number_sums_div_eff_2()
{
       int n; cin >> n;
       int divisible(0);
       int summand  (0);

       for (int i = 0; i < n; i++)
       {
           int a(0); cin >> a;
           if (a % 3 == 0 && a > divisible && (a + summand) % 7 == 0) divisible = a;
           else if ((a + divisible) % 7 == 0 && a > summand) summand = a;
       }
       cout << divisible << " " << summand << endl;
}

int main()
{
    number_sums_div_eff_2();
    return 0;
}

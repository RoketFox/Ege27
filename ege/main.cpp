#include <iostream>
#include <array>

using namespace std;

void _1630()
{
    int n(0);
    cin >> n;

    array<array<int,2>,6> arr;
    arr.fill(array<int,2>{0,0});

    for (int i(0); i < n; i++)
    {
        int a(0);
        cin >> a;
        if (arr[i%6][0] <= arr[i%6][1] && arr[i%6][0] < a)
            arr[i%6][0] = a;
        else if(arr[i%6][1] < a)
            arr[i%6][1] = a;
    }
    int s1 = max(arr[0][0] + arr[0][1], arr[1][0] + arr[1][1]);
    int s2 = max(arr[2][0] + arr[2][1], arr[3][0] + arr[3][1]);
    int s3 = max(arr[4][0] + arr[4][1], arr[5][0] + arr[5][1]);

    int fin = std::max(max(s1,s2),s3);

    cout << fin << endl;
}

int main()
{
    _1630();
    return 0;
}

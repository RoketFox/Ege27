#include <iostream>
#include <vector>

using namespace std;

void number_products_div_ineff_2()
{
    /**
    1. ������� � ��������� ������� �����
    2. ������� ��� ���� �����
    3. ������ ������ ��� ��������� ������������
    4. ������� ����, ������������ ������� ����� 22
    5. ������ ���-�� ���
    */

        int n(0);
    cin >> n;

    vector<int> numbers(n,0);

    for (int i(0);i<n;i++)
        cin >> numbers[i];

    for (int i(0);i<n-1;i++)
        for (int j(i+1);j<n;j++)
            if ((numbers[i]*numbers[j])%42 == 0)
                cout << numbers[i] << " " << numbers[j] << endl;
}

int main()
{
    number_products_div_ineff_2();
    return 0;
}

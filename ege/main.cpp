#include <iostream>

// all works good

void max_3nums_div_by4_eff()
{
    int N;
    std::cin >> N;

    int fin1 = 0, fin2 = 0, fin3 = 0;
    int finHelp1 = 0, finHelp2 = 0;

    for (int i = 0; i < N; i++)
    {
        int a;
        std::cin >> a;

        if ((a%2)==0 && (a%4)!=0)
        {
            if (finHelp1<finHelp2)
            finHelp1 = std::max(finHelp1,a);
            else
            finHelp2 = std::max(finHelp2,a);

            if (fin3<fin2)
            fin3 = std::max(fin3,a);
            else
            fin2 = std::max(fin2,a);
        }
        else if ((a % 4) == 0)
        {
            fin1 = a;
        }
        else
        {
            if (fin3<fin2)
            fin3 = std::max(fin3,a);
            else
            fin2 = std::max(fin2,a);
        }
    }

    if (fin1 != 0)
    {
        std::cout <<" "<< fin1 <<" "<< fin2 <<" "<< fin3 << " ";
    }
    else if (finHelp1 != 0 && finHelp2 != 0)
    {
        std::cout <<" "<< finHelp1 <<" "<< finHelp2 <<" "<< fin3 << " ";
    }
    else
    {
        std::cout <<"FAIL";
    }
}

int main()
{
    max_3nums_div_by4_eff();
    return 0;
}

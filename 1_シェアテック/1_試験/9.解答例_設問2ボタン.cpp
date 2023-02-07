#include <iostream>

void display99(int lNum, int rNum, int skip)
{
    for (int l = 1; l <= lNum; l++)
    {
        for (int r = 1; r <= rNum; r++)
        {
            const int ans = l * r;
            if ((ans % skip) != 0)
            {
                std::cout << l << " x " << r << " = " << ans << std::endl;
            }
        }
    }
}

int main(int argc, char **argv)
{
    std::cout << "=== 1回目 ===" << std::endl;
    ::display99(9, 9, 2);
    std::cout << "=== 2回目 ===" << std::endl;
    ::display99(7, 9, 3);
    return 0;
}
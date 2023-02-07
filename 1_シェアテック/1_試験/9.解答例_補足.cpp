#include <iostream>
#include <functional>

void display99(int lNum, int rNum, int skip, std::function<void(int l, int r, int ans)> func)
{
    for (int l = 1; l <= lNum; l++)
    {
        for (int r = 1; r <= rNum; r++)
        {
            const int ans = l * r;
            if ((ans % skip) != 0)
            {
                func(l, r, ans);
            }
        }
    }
}

int main(int argc, char **argv)
{
    auto func = [](int l, int r, int ans)
    { std::cout << l << " x " << r << " = " << ans << std::endl; };

    std::cout << "=== 1回目 ===" << std::endl;
    ::display99(9, 9, 2, func);
    std::cout << "=== 2回目 ===" << std::endl;
    ::display99(7, 9, 3, func);
    return 0;
}
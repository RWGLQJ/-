#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int main()
{
    double times;
    cout << "按空格键开始连点，ESC键退出" << endl;
    cout << "请输入连点距离：";
    cin >> times;
    while (true)
    {
        if (typeid(times) != typeid(double))
        {
            cout << "请输入连点距离：";
            cin >> times;
        }
        else { break; }
    }
    while (true)
    {
        if (GetAsyncKeyState(VK_SPACE))
        {
            mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(times);
            if (GetAsyncKeyState(VK_ESCAPE))break;
        }
    }
    return 0;
}
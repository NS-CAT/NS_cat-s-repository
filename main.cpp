#include "Menu.h"
#include "pch.h"
#include "service.h"
int main()
{
    char selection;   // 输入菜单项编号 

    cout << endl;
    cout << "★欢迎进入计费管理系统★" << endl;
    cout << endl;

    do
    {
        outputMenu();

        selection = 'a'; // 初始化选择的菜单项编号为'a' 
        cin >> selection; // 输入菜单项编号 
        cin.clear();
        cin.sync();

        switch (selection) //输出选择的菜单编号 
        {
        case '1':
        {
            cout << endl << "-------添加卡--------" << endl << endl;
			addCard();
            break;
        }
        case '2':  // 查询卡 
        {
            cout << endl << "-------查询卡--------" << endl << endl;
            break;
        }
        case '3':
        {
            cout << endl << "-------上机----------" << endl << endl;
            break;
        }
        case '4':  // 下机 
        {
            cout << endl << "-------下机----------" << endl << endl;
            break;
        }
        case '5':
        {
            cout << endl << "-------充值----------" << endl << endl;
            break;
        }
        case '6':
        {
            cout << endl << "-------退费----------" << endl << endl;
            break;
        }
        case '7':
        {
            cout << endl << "-----查询统计--------" << endl << endl;
            break;
        }
        case '8':
        {
            cout << endl << "------注销卡---------" << endl << endl;
            break;
        }
        case '0':   // 退出 
        {
            cout << endl << "谢谢你使用本系统！" << endl << endl;
            break;
        }
        default:
        {
            cout << "输入的菜单编号错误！\n";
            break;
        }
        }
        cout << endl;
    } while (selection != '0');
    return 0;
}
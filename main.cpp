#include "Menu.h"
#include "pch.h"
#include "service.h"
int main()
{
    char selection;   // ����˵����� 

    cout << endl;
    cout << "�ﻶӭ����Ʒѹ���ϵͳ��" << endl;
    cout << endl;

    do
    {
        outputMenu();

        selection = 'a'; // ��ʼ��ѡ��Ĳ˵�����Ϊ'a' 
        cin >> selection; // ����˵����� 
        cin.clear();
        cin.sync();

        switch (selection) //���ѡ��Ĳ˵���� 
        {
        case '1':
        {
            cout << endl << "-------��ӿ�--------" << endl << endl;
			addCard();
            break;
        }
        case '2':  // ��ѯ�� 
        {
            cout << endl << "-------��ѯ��--------" << endl << endl;
            break;
        }
        case '3':
        {
            cout << endl << "-------�ϻ�----------" << endl << endl;
            break;
        }
        case '4':  // �»� 
        {
            cout << endl << "-------�»�----------" << endl << endl;
            break;
        }
        case '5':
        {
            cout << endl << "-------��ֵ----------" << endl << endl;
            break;
        }
        case '6':
        {
            cout << endl << "-------�˷�----------" << endl << endl;
            break;
        }
        case '7':
        {
            cout << endl << "-----��ѯͳ��--------" << endl << endl;
            break;
        }
        case '8':
        {
            cout << endl << "------ע����---------" << endl << endl;
            break;
        }
        case '0':   // �˳� 
        {
            cout << endl << "лл��ʹ�ñ�ϵͳ��" << endl << endl;
            break;
        }
        default:
        {
            cout << "����Ĳ˵���Ŵ���\n";
            break;
        }
        }
        cout << endl;
    } while (selection != '0');
    return 0;
}
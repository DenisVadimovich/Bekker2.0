#include "class.h"
#include <iostream>
#include <fstream>
#include "interface.h"

using namespace std;

Casir::Casir(){

}
Casir::~Casir(){

}
Boss::Boss(){

}
Boss::~Boss(){

}
void Casir::CasirMenu(){
    cout << "Sales Menu" << endl;
    cout << "1. Add a product" << endl;
    cout << "2. Delete product" << endl;
    cout << "3. Final receipt" << endl;
    cout << "4. Logout" << endl;
    cout << "Choice: ";
    cin >> Choice;
    switch (Choice){
    case 1:
        system("cls");
        cout << "Choose the type of product" << endl;
        cout << "1. Cake" << endl;
        cout << "2. Bun" << endl;
        cout << "3. Drink" << endl;
        cout << "Choice: ";
        switch(Choice){
            case 1:
            //Работа с файлами
            break;
            case 2:
            //Работа с файлами
            break;
            case 3:
            //Работа с файлами
            break;
        }
    case 2:
        //Работа с файлами
        break;
    case 3:
    //Автоматический подсчет суммы
        break;
    case 4:
    {
        system("cls");
        UserInterface theUserInterface;
        theUserInterface.interact();
    }
}
 }

void Boss::BossMenu(){
    string line;
    mainmenu:
    cout << "Sales Menu" << endl;
    cout << "1. Today buyings" << endl;
    cout << "2. Storage orders" << endl;
    cout << "3. Income and taxes" << endl;
    cout << "4. Logout" << endl;
    cout << "Choice: ";
    cin >> Choice;
    switch (Choice){
    case 1:
        //Вывести покупки
        break;
    case 2:
        system("cls");
        prev:
        cout << "Orders menu" << endl;
        cout << "1. Show orders" << endl;
        cout << "2. Edit orders" << endl;
        cout << "3. Exit to main menu" << endl;
        cout << "Choice: ";
        cin >> Choice1;
        switch(Choice1){
            case 1:
        {
                ifstream in("D:/test/orders.txt"); // окрываем файл для чтения
                if (in.is_open())
                {
                    system("cls");
                    while (getline(in, line))
                    {
                        cout << line << endl;
                    }
                    cout << "\n" << "\n" <<"\n" << "Type q for exit";
                    cin >> kbtn;
                    switch (kbtn)
                    {
                    case 'q':
                    {
                        system("cls");
                        Choice1 = 0;
                        goto prev;
                    }
                    }
                }
                else {
                    cout << "error no such file";
                }
                in.close();     // закрываем файл
                break;
        }

            case 2:
            break;

            case 3:
            system("cls");
            Choice = 0;
            goto mainmenu;
            break;

        }
    case 3:
    //Автоматический подсчет прибыли и налогов
        break;
    case 4:
    {
        system("cls");
        UserInterface theUserInterface;
        theUserInterface.interact();
    }
    default:
        cout << "Wrong parameter!";
            break;
    }
}

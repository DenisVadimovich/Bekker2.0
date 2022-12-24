#include <iostream>
#include <string>
#include <header.h>

using namespace std;

int main() {
    int Choice;
    cout << "Sales Menu" << endl;
    cout << "1. Add a product" << endl;
    cout << "2. Delete product" << endl;
    cout << "3. Final receipt" << endl;
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
}
}

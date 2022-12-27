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
Admin::Admin(){

}
Admin::~Admin(){

}
void Casir::CasirMenu(){
    string line;
     int a;
     tochka:
    system("cls");
    cout << "Sales Menu" << endl;
    cout << "1. Add a product" << endl;
    cout << "2. Delete product" << endl;
    cout << "3. Final receipt" << endl;
    cout << "4. Logout" << endl;
    cout << "Choice: ";
    cin >> Choice;
    switch (Choice){
    case 1:
        tochka2:
        system("cls");
        cout << "Choose the type of product" << endl;
        cout << "1. Cake" << endl;
        cout << "2. Bun" << endl;
        cout << "3. Drink" << endl;
        cout << "4. Exit" << endl;
        cout << "Choice: ";
        cin >> Choice;
        switch(Choice){
            case 1:
            system("cls");
        {
            ifstream in("C:\\BekkerFinal\\Cake.txt"); // окрываем файл для чтения
            if (in.is_open())
            {
            while (getline(in, line))
            {
            cout << line << endl;
            }
            }
            else {
            cout << "error";
            }
            in.close(); // закрываем файл
            cout << "Choice: ";
            cin >> (a);
            if (a == 1){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Snickers_Cake" << " 212 Rub"<< endl;
    }
    else
        cout << "error";
            }

            if (a == 2){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Napoleon_Cake" << " 240 Rub"<< endl;
    }
    else
        cout << "error";
            }

            if (a == 3){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Cheese_Cake" << " 570 Rub"<< endl;
    }
    else
        cout << "error";
            }

            if (a == 4){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Sour_Cream_Cake" << " 164 Rub"<< endl;
    }
    else
        cout << "error";
            }
            goto tochka2;
            break;
        }

            case 2:
            system("cls");
        {
            ifstream in("C:\\BekkerFinal\\Bun.txt"); // окрываем файл для чтения
            if (in.is_open())
            {
            while (getline(in, line))
            {
            cout << line << endl;
            }
            }
            else {
            cout << "error";
            }
            in.close(); // закрываем файл
            cout << "Choice: ";
            cin >> (a);
            if (a == 1){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Sausage_In_The_Dough" << " 40 Rub"<< endl;
    }
    else
        cout << "error";
            }

            if (a == 2){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Pizza_Application" << " 25 Rub"<< endl;
    }
    else
        cout << "error";
            }

            if (a == 3){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Cabbage_Pie" << " 15 Rub"<< endl;
    }
    else
        cout << "error";
            }

            if (a == 4){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Pie_With_Filling_Rice_Egg " << " 10 Rub"<< endl;
    }
    else
        cout << "error";
            }
            goto tochka2;
            break;
        }

            case 3:
            system("cls");
        {
            ifstream in("C:\\BekkerFinal\\Drink.txt"); // окрываем файл для чтения
            if (in.is_open())
            {
            while (getline(in, line))
            {
            cout << line << endl;
            }
            }
            else {
            cout << "error";
            }
            in.close(); // закрываем файл
            cout << "Choice: ";
            cin >> (a);
            if (a == 1){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Tea" << " 15 Rub"<< endl;
    }
    else
        cout << "error";
            }
            if (a == 2){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Coffee" << " 35 Rub"<< endl;
    }
    else
        cout << "error";
            }
            if (a == 3){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Coca-Cola" << " 80 Rub"<< endl;
    }
    else
        cout << "error";
            }
            if (a == 4){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Fanta" << " 75 Rub"<< endl;
    }
    else
        cout << "error";
            }
            if (a == 5){
    ofstream rec;
    rec.open("C:\\Prov\\Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Sprite" << " 70 Rub"<< endl;
    }
    else
        cout << "error";
            }
            goto tochka2;
            break;
        }
        case 4:
            goto tochka;
        }
        system("pause");
        system("cls");
    case 2:
    {
        system("cls");
        cout << "Delete product:"<< endl;
        ifstream in("C:\\Prov\\Order.txt"); // окрываем файл для чтения
        if (in.is_open())
        {
        while (getline(in, line))
        {
        cout << line << endl;
        }
        }
        cout << "" << endl;
        cout << "Choose main item:" << endl;
        cout << "1. Delete all order" << endl;
        cout << "2. Exit" << endl;

        cout << "Choice: ";
        cin >> Choice;
        switch(Choice){
              case 1:{
            ofstream outfile;
            outfile.open("C:\\Prov\\Order.txt", ofstream::out | ofstream::trunc);
            outfile.close();

        }

              case 2:{
                goto tochka;
        }
        }

        break;
    }
    case 3:
        system ("cls");
    {
        ifstream out("C:\\Prov\\Order.txt");
        if (out.is_open()){
        while (getline(out,line)){
        cout << line << endl;
        }
        }
        out.close();
        string s1,tail;
        int s2 = 0;
        int sum = 0;
        ifstream out1("C:\\Prov\\Order.txt");
        if (out1.is_open()){
        while(out1>>s1>>s2)// в s1 - первое слово, в s2 - второе
        {
            s2 = s2;
            getline(out1,tail); // дочитываем остаток строки
            sum += s2;

        }
        cout <<"Result: " <<sum << endl;
        }
        else
           cout << "error";
        out.close();
        system("pause");
        goto tochka;
        break;
    }
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
void Admin::AdminMenu(){
    cout << "In coming..." << endl;
}

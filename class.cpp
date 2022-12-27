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
            ifstream in("Cake.txt"); // окрываем файл для чтения
            if (in.is_open())
            {
            while (getline(in, line))
            {
            cout << line << endl;
            }
            }
            else {
            cout << "Error! Press any button to get back to menu. " << endl;
            system ("pause");
            goto tochka2;
            }
            in.close(); // закрываем файл
            cout << "Choice: ";
            cin >> (a);
            if (a == 1){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Snickers_Cake" << " 212 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
            }

            if (a == 2){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Napoleon_Cake" << " 240 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
            }

            if (a == 3){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Cheese_Cake" << " 570 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
            }

            if (a == 4){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Sour_Cream_Cake" << " 164 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
            }
            goto tochka2;
            break;
        }

            case 2:
            system("cls");
        {
            ifstream in("Bun.txt"); // окрываем файл для чтения
            if (in.is_open())
            {
            while (getline(in, line))
            {
            cout << line << endl;
            }
            }
            else {
                cout << "Error! Press any button to get back to menu. " << endl;
                system ("pause");
                goto tochka2;
            }
            in.close(); // закрываем файл
            cout << "Choice: ";
            cin >> (a);
            if (a == 1){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Sausage_In_The_Dough" << " 40 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
            }

            if (a == 2){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Pizza_Application" << " 25 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
            }

            if (a == 3){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Cabbage_Pie" << " 15 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
            }

            if (a == 4){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Pie_With_Filling_Rice_Egg " << " 10 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
            }
            goto tochka2;
            break;
        }

            case 3:
            system("cls");
        {
            ifstream in("Drink.txt"); // окрываем файл для чтения
            if (in.is_open())
            {
            while (getline(in, line))
            {
            cout << line << endl;
            }
            }
            else {
                cout << "Error! Press any button to get back to menu. " << endl;
                system ("pause");
                goto tochka2;
            }
            in.close(); // закрываем файл
            cout << "Choice: ";
            cin >> (a);
            if (a == 1){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Tea" << " 15 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
            }
            if (a == 2){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Coffee" << " 35 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
            }
            if (a == 3){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Coca-Cola" << " 80 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
            }
            if (a == 4){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Fanta" << " 75 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
            }
            if (a == 5){
    ofstream rec;
    rec.open("Order.txt", ios::app);
    if (rec.is_open())
    {
       rec << "Sprite" << " 70 Rub"<< endl;
    }
    else
        cout << "Error! Press any button to get back to menu. " << endl;
        system ("pause");
        goto tochka2;
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
        ifstream in("Order.txt"); // окрываем файл для чтения
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
            outfile.open("Order.txt", ofstream::out | ofstream::trunc);
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
        ifstream out("Order.txt");
        if (out.is_open()){
        while (getline(out,line)){
        cout << line << endl;
        }
        }
        out.close();
        string s1,tail;
        int s2 = 0;
        int sum = 0;
        ifstream out1("Order.txt");
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
            cout << "Error! Press any button to get back to menu. " << endl;
            system ("pause");
            goto tochka;
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
        /*UserInterface* mainP;
        mainP->interact();*/
    }
}
}

void Boss::BossMenu(){
    string line;
    string s1 = "",
           tail = "";
    int s2 = 0;
    int sum = 0;
    int tax = 0;
    int sum2 = 0;
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
    {
        system("cls");
        cout << "Today buyings(27.12.2022)" << endl;
        ifstream out("Order.txt");
        if (out.is_open()){
        while (getline(out,line)){
        cout << line << endl;
        }
        }
        out.close();
        ifstream out1("Order.txt");
        if (out1.is_open()){
        while(out1>>s1>>s2)// в s1 - первое слово, в s2 - второе
        {
            s2 = s2;
            getline(out1,tail); // дочитываем остаток строки
            sum += s2;

        }
        cout <<"Result: " <<sum << endl;
        }
        system("pause");
        system("cls");
        goto mainmenu;
        break;
    }
    case 2:
    {
        system("cls");
        prev:
        cout << "Orders menu" << endl;
        cout << "1. Show orders" << endl;
        cout << "2. Edit orders" << endl;
        cout << "3. Exit to main menu" << endl;
        cout << "Choice: ";
        cin >> Choice2;
        switch(Choice2){
            case 1:
        {
                ifstream in("Storage Orders.txt"); // окрываем файл для чтения
                if (in.is_open())
                {
                    system("cls");
                    while (getline(in, line))
                    {
                        cout << line << endl;
                    }
                }
                else {
                    cout << "error no such file";
                }
                system("pause");
                system("cls");
                goto prev;
                in.close();     // закрываем файл
                break;
        }

        case 2:
        {
            retry:
            char kb;
            ifstream in("Storage Orders.txt"); // окрываем файл для чтения
            if (in.is_open())
            {
                system("cls");
                while (getline(in, line))
                {
                    cout << line << endl;
                }
            }
            else {
                cout << "error no such file";
            }
            cout << endl << "press d for delete or q for escape" << endl;
            cin >> kb;
            in.close();
            if (kb == 'd')
            {
                ifstream in("Storage Orders.txt");
                cout <<"Type number for delete :"<< endl;
                  int i_number_line_delete = 0; //для хранения номера строки который нужно удалить
                  cin >> i_number_line_delete;

                  int i_number_line_now = 0; //счётчик строк
                  string line_first; //для хранения строки
                  string line_file_text; //для хранения текста файла

                 while(getline(in,line_first))
                 {
                   i_number_line_now++;

                   if(i_number_line_now != i_number_line_delete){
                   line_file_text.insert(line_file_text.size(),line_first);
                   line_file_text.insert(line_file_text.size(), "\n");
                   }
                 }
            in.close();
            ofstream file_out;

             file_out.open ("Storage Orders.txt",std::ios::trunc | std::ios::binary); //открыть и обрезать

             //записать

             file_out.write(line_file_text.c_str(), line_file_text.size());
             file_out.clear();
             system("pause");
             goto retry;
            }
            else if (kb == 'q')
            {
            system("cls");
            goto prev;
            }
            else
            {
                cout << "Wrong parameter!!";
                goto retry;
            }
            in.close();     // закрываем файл
            break;
        }

            case 3:
        {
            system("cls");
            Choice = 0;
            goto mainmenu;
            break;
            }
              default: cout << "Wrong parameter!!";
        }
        break;
    }
    case 3:
    {
        system("cls");
        cout << "There's Income and Taxes of our company" << endl;
        cout <<"Income without taxes: " <<sum << endl;
        cout <<"Taxes(6%): " <<tax << endl;
        cout <<"Income: " <<sum2 << endl;
        ifstream out1("Order.txt");
        if (out1.is_open()){
        while(out1>>s1>>s2)// в s1 - первое слово, в s2 - второе
        {
            s2 = s2;
            getline(out1,tail); // дочитываем остаток строки
            sum += s2;
        }
        tax = sum * 0.06;
        sum2 = sum - tax;
        }
        system("pause");
        system("cls");
        goto mainmenu;
        break;
    }
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

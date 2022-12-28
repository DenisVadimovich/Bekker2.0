#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "interface.h"
#include "func.h"
#include "class.h"


using namespace std;
int Auth(){
    string Login;
    string Password;
    int chs;
    std::stringstream* L = new stringstream[100];
    std::stringstream* P = new stringstream[100];

    //errorPoint:
    system("cls");
    cout << "Login: " << endl;
    cin >> Login;
    cout << "Password: " << endl;
    cin >> Password;
    if (Login == "Administrator" && Password == "Administrator")
    {
        system ("cls");
        cout << "Hello Admin: Choose profile" << "\n"
             << "1. Cassir" << "\n"
             << "2. Boss" << "\n"
             << "3. Admin" << "\n"
             << "4. Logout" << endl;
        cout << "Choise: ";
        cin >> chs;
        switch(chs){
        case 1:
        {
            system("cls");
            Casir CasirM;
            CasirM.CasirMenu();
            break;
        }
        case 2:
        {
            system("cls");
            Boss BossM;
            BossM.BossMenu();
            break;
        }
        case 3:{
            system("cls");
            Admin AdminM;
            AdminM.AdminMenu();
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
    if (Login == "Casir" && Password == "cash")
    {
        system("cls");
        cout << "Profile: Casir, select menu item..." << endl;
                Casir CasirM;
                CasirM.CasirMenu();
    }

    if (Login == "Boss" && Password == "wallet")
    {
        system("cls");
        cout << "Profile: Boss, select menu item..." << endl;
                Boss BossM;
                BossM.BossMenu();
    }
    if (Login == "Admin" && Password == "admin")
    {
        system("cls");
        cout << "Profile: Admin, select menu item..." << endl;
                Admin AdminM;
                AdminM.AdminMenu();
    }
    if (L && P)
    {
        system("cls");
        cout << "Wrong login or password!!!" << endl
             << "Preess any button to get back to autorisation menu" << endl;
        system("pause");
        delete L, P;
        Auth();
    }
      return 0;
}
void DataEntry(Data* (&d), int& n)
{
    int Choice;
    productOrder productorder;
    Info info;

    cout << "How many positions? ";
    cin >> n;

    d = new Data[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Choose the type of product" << endl;
        cout << "1. Cake" << endl;
        cout << "2. Bun" << endl;
        cout << "3. Drink" << endl;
        cout << "Choice: ";
        cin >> Choice;
        switch(Choice){
        case 1:
        {
            productorder.productType = "Cake";
            system("cls");
            cout << "Choose the type of product" << endl;
            cout << "1. Snickers cake" << endl;
            cout << "2. Napoleon cake" << endl;
            cout << "3. Cheese cake" << endl;
            cout << "4. Sour cream cake " << endl;
            cout << "Choice: ";
            cin >> Choice;
            switch(Choice){
            case 1:
            {   system ("cls");
                productorder.productName = "Snickers cake";
                cout << "U selected: " << productorder.productName<< endl
                     << "How many Snickers cakes u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Snickers cakes? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;


            }
            case 2:
            {   system ("cls");
                productorder.productName = "Napoleon cake";
                cout    << "U selected: " << productorder.productName<< endl
                        << "How many Napoleon cakes u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Napoleon cakes? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;

            }
            case 3:
            {   system ("cls");
                productorder.productName = "Cheese cake";
                cout    << "U selected: " << productorder.productName<< endl
                        << "How many Cheese cakes u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Cheese cakees? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;

            }
            case 4:
            {   system ("cls");
                productorder.productName = "Sour cream cake";
                cout    << "U selected: " << productorder.productName<< endl
                        << "How many Sour cream cakes u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Sour cream cakes? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;

            }
           } // switch case 1.X
        } // case 1
        case 2:
        {
            productorder.productType = "Bun";
            system("cls");
            cout << "Choose the type of product" << endl;
            cout << "1. Sausage in the dough " << endl;
            cout << "2. Pizza application" << endl;
            cout << "3. Cabbage pie" << endl;
            cout << "4. Pie with filling rice egg " << endl;
            cout << "Choice: ";
            cin >> Choice;
            switch(Choice){
            case 1:
            {   system ("cls");
                productorder.productName = "Sausage in the dough";
                cout    << "U selected: " << productorder.productName<< endl
                        << "How many Sausages in the dough u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Sausage in the dough? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;

            }
            case 2:
            {   system ("cls");
                productorder.productName = "Pizza application";
                cout    << "U selected: " << productorder.productName<< endl
                        << "How many Pizza applications u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Pizza application? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;

            }
            case 3:
            {   system ("cls");
                productorder.productName = "Cabbage pie";
                cout    << "U selected: " << productorder.productName<< endl
                        << "How many Cabbage pie u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Cabbage pies? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;

            }
            case 4:
            {   system ("cls");
                productorder.productName = "Pie with filling rice egg";
                cout    << "U selected: " << productorder.productName<< endl
                        << "How many Pies with filling rice egg u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Pie with filling rice egg? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;

            }
           } // switch case 2.X
        } // case 2
        case 3:
        {
            productorder.productType = "Bun";
            system("cls");
            cout << "Choose the type of product" << endl;
            cout << "1. Tea " << endl;
            cout << "2. Coffee" << endl;
            cout << "3. Coca-cola" << endl;
            cout << "4. Fanta " << endl;
            cout << "5. Sprite " << endl;
            cout << "Choice: ";
            cin >> Choice;
            switch (Choice){
            case 1:
            {   system ("cls");
                productorder.productName = "Tea";
                cout    << "U selected: " << productorder.productName<< endl
                        << "How many Tea packs u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Tea pack? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;
            }
            case 2:
            {   system ("cls");
                productorder.productName = "Coffee";
                cout    << "U selected: " << productorder.productName<< endl
                        << "How many Coffee packs u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Coffee pack? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;
            }
            case 3:
            {   system ("cls");
                productorder.productName = "Coca-cola";
                cout    << "U selected: " << productorder.productName<< endl
                        << "How many Coca-cola bottles u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Coca-cola bottle? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;
            }
            case 4:
            {   system ("cls");
                productorder.productName = "Fanta";
                cout    << "U selected: " << productorder.productName<< endl
                        << "How many Fanta bottles u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Fanta bottle? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;
            }
            case 5:
            {   system ("cls");
                productorder.productName = "Sprite";
                cout    << "U selected: " << productorder.productName<< endl
                        << "How many Sprite bottles u want to order?: ";
                cin >> info.numbers;
                system ("cls");
                cout << "What is the price of one Sprite bottle? (RUB): ";
                cin >> info.price;
                info.fullPrice = info.numbers * info.price;
                d[i].DataEntry(productorder, info);
                system ("cls");
                cout << "Data saved!" << endl;
                goto checkpoint;
            }
           } // switch 3.X
        } // case 3
     } // switch X
    checkpoint:
    cout << endl;
    }
}
void Print(Data* d, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << endl << "Order number " << i+1  << endl;

        d[i].Print();
    }
}


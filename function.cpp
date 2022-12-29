#include "function.h"
#include "class.h"


int Auth(){
    string Login;
    string Password;
    int chs;
    std::stringstream* L = new stringstream[100];

    system("cls");
    cout << "Login: " << endl;
    cin >> Login;
    cout << "Password: " << endl;
    cin >> Password;
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
    if (L)
    {
        system("cls");
        cout << "Wrong login or password!!!" << endl
             << "Preess any button to get back to autorisation menu" << endl;
        system("pause");
        delete L;
        Auth();
    }
      return 0;
}
void DataEntry(Data* (&d), int& n)
{

    int Choice;
    productOrder productorder;
    Info info;
    string s;

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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Snickers cakes? (RUB): ";
                info.price = Check(s);
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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Napoleon cakes? (RUB): ";
                info.price = Check(s);
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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Cheese cakees? (RUB): ";
                info.price = Check(s);
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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Sour cream cakes? (RUB): ";
                info.price = Check(s);
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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Sausage in the dough? (RUB): ";
                info.price = Check(s);
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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Pizza application? (RUB): ";
                info.price = Check(s);
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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Cabbage pies? (RUB): ";
                info.price = Check(s);
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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Pie with filling rice egg? (RUB): ";
                info.price = Check(s);
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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Tea pack? (RUB): ";
                info.price = Check(s);
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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Coffee pack? (RUB): ";
                info.price = Check(s);
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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Coca-cola bottle? (RUB): ";
                info.price = Check(s);
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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Fanta bottle? (RUB): ";
                info.price = Check(s);
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
                info.numbers = Check(s);
                system ("cls");
                cout << "What is the price of one Sprite bottle? (RUB): ";
                info.price = Check(s);
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
void SaveData(Data* d, int n)
{
    ofstream record("OrderList.txt", ios_base::app);
    if (record)
    {
        record  << n << endl;

        for (int i = 0; i < n; i++)
        {


                           record << "Product Type: "
                           << d[i].GetProductOrder().productType << endl
                           << "Product Name: "
                           << d[i].GetProductOrder().productName << endl
                           << "Amount: "
                           << d[i].GetInfo().numbers << endl
                           << "Price: "
                           << d[i].GetInfo().price << endl
                           << "FullPrice: "
                           << d[i].GetInfo().fullPrice << endl
                           <<"_____________________________________________" << endl;
            if (i < n-1)
                    record << endl;

        }
    }
    else
    cout << "Error to open a file!" << endl;
    record.close();
}
double Check(std::string s){
    double x;// переменная для ввода числовых данных
    start:
    cin >> s;
    if (s.find_first_not_of("0123456789.") != string::npos)
    {
        system("cls");
        cout << "Error!!! Put the 0123456789 OR ." << endl;
        goto start;
    }
    else
    {
        x = stod(s); // вывод на экран введенного числа
    }
return x;
}
int pExit()
{
    cout << "Press any button to close the programm..." << endl;
    exit(0);
}


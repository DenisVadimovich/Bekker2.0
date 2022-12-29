#include "class.h"
#include "function.h"

//using namespace std;

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
     char oplata;
     tochka:
    system("cls");
    cout << "Sales Menu" << endl;
    cout << "1. Add a product" << endl;
    cout << "2. Delete product" << endl;
    cout << "3. Final receipt" << endl;
    cout << "4. Payment" << endl;
    cout << "5. Logout" << endl;
    cout << "Choice: ";
    cin >> Choice;
    if(Choice > 5){
        cout << "Please choose from 1 to 5" << endl;
        system("pause");
        goto tochka;
    }
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
        if(Choice > 4){
            cout << "Please choose from 1 to 4" << endl;
            system("pause");
            goto tochka2;
        }
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
        del:
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
        if(Choice > 2){
            cout << "Please choose from 1 to 2" << endl;
            system("pause");
            goto del;
        }
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
        out1.close();
        system("pause");
        goto tochka;
        break;
    }
    case 4:
    {
        paid:
        system("cls");
        cout << "The buyer paid the receipt? (y/n)" << endl;
        cin >> oplata;
        if (oplata == 'y' || oplata == 'n'){
        if (oplata == 'y'){

            ifstream rf("Order.txt");
             if (!rf)
             {
               cout << "Cannot open source file." << endl;
             }
             ofstream wf("Storage Orders.txt",ios_base::app);
             if (!wf)
             {
               rf.close();
               cout << "Cannot open the files." << endl;
             }
             char sym;
              while (rf)// цикл посимвольного чтения
                {
               rf.get(sym); // считать из rf => sym
               if (rf)
                 wf << sym; // записать sym => wf
                }
             rf.close();
             rf.open("Order.txt", ofstream::out | ofstream::trunc);
             rf.close();
             wf.close();
             goto tochka;
           }
        if (oplata == 'n'){
            ofstream outfile;
            outfile.open("Order.txt");
            outfile.close();
            goto tochka;
        }
        }else{
            cout << "Wrong parametr, repeat choice" << endl;
            system("pause");
            goto paid;
        }
        break;
}
    case 5:
    {
        system("cls");
        UserInterface theUserInterface;
        theUserInterface.interact();
    }
}
}

void Boss::BossMenu(){
    string line;
    string s1 = "",
           tail = "";
    int s2 = 0;
    double sum = 0;
    int tax = 0;
    int sum2 = 0;
    mainmenu:
    system("cls");
    cout << "Sales Menu" << endl;
    cout << "1. Today buyings" << endl;
    cout << "2. Storage orders" << endl;
    cout << "3. Income and taxes" << endl;
    cout << "4. Logout" << endl;
    cout << "Choice: ";
    cin >> Choice;
    if(Choice > 4){
        cout << "Please choose from 1 to 4" << endl;
        system("pause");
        goto mainmenu;
    }
    switch (Choice){
    case 1:
    {
        system("cls");
        cout << "Today buyings" << endl;
        ifstream out("Storage Orders.txt");
        if (out.is_open()){
        while (getline(out,line)){
        cout << line << endl;
        }
        }
        out.close();
        int s2 = 0;
        int sum = 0;
        ifstream out1("Storage Orders.txt");
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
        prev:
        system("cls");
        cout << "Orders menu" << endl;
        cout << "1. Show orders" << endl;      
        cout << "2. Exit to main menu" << endl;
        cout << "Choice: ";
        cin >> Choice2;
        if(Choice2 > 2){
            cout << "Please choose from 1 to 2" << endl;
            system("pause");
            goto prev;
        }
        switch(Choice2){
            case 1:
        {
                ifstream in("OrderList.txt"); // окрываем файл для чтения
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
        ifstream out1("Storage Orders.txt");
        if (out1.is_open()){
            sum = 0;
            s2 = 0;
        while(out1>>s1>>s2)// в s1 - первое слово, в s2 - второе
        {
            s2 = s2;
            getline(out1,tail); // дочитываем остаток строки
            sum += s2;
        }
        tax = (sum/100)*6;
        sum2 = sum - tax;
        }
        cout << "There's Income and Taxes of our company" << endl;
        cout <<"Income without taxes: " <<sum << endl;
        cout <<"Taxes(6%): " <<tax << endl;
        cout <<"Income: " <<sum2 << endl;

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

    int _size = 0;
    Data* d = new Data[_size];

    int choice;
    admmenu:
    system("cls");
    cout << "Administrator menu" << endl;
    cout << "1. Create a list to order" << endl;
    cout << "2. Check data" << endl;
    cout << "3. Save data" << endl;
    cout << "4. Logout" << endl;
    cout << "Choice: " << endl;
    cin >> choice;
    if(choice > 4){
        cout << "Please choose from 1 to 4" << endl;
        system("pause");
        goto admmenu;
    }
    switch(choice){
    case 1:
    {   system ("cls");
        DataEntry(d, _size);
        system("pause");
        system("cls");
        goto admmenu;
        break;
    }
    case 2:
    {
        system("cls");
        if (_size !=0)
            Print(d, _size);
        else
            cout << "Data is empty!" << endl;
        system("pause");
        system("cls");
        goto admmenu;
        break;
    }
   case 3:
   {
        system("cls");
        if (_size !=0 )
        SaveData(d, _size);
        else
            cout << "Data is empty!" << endl;
        system("pause");
        system("cls");
        goto admmenu;
        break;
   }
   case 4:
   {
        system("cls");
        UserInterface theUserInterface;
        theUserInterface.interact();
   }
   } // switch
}

UserInterface::UserInterface()
{

}
//---------------------------------------------------------
UserInterface::~UserInterface()
{

}
//---------------------------------------------------------

void UserInterface::interact()
{
start:
system("cls");
cout << "Good morning, welcome to Bekker 2.0 application \n";
cout << "for authorization press 'a' \n"
<< "for exit press 'q': \n";
cin >> ch;
switch (ch)
    {
    case 'a':
{
    system("cls");
    Auth();
    break;
}
    case 'q':
{
    pExit();
    cout << "press any key to exit";
    return;
    break;
}
    default: cout << "Unknown function! Press any button to repeat! " << endl;
    system("pause");
    goto start;
    }

}

Data::Data()
{}
Data::~Data()
{}

void Data::DataEntry(productOrder productorder_, Info info_)
{
    productorder.productType = productorder_.productType;
    productorder.productName   = productorder_.productName;

    info.numbers = info_.numbers;
    info.price = info_.price;
    info.fullPrice = info_.fullPrice;
}

void Data::Print()
{
    cout << "Product Type: "
         << productorder.productType << endl
         << "Product Name: "
         << productorder.productName << endl
         << "Amount: "
         << info.numbers << endl
         << "Price: "
         << info.price << endl
         << "FullPrice: "
         << info.fullPrice << endl
         <<"_____________________________________________" << endl;
}

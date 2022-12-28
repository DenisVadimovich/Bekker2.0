#include <iostream>
#include "interface.h"
#include "func.h"
#include "class.h"
#include "exit.h"
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
cout << "Good morning, welcome to Bekker 2.0 application \n";
cout << "for authorization press 'a' \n"
<< "for exit press 'q': \n";
cin >> ch;
switch (ch)
    {
    case 'a':
    system("cls");
    Auth();
    break;

    case 'q':
    pExit();
    cout << "press any key to exit";
    return;
    break;

    default: cout << "Unknown function\n";
    break;
    }

}
Data::Data()
{}
Data::~Data()
{}
Data::Data(productOrder productorder_, Info info_)
{
    productorder.productType = productorder_.productType;
    productorder.productName   = productorder_.productName;

    info.numbers = info_.numbers;
    info.price = info_.price;
    info.fullPrice = info_.fullPrice;
}
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

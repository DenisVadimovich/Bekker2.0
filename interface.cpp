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

#include <iostream>
#include "func.h"
#include <fstream>
#include <string>
#include "interface.h"
#include "class.h"
#include <sstream>

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


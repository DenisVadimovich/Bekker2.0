#include <iostream>
#include "func.h"
#include <fstream>
#include <string>
#include "interface.h"
#include "class.h"

using namespace std;
int Auth(){
    string Login;
    int Password;
    int chs;
    cout << "Login: " << endl;
    cin >> Login;
    cout << "Password: " << endl;
    cin >> Password;
/*
    ifstream file ("C:\\Prov\\Proverka\\Check.txt");

        file.is_open(); // вызов метода is_open()
            while(file.get(s)){

            }
}
void Check(){
*/
    if (Login == "admin" && Password == 123)
    {
        system ("cls");
        cout << "Hello Admin: Choose profile" << "\n"
             << "1. Cassir" << "\n"
             << "2. Boss" << "\n";
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
        }
    }
    return 0;
}


#include <iostream>
#include "func.h"
#include <fstream>r
#include <string>
#include "interface.h"

using namespace std;
void Auth(){
    string Login;
    int Password;
    char s;
    cout << "Login: " << endl;
    cin >> Login;
    cout << "Password: " << endl;
    cin >> Password;

    ifstream file ("C:\\Prov\\Proverka\\Check.txt");

        file.is_open(); // вызов метода is_open()
            while(file.get(s)){

            }
}
void Check(){

}

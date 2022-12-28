#ifndef CLASS
#define CLASS

#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>

using namespace std;

class Casir{
public:
    Casir();
    ~Casir();
    int Choice;
    void CasirMenu();
};

class Boss{
public:
    Boss();
    ~Boss();
    char kbtn;
    void BossMenu();
private:
    int Choice;
    int Choice2;
};

class Admin{
public:
    Admin();
    ~Admin();
    int Choice;
    void AdminMenu();
};

// Класс для объектов при работе Администратора с созданием заявки
// ||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
// vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

#endif // CLASS


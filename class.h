#ifndef CLASS
#define CLASS

#include<iostream>
#include<string>
#include<fstream>
#include<windows.h>
#include <sstream>
#include <stdio.h>

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


class UserInterface
{
private:
char ch;
public:
UserInterface();
~UserInterface();
void interact();
};
struct productOrder
{
    string productType, productName;
};

struct Info
{
    int numbers, price, fullPrice;
};

class Data
{
 private:
    productOrder productorder;
    Info info;

 public:
    Data();
    Data(productOrder productorder_, Info info_);
    ~Data();

    void Print();
    void DataEntry(productOrder productorder_, Info info_);

    productOrder GetProductOrder() {return productorder;}
    Info GetInfo() {return info;}
};

#endif // CLASS


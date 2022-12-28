#ifndef UPDATE_H
#define UPDATE_H
#include <iostream>
using namespace std;
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
    double numbers, price, fullPrice, datafullPrice;
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



    Data& operator = (Data d_0);
};
#endif

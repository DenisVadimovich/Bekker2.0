#ifndef CLASS
#define CLASS
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

#endif // CLASS


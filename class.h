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
    int Choice;
    int Choice1;
    char kbtn;
    void BossMenu();
};
class Admin{
public:
    Admin();
    ~Admin();
    int Choice;
    void AdminMenu();
};

#endif // CLASS


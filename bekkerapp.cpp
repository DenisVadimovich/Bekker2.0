#include "interface.h"
#include "func.h"
#include "class.h"

int main()
{
setlocale(LC_ALL, "rus");
UserInterface theUserInterface;
theUserInterface.interact();
return 0;
}

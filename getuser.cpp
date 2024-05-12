#include "getuser.h"
#include <unistd.h>

string getuser() {
    return getlogin();
}

int main() {
    cout << getuser() << endl;
    cout << getuser2() << endl;
}
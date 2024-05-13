#include "getuser.h"
#include "util.h"
#include <unistd.h>

string getuser() {
    return getlogin();
}

int main(int argc, char* argv[]) {
    if (argc == 2 && !strcmp(argv[1], "-t")) {
        cout << "test";
        return 1;
    }
    
    cout << getuser() << endl;
    cout << getuser2() << endl;
}
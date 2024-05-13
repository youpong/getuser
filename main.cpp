#include "getuser.h"
#include "util.h"
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc == 3 && !strcmp(argv[1], "-t")) {
        test_getuser(argv[2]);
        test_getlogin(argv[2]);
        return 0;
    }
    
    cout << getuser() << endl;
    return 0;
}
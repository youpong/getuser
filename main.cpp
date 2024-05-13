#include "getuser.h"
#include "util.h"
#include <unistd.h>

int main(int argc, char* argv[]) {
    if (argc == 2 && !strcmp(argv[1], "-t")) {
        test_getuser();
        return 0;
    }
    
    cout << getuser() << endl;
    return 0;
}
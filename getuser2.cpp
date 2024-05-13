#include "getuser.h"
#include "util.h"

#include <unistd.h>
#include <sys/types.h>
#include <sys/errno.h>
#include <string.h>
#include <pwd.h>

string getuser2() {
    auto *p = getpwuid(getuid());
    if (p == NULL) {
        cout << "Could not get struct passwd: " << strerror(errno) << endl;
        exit(1);
    }

    return p->pw_name;
}

void test_getuser() {
    
}
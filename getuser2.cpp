#include "getuser.h"

#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

string getuser2() {
    // struct passwd 
    auto *p = getpwuid(getuid());
    if (p == NULL) {
        // errno
    }

    return p->pw_name;
}
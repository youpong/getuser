#include "getuser.h"
#include "util.h"

#include <cerrno>
#include <unistd.h> // getlogin()
#include <sys/types.h>
//#include <sys/errno.h>
#include <string.h>
#include <pwd.h>

string getuser() {
    auto *p = getpwuid(getuid());
    if (p == NULL) {
        cout << "Could not get struct passwd: " << strerror(errno) << endl;
        exit(1);
    }

    return p->pw_name;
}

void test_getuser(string want) {
    expect(want, getuser(), "getuser");
}

void test_getlogin(string want) {
    char* username = getlogin();
    string s = username ? username : "";
    expect(want, s, "getlogin");
}

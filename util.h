#pragma once

#include <string>

using namespace std;

/**
 * Tests that want and got are equal.
 * Fails with the supplied failure message, file and line then halt.
 * @param want
 * @param got
 * @param msg
 * @param file
 * @param line
 */
template <typename T>
void expect1(const T &want, const T &got, const string &msg, const char *file,
             int line)
{
    if (want == got)
        return;

    if (msg.length() != 0)
        cout << file << ":"s << line << ": Error: "s << msg << " want ("s
             << want << "), but got ("s << got << ")"s << endl;
    else
        cout << file << ":"s << line << ": Error: want ("s << want
             << "), but got ("s << got << ")"s << endl;

    exit(1);
}
#define expect(want, got, msg) expect1(want, got, msg, __FILE__, __LINE__)

/*
 * Replace this with your header comment and do not forget
 * to put a header comment at the top of all your files.
 */

#include "functions.h"

bool is_numeric(string str) {
    return regex_match(str, regex("(\\+|-)?[0-9]*(\\.?([0-9]+))$"));
}

bool is_file(string str) {
    ifstream infile;

    infile.open(str);
    if (infile) {
        return true;
    } else {
        return false;
    }
}

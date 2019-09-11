/*
 * functions.cpp includes only functions.h directly
 * all other directives are in functions.h
 */
#include "functions.h"

//this is a function header and definition, this is the implementation
void display_parameters(int count, char **argument_list, bool name) {
    //this shows the ternary operator (it's an if statement)
    int start = name ? 0 : 1;

    for (int i = start; i < count; i++) {
        cout << "\t" << i << ": " << argument_list[i] << endl;
    }
}

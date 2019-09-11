//this is a directive that prevents .h files from being included more than once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

//included because main() uses cout
#include <iostream>

/*
 * this is a better way to do a namespace, only bring into your
 * program what you need
 */
using std::cout;
using std::endl;

//this is a prototype, it just describes the interface to the functions in cpp
void display_parameters(int, char**, bool);
    
#endif /* FUNCTIONS_H */

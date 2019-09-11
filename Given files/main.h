//this is a directive that prevents .h files from being included more than once
#ifndef MAIN_H
#define MAIN_H

//included because main() uses cout
#include <iostream>
//included because main() uses a function from functions.cpp
#include "functions.h"
//included because main() makes and uses a rectangle object
#include "rectangle.h"

/*
 * this is considered bad practice, but it's okay for the purpose of this class
 * in professional code you should use more narrow namespace directives.
 * doing it this way just makes it easier for academic purposes
 */
using namespace std;

#endif /* MAIN_H */

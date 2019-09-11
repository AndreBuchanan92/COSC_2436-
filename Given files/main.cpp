
/*
 * main.cpp includes only main.h directly
 * all other directives are in main.h
 */
#include "main.h"

/*
 * this is the complete form of main()
 * argc and argv do not need to be part of main, you only need
 * them if you want to pass parameters into main
 * only main() belongs in main.cpp
 */
int main(int argc, char** argv) {

    /*
     * this is sample code showing the usage of argc and argv
     */
    cout << "The number of parameters is " << argc << endl;
    /*
     * this function lists all parameters and optionally
     * lists the program's name. this function is located
     * in functions.cpp
     */
    display_parameters(argc, argv, false);
    cout << endl;

    //making a rectangle object with no parameters
    Rectangle myRectangle1;
    //making a rectangle object with two parameters
    Rectangle myRectangle2(5, 4);

    cout << "Rectangle 1 measures: ";
    cout << myRectangle1.getWidth() << "x" << myRectangle1.getHeight() << endl;
    cout << "and has an area of " << myRectangle1.getArea() << endl << endl;

    cout << "Rectangle 2 measures: ";
    cout << myRectangle2.getWidth() << "x" << myRectangle2.getHeight() << endl;
    cout << "and has an area of " << myRectangle2.getArea() << endl << endl;

    cout << "altering Rectangle 1..." << endl;
    myRectangle1.setWidth(9);
    myRectangle1.setHeight(3);
    cout << "Rectangle 1 now measures: ";
    cout << myRectangle1.getWidth() << "x" << myRectangle1.getHeight() << endl;
    cout << "and has an area of " << myRectangle1.getArea() << endl << endl;

    return 0;
}

//this is a directive that prevents .h files from being included more than once
#ifndef BOXES_RECTANGLE_H
#define BOXES_RECTANGLE_H

/*
 * notice there are no other includes here because they are not needed.
 * if you did some, like iostream, then they would go here
 */

class Rectangle {

    public:
    /*
     * constructors
     * one with no params, one with params (overloading)
     */
    Rectangle();
    Rectangle(int, int);

    //destructor (not used in this example)
    ~Rectangle();

    /*
     * Getters
     */
    int getWidth();
    int getHeight();
    int getArea();

    /*
     * Setters
     */
    void setWidth(int);
    void setHeight(int);

protected:
    //private variables that define a square
    int width, height;

};

#endif //BOXES_RECTANGLE_H
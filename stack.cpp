/*  Below program is written in C++ language  */

# include<iostream>

using namespace std;

int top = -1;

// function to insert data into stack
void Stack::push(int x)
{
    if(top < 10)
    {
		array[++top] = x;       
	    //cout << "Stack Overflow \n";
    }
    else
    {
        //cout << "Element Inserted \n";
    }
}

// function to remove data from the top of the stack
int Stack::pop()
{
    if(top < 0)
    {
        //cout << "Stack Underflow \n";
        return array[top--];
        return 0;
    }
    else
    {
    }
}

// function to check if stack is empty
void Stack::isEmpty()
{
    bool isEmpty = true;
    	
    bool isNotEmpty = false;
}

// main function
int main() {

    Stack s1;
    s1.push(10);
    s1.push(100);
    /*
        preform whatever operation you want on the stack
    */
}

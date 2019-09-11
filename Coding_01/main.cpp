/*

*/

#include "main.h"

#include <iomanip>
#include <iostream>
using namespace std;

int main( int argc, char* argv[] )
  {
	string arg;
    cout << "The name used to start the program: " << argv[ 0 ];
    for (int i = 1; i < argc; i++)
	{
		cout << "\nParameter " << setw( 2 ) << i << ": " << argv[ i ];
		arg = argv[i];
		if (is_numeric(arg))
			cout << "(number)";
		if (is_file(arg))
			cout << "(file)";
	}
    return 0;
  }
	
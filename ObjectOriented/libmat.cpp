#include <iostream>
#include <fstream>
#include <string>
#include "libmat.h"
using namespace std;

int main()
{

	// objects are in local blocks to force destruction
	{
        cout << "\n" << "Creating a LibMat object to print()\n";
  	    LibMat m;
	    print( m );
	}

	{
        cout << "\n" << "Creating a Book object to print()\n";
	    Book b( "The Castle", "Franz Kafka" );
	    print( b );
	}

	{
        cout << "\n" << "Creating a AudioBook object to print()\n";
	    AudioBook ab( "Man Without Qualities", "Robert Musil", "Kenneth Meyer" );
	    print( ab );
	}

	return 0; // unnecessary but quiets vc++
}


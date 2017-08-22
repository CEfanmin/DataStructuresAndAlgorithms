#include <iostream>
#include <fstream>
#include <string>
#include "libmat.h"


int main()
{
	// objects are in local blocks to force destruction
	{
        std::cout << "\n" << "Creating a LibMat object to print()\n";
  	    LibMat m;
	    print( m );
	}

	{
        std::cout << "\n" << "Creating a Book object to print()\n";
	    Book b( "The Castle", "Franz Kafka" );
	    print( b );
	}

	{
        std::cout << "\n" << "Creating a AudioBook object to print()\n";
	    AudioBook ab( "Man Without Qualities", "Robert Musil", "Kenneth Meyer" );
	    print( ab );
	}

	return 0; // unnecessary but quiets vc++
}


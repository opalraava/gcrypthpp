#include "../gcrypt/libgcrypt.hpp"
#include "../gcrypt/gcrypt.hpp"



#include <iostream>

int
main(int argc, char* argv[])
{
  gcrypt::key key("mypass");	// create a new key
  return 0;			// test passed
}

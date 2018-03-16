# gcrypthpp
A C++ wrapper around the GNU libgcrypt library.

This wrapper contains two header files.

* libgcrypt.hpp - attempts a zero-overhead wrapping of the libgcrypt "C" API
* gcrypt.hpp - attempts to build on libgcrypt.hpp to provide crypto that
  jives well with boost related libraries (that I like to use).
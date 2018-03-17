/* gcrypt.hpp - high level crypto interface structured to work well with boost.
 * it uses libgcrypt.hpp for it's implementation. */

#ifndef INCLUDED_GCRYPT_HPP
#define INCLUDED_GCRYPT_HPP

#include <string>

#include "libgcrypt.hpp"

namespace gcrypt
{
  struct key {
    key(const std::string& passwd) {}
  };
}
#endif /* INCLUDED_GCRYPT_HPP */

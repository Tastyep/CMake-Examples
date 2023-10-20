#ifndef LIBC_TEST_H
#define LIBC_TEST_H

#ifdef LIBC_EXPORTS
#define LIBC_API __declspec(dllexport)
#else
#define LIBC_API __declspec(dllimport)
#endif

namespace libc
{
LIBC_API void work();
}

#endif

#ifndef LIBA_TEST_H
#define LIBA_TEST_H

#ifdef LIBA_EXPORTS
#define LIBA_API __declspec(dllexport)
#else
#define LIBA_API __declspec(dllimport)
#endif

namespace liba
{
LIBA_API void work();
}

#endif

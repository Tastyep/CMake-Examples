#ifndef LIBB_TEST_H
#define LIBB_TEST_H

#ifdef LIBB_EXPORTS
#define LIBB_API __declspec(dllexport)
#else
#define LIBB_API __declspec(dllimport)
#endif

namespace libb {
LIBB_API void work();
}

#endif

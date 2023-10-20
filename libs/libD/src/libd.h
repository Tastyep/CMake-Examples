#ifndef LIBD_TEST_H
#define LIBD_TEST_H

#ifdef LIBD_EXPORTS
#define LIBD_API __declspec(dllexport)
#else
#define LIBD_API __declspec(dllimport)
#endif

namespace libd
{
LIBD_API void work();
}

#endif

#ifndef _ASSERT_H
#define _ASSERT_H

#ifdef __cplusplus
extern "C" {
#endif

#if !defined __cplusplus
#define static_assert _Static_assert
#endif

#  define unreachable() do {} while (0)
#  define assert(cond)      do { if (!(cond)) unreachable(); } while (0)

#ifdef __cplusplus
}
#endif

#endif
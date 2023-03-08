#ifndef _ASSERT_H
#define _ASSERT_H

#ifdef __cplusplus
extern "C" {
#endif

#define assert(cond)                                                                               \
    if (!(cond))                                                                                   \
    target_panic(909)

#define static_assert _Static_assert

#ifdef __cplusplus
}
#endif

#endif				/* _ASSERT_H */
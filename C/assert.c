#include <assert.h>

struct packed
{
    unsigned int i;
    char *p;
};

static_assert(
    sizeof(struct packed) == sizeof(unsigned int) + sizeof(char *),
    "it should fail since padding is added for performance boost");
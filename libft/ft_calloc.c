#include "libft.h"

void* calloc(size_t count, size_t size) {
    size_t sizeAllo = count * size;

    void *temp = malloc(sizeAllo);
    if(temp == NULL)
        return NULL;
    ft_bzero(temp, sizeAllo);
    
    return temp;
}
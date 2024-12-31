#include "libft.h"

void* ft_calloc(size_t count, size_t size) {
    
    if(count && size && count > SIZE_MAX / size)
     return NULL;

    size_t sizeAllo = count * size;

    void *temp = malloc(sizeAllo);
    if(temp == NULL)
        return NULL;
    ft_bzero(temp, sizeAllo);
    
    return temp;
}
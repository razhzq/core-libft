

void*   ft_memcpy(void *dst, void *src, size_t n) {
    char *temp = (char *)dst;
    while(n != 0) {
        *dst = *src;
        dst++;
        src++;
        n--;
    }
    return temp;
}
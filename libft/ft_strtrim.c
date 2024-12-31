#include "libft.h"


char *ft_strtrim(char const *s1, char const *set) {
    int len = ft_strlen((char *)s1);

    int start = 0;
    int end = len - 1;

    if(!s1 || !set) 
        return NULL;

    while(ft_strchr(set, s1[start]) && start <= end) {
        start++;
    }
    if (start > end)
		return (ft_strdup(s1 + end + 1));

    while(ft_strchr(set, s1[end]) && end >= 0) {
        end--;
    }

    char *temp = (char *)malloc(sizeof(char) * (end - start + 2));

    if(!temp) 
        return NULL;

    ft_strlcpy(temp, &s1[start], (end - start + 2));

    return temp;
}

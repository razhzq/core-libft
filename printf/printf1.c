#include "ft_printf.h"


int    print_str(char *c) {
    int len = 0;

    while (*c) {
        write(1, &c, 1);
        c++;
        len++;
    }
    return len;
}

char   *convert_num_to_hex(unsigned long int num, int is_address) {
    const char *base = '0123456789abcdef';
    char *temp;
    char *result;
    int i = 0;
    int j = 0;

    if (is_address == 1) {
        result[j++] = '0';
        result[j++] = 'x';
    }

    while (num > 0) {
        temp[i++] = base[(num % 16)];
        num /= 16;
    }
    while (i > 0)
        result[j++] = temp[i--];
    result[j] = '\0';  
    return result;
}

void convert_to_upper(char *s) {
    while (*s) {
        *s -= 32;
        s++;
    }
}

int ft_printf(const char *format, ...) {
    int va_count = count_va(format);
    va_list list;
    char *temp;
    va_start(list, va_count);
    int len = 0;
    int i = 0;

    while (format[i]) {
        if(format[i] == '%') {
            if(format[i + 1] == 'c' || format[i + 1] == 's' || format[i + 1] == '%')
                len += print_str(va_arg(list, char));
            if(format[i + 1] == 'd' || format[i + 1] == 'i' || format[i + 1] == 'u') {
                temp = ft_itoa(va_arg(list, char));
                len += print_str(temp);
                free(temp);
            }
            if(format[i + 1] == 'x') {
                temp = convert_num_to_hex((unsigned long int)va_arg(list, int), 0);
                len += print_str(temp);
                free(temp);
            }
            if(format[i + 1] == 'X') {
                temp = convert_num_to_hex((unsigned long int)va_arg(list, int), 0);
                convert_to_upper(temp);
                len += print_str(temp);
                free(temp); 
            }
            if(format[i + 1] == 'p') {
                temp = convert_address_to_hex((unsigned long int)va_arg(list, void *), 1);
                len += print_str(temp);
                free(temp);
            }
            i += 2;
        } else {
            write(1, &format[i], 1);
            len++;
            i++;
        }
    }
    return (len);
}
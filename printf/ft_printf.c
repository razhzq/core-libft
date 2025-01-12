#include "ft_printf.h"


void process_format(const char *format, va_list *list, int *len) {
	if (*format == 's')
		*len += print_str(va_arg(*list, char *));
    if (*format == 'c')
    {
        ft_putchar_fd(va_arg(*list, int), 1);
    	(*len)++;
    }
    if (*format == '%')
    {
    	ft_putchar_fd('%', 1);
        (*len)++;
    }
    if (*format == 'd' || *format == 'i' || *format == 'u')
        *len += format_number((int)va_arg(*list, int));
    if (*format == 'x')
        *len += format_hex((unsigned long int)va_arg(*list, int), 0, 0);
    if (*format == 'X') 
        *len += format_hex((unsigned long int)va_arg(*list, int), 1, 0);
	if (*format == 'p')
        *len += format_hex(va_arg(*list, uintptr_t), 0, 1);
}




int ft_printf(const char *format, ...) {
    va_list list;
    va_start(list, format);
    int len = 0;
    int i = 0;

    while (format[i]) {
        if(format[i] == '%')
	    {
			process_format(&format[i + 1], &list, &len);
            i += 2;
        } 
        else 
        {
            write(1, &format[i], 1);
            len++;
            i++;
        }
    }
	va_end(list);
    return (len);
}

#include <stdio.h>

int main()
{
    int test = 2025;

    // int i = printf("FT_P: Character %c\n\n", 'z');
    // int j = ft_printf("FT_P: Character %c\n\n", 'z');
    // printf("\nresult int printf: %i", i);
    // printf("\nresult ft: %i", j);

    // i = printf("\nName: %s\n", "Aisyah");
    // j = ft_printf("\nName: %s\n", "Aisyah");
    // printf("\nresult int printf: %i", i);
    // printf("\nresult int     ft: %i", j);


    int i = printf("Milestone: %d, the %ind one\n", 1, 2);
    int j = ft_printf("Milestone: %d, the %ind one\n", 1, 2);


    i = printf("Positive value 8: %u\nNegative value -1: %u\n", 8, -1);
    j =  printf("Positive value 8: %u\nNegative value -1: %u\n", 8, -1);

   
    i = printf("Pointer for number 2025 is %p\n", &test);
    j = ft_printf("Pointer for number 2025 is %p\n", &test);

   
    

    i = printf("Hexadecimal(lower) for number 2025 is %x\n", 2025);
    j = ft_printf("Hexadecimal(lower) for number 2025 is %x\n", 2025);

    
    i = printf("Hexadecimal(upper) for number 2025 is %X\n", 2025);
    j = ft_printf("Hexadecimal(upper) for number 2025 is %X\n", 2025);

    printf("\nresult int printf: %i\n", i);
    printf("\nresult int     ft: %i\n", j);
    
    printf("Our project handle %%cspdiuxX%% only\n");
    ft_printf("Our project handle %%cspdiuxX%% only\n");
    
    return (0);
}

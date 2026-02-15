#include <unistd.h>
#include <stdio.h>
#include <string.h>



const   int   BASE_CHESSBOARD_SIZE_REF = 104;
const   unsigned short int  STR_CHESSBOARD_TOTAL_SIZE = 104*100;

char    str_map[100];
char    *white_cell = "\x1b[47m   \x1b[0m";
char    *black_cell = "\x1b[40m   \x1b[0m";



int ft_str_size(char    *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;

    return (i);
}

void    ft_puchar(char  c)
{
    write(1, &c, 1);
}

void    ft_print_str(char   *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        ft_puchar(str[i]);
        i++;
    }
}

void    ft_draw_full_line()
{
    int i;

    i = 0;

    while (i < 10)
    {
        strcat(str_map,white_cell);        
        i++;
    }
    strcat(str_map,'\n');
}

void    ft_print_chessboard()
{
    int spacing;
    int white_outline_counter;

    char    str[STR_CHESSBOARD_TOTAL_SIZE];
    char    *white_cell;


    spacing = 3;
    white_outline_counter = 0;

    str_map[0] = '\0';

    ft_draw_full_line();


    printf(str_map);
}

int main(void)
{
    ft_print_chessboard();
}
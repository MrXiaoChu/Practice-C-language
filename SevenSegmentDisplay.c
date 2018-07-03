#include <stdio.h>
#include <stdlib.h>

/*
  _       _   _         _    _    _    _    _
 | |  |   _|  _|  |_|  |_   |_   | |  |_|  |_|
 |_|  |  |_   _|    |   _|  |_|    |  |_|    |

  0 6 3   is _
  1 2 4 5 is |

*/

int main(void)
{

    int segment[10][7] =
    {
        {1, 1, 1, 1, 1, 1, 0},
        {0, 1, 1, 0, 0, 0, 0},
        {1, 1, 0, 1, 1, 0, 1},
        {1, 1, 1, 1, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 1},
        {1, 0, 1, 1, 0, 1, 1},
        {1, 0, 1, 1, 1, 1, 1},
        {1, 1, 1, 0, 0, 1, 0},
        {1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0, 1, 1}
    };

    int index = 0;
    while(index < 10)
        {
            if(segment[index][0] == 1)
                {
                    printf("%s", " _");
                }
            else
                {
                    printf("%s", "  ");
                }
            printf("\n");
            if(segment[index][5] == 1)
                {
                    printf("%c", '|');
                }
            else
                {
                    printf("%c", ' ');
                }
            if(segment[index][6] == 1)
                {
                    printf("%c", '_');
                }
            else
                {
                    printf("%c", ' ');
                }
            if(segment[index][1] == 1)
                {
                    printf("%c", '|');
                }
            else
                {
                    printf("%c", ' ');
                }
            printf("\n");
            if(segment[index][4] == 1)
                {
                    printf("%c", '|');
                }
            else
                {
                    printf("%c", ' ');
                }
            if(segment[index][3] == 1)
                {
                    printf("%c", '_');
                }
            else
                {
                    printf("%c", ' ');
                }
            if(segment[index][2] == 1)
                {
                    printf("%c", '|');
                }
            else
                {
                    printf("%c", ' ');
                }
            printf("\n");
            ++index;
        }
    return 0;
}



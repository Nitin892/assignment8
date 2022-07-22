// Assignment - 8 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Pattern Problems
// 1)
#include <stdio.h>
int main()
{
    for (int row = 1; row <= 5; row++)
    {
        for (int column = 1; column <= 5; column++)
        {
            if (column <= row)
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// 2)
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= 5 - i)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// 3)
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j <= 6 - i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

// 4)
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j < i)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// 5)
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

// 6)
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= i && j <= 10 - i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

// 7)
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (j <= 6 - i || j >= 5 + i && j <= 10)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
// 8)
#include <stdio.h>
int main()
{
    int x;
    for (int i = 1; i <= 4; i++)
    {
        x = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j <= 3 + i)
            {
                printf("%d ", x);

                if (j < 4)
                {
                    x++;
                }
                else
                    x--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

// 9)

#include <stdio.h>
int main()
{
    int x;
    for (int i = 1; i <= 4; i++)
    {
        x = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
            {
                printf("%d ", x);

                if (j < 4)
                {
                    x++;
                }
                else
                    x--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
// 10)

#include <stdio.h>
int main()
{
    int x;
    for (int i = 1; i <= 4; i++)
    {
        x = 1;
        for (int j = 1; j <= 7; j++)
        {
            if (j <= 5 - i || j >= 3 + i && j <= 7)
            {
                printf("%d ", x);

                if (j < 4)
                {
                    x++;
                }
                else
                    x--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

// 11)
#include <stdio.h>
int main()
{
    char x;
    for (int i = 1; i <= 5; i++)
    {
        x = 'A';
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("%c ", x);
                if (j < 5)
                {
                    x++;
                }
                else
                    x--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// 12)
#include <stdio.h>
int main()
{
    char x;
    for (int i = 1; i <= 4; i++)
    {
        x = 'A';
        for (int j = 1; j <= 7; j++)
        {
            if (j >= i && j <= 8 - i)
            {
                printf("%c ", x);
                if (j < 4)
                {
                    x++;
                }
                else
                    x--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// 13)
#include <stdio.h>
int main()
{
    char x;
    for (int i = 1; i <= 7; i++)
    {
        x = 'A';
        for (int j = 1; j <= 13; j++)
        {
            if (j <= 8 - i || j >= 6 + i && j <= 13)
            {
                printf("%c ", x);
                if (j < 7)
                {
                    x++;
                }
                else
                    x--;
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

// 14)
#include <stdio.h>
int main()
{
    char x;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            if (j <= 1 || j <= i && j >= i)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    for (int k = 1; k <= 5; k++)
    {
        printf("* ");
    }
    return 0;
}

// 15)
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j >= 6 - i && j <= 6 - i || j >= 5 && j <= 5)
            {
                printf("* ");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    for (int j = 1; j <= 5; j++)
    {
        printf("* ");
    }
    return 0;
}

// 16)
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 6 - i || j >= 4 + i && j <= 4 + i)
            {
                printf("* ");
            }

            else
                printf("  ");
        }
        printf("\n");
    }

    for (int j = 1; j <= 17; j++)
    {
        printf("*");
    }
    return 0;
}

// 17)
#include <stdio.h>
int main()
{
    for (int j = 1; j <= 17; j++)
    {
        printf("*");
    }
    printf("\n");
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= i + 1 && j <= i + 1 || j >= 9 - i && j <= 9 - i)
            {
                printf("* ");
            }

            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

// 18)
#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 9; j++)
        {
            if (j >= 6 - i && j <= 4 + i)
            {
                printf("* ");
            }

            else
                printf("  ");
        }
        printf("\n");
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (j >= i + 1 && j <= 9 - i)
            {
                printf("* ");
            }

            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}

// 19)
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            if (j >= 4 - i && j <= 6 + i || j >= 14 - i && j <= 16 + i)
            {
                printf("* ");
            }

            else
                printf("  ");
        }
        printf("\n");
    }

    for (int i = 1; i <= 6; i++)
    {
        printf("* ");
    }
    printf("   MySirG   ");
    for (int i = 13; i <= 19; i++)
    {
        printf("* ");
    }
    printf("\n");
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 19; j++)
        {
            if (j >= 1 + i && j <= 19 - i)
            {
                printf("* ");
            }

            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Num1;
    int Num2;
    int TmpNum;

    printf("Input the Num1:");
    scanf("%d", &Num1);
    printf("Input the Num2:");
    scanf("%d", &Num2);

    if(Num1 < Num2)
        {
            TmpNum = Num1;
            Num1 = Num2;
            Num2 = TmpNum;
        }

    while(Num2 != 0)
        {
            TmpNum = Num1 % Num2;
            Num1 = Num2;
            Num2 = TmpNum;
        }

    printf("The g.c.d is %d\n", Num1);
    system("pause");


    return 0;
}

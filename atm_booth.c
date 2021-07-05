#include<stdio.h>

int main()
{
    float x,y,z;
    char ch;

    printf("Enter initial amount : ");
    scanf("%f", &x);

    printf("Enter :\nc for Credit :\nd for Debit :\nb for balance :\n");
    scanf("\n%c", &ch);

    switch(ch)
    {
    case 'c':
        printf("Enter credit amount : ");
        scanf("%f", &y);

        x=(x+y);
        printf("New Amount : %f\n", x);
        break;
    case 'd':
        printf("Enter debit amount : ");
        scanf("%f", &y);

        if(x>=y)
        {
            x=(x-y);
            printf("New Amount : %f", x);
        }
        else
        {
            printf("Insufficient amount in your account\n");
        }
        break;
    case 'b':
        printf("Amount in your account = %f\n", x);
        break;
    default :
        printf("Choose correct for option \n");
    }



    return 0;
}

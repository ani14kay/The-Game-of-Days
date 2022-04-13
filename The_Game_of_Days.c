// this code is based on kosaraju algorithm

#include <stdio.h>
#include <stdlib.h>

void firstMessage()
{
    printf("\n |::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::|");
    printf("\n |                                                                                    |");
    printf("\n |************************  WELCOME TO THE GAME OF DAYS  *****************************|");
    printf("\n |                                                                                    |");
    printf("\n |------------------------------------------------------------------------------------|");
    printf("\n |  WE HAVE TWO FEATURES:-                                                            |");
    printf("\n |------------------------------------------------------------------------------------|");
    printf("\n |                                                                                    |");
    printf("\n | PRESS (1) TO PRINT THE CALENDAR FOR A MONTH OF A SPECIFIC YEAR: -                  |");
    printf("\n |                                                                                    |");
    printf("\n | PRESS (2) TO FIND OUT THE DAY ON A GIVEN DATE: -                                   |");
    printf("\n |                                                                                    |");
    printf("\n |------------------------------------------------------------------------------------|");
    printf("\n |                                                                                    |");
    printf("\n | SELECT AN OPTION ( EITHER 1 or 2 ) TO PROCEED FURTHER AND ENTER 0 TO EXIT          |");
    printf("\n |                                                                                    |");
    printf("\n |::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::| \n\n  ");
}

void MonthPrint()
{
    printf(" |------------------------------------------------------------------------------------|\n");
    printf(" |                      MONTH                     |               VALUE               |\n");
    printf(" |------------------------------------------------------------------------------------|\n");
    printf(" |                     JANUARY                    |                 1                 |\n");
    printf(" |                    FEBRUARY                    |                 2                 |\n");
    printf(" |                      MARCH                     |                 3                 |\n");
    printf(" |                      APRIL                     |                 4                 |\n");
    printf(" |                       MAY                      |                 5                 |\n");
    printf(" |                      JUNE                      |                 6                 |\n");
    printf(" |                      JULY                      |                 7                 |\n");
    printf(" |                     AUGUST                     |                 8                 |\n");
    printf(" |                    SEPTEMBER                   |                 9                 |\n");
    printf(" |                     OCTOBER                    |                 10                |\n");
    printf(" |                    NOVEMBER                    |                 11                |\n");
    printf(" |                    DECEMBER                    |                 12                |\n");
    printf(" |------------------------------------------------|-----------------------------------|\n");
}

int days(int md, int y)
{
    if (md == 1) // for january.
    {
        return 31;
    }
    else if (md == 2) // for february.
    {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) // checking wheather the given year is a leap year or not.
            return (29);
        else
            return (28);
    }
    else if (md == 3) // for march.
    {
        return 31;
    }
    else if (md == 4) // for april.
    {
        return 30;
    }
    else if (md == 5) // for may.
    {
        return 31;
    }
    else if (md == 6) // for june.
    {
        return 30;
    }
    else if (md == 7) // for july.
    {
        return 31;
    }
    else if (md == 8) // for august.
    {
        return 31;
    }
    else if (md == 9) // for september.
    {
        return 30;
    }
    else if (md == 10) // for october.
    {
        return 31;
    }
    else if (md == 11) // for november.
    {
        return 30;
    }
    else if (md == 12) // for december.
    {
        return 31;
    }
}

void calendar()
{

    int m;
    int y;
    for (int i = 1; i > 0; i++)
    {
        MonthPrint();
        // giving the path to the user that what he have to do for the particular month.
        printf("\n-------------------------------------------------------\n");
        printf("* ENTER THE CORRESPONGING NUMBER OR ENTER 0 TO EXIT *");
        printf("\n-------------------------------------------------------\n");

        printf("\n____________________________");
        printf("\n  ENTER THE DESIRED VALUE:");
        scanf("%d", &m); // taking the input from the user and storing it into m.
        system("cls");
        if (m >= 0 && m <= 12)
        {
            break;
        }
    }
    if (m == 0)
    {
        printf("the code is terminated");
    }
    else
    {
        for (int i = 1; i > 0; i++)
        {
            printf("\n------------------------\n");
            printf("**  ENTER 0 TO EXIT **");
            printf("\n------------------------\n");

            printf("\n______________________");
            printf("\n  ENTER THE YEAR:");
            scanf("%d", &y);

            system("cls");
            if (y >= 0)
            {
                break;
            }
        }
        if (y == 0)
        {
            printf("the code is terminated");
        }
        else
        {
            if (m == 1) // according to the given month and year we will print the input of the user.
            {
                printf("\n\n             JANUARY  %d", y);
            }
            else if (m == 2)
            {
                printf("\n\n             FEBRUARY  %d", y);
            }
            else if (m == 3)
            {
                printf("\n\n             MARCH  %d", y);
            }
            else if (m == 4)
            {
                printf("\n\n             APRIL  %d", y);
            }
            else if (m == 5)
            {
                printf("\n\n             MAY  %d", y);
            }
            else if (m == 6)
            {
                printf("\n\n             JUNE  %d", y);
            }
            else if (m == 7)
            {
                printf("\n\n             JULY  %d", y);
            }
            else if (m == 8)
            {
                printf("\n\n             AUGUST  %d", y);
            }
            else if (m == 9)
            {
                printf("\n\n            SEPTEMBER  %d", y);
            }
            else if (m == 10)
            {
                printf("\n\n             OCTOBER  %d", y);
            }
            else if (m == 11)
            {
                printf("\n\n             NOVEMBER  %d", y);
            }
            else
            {
                printf("\n\n             DECEMBER  %d", y);
            }
            // upto here the printing of the input of the user ends.
            //  now we will print the days with some designs on it.
            printf("\n -----------------------------------");
            printf("\n  SUN  MON  TUE  WED  THU  FRI  SAT");
            printf("\n -----------------------------------\n");
            int d;
            d = days(m, y);                                 // here we will call a function to get the no of days in the given month.
            int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4}; // gap starting for the different months.
            int k;
            y -= m < 3;
            // finding the day of the 1st date of the given month.
            // here y is the difference of the given year and the reference and we take one year before the georgian year i.e. 0.
            k = (y + y / 4 - y / 100 + y / 400 + t[m - 1] + 1) % 7; // tomohiko sakamotos algorithm.
            // as the first day of 1 ad is monday then the 1st day will sunday of the previous year
            /*then y will be the no of extra days and y / 4 - y / 100 + y / 400 is the
            number of leap days starting from the reference to the given year */
            /*so      __________
                  |__k__|__DAYS__|
                  |   0        |    sunday   |
                  |   1        |    monday   |
                  |   2        |    tuesday  |
                  |   3        |    wednesday|
                  |   4        |    thursday |
                  |   5        |    friday   |
                  |__6__|__saturday|
                                                  */
            int s = 0;
            for (int i = 1; i <= k; i++)
            {
                printf("     ");
                s++; // s=0;
            }
            // s=3;

            for (int i = 1; i <= d; i++) // for printing the dates of a particular month given by the user.
            {
                printf("%5d", i);
                s++;
                if (s > 6)
                {
                    printf("\n");
                    s = 0;
                }
            }
            printf("\n -----------------------------------");
            printf("\nHere is the calendar");
        }
    }
}

void year2(int d, int m, int ye)
{
    int k;
    // finding the day of the given date of given month.
    // here y is the difference of the given year and the reference and we take one year before the georgian year i.e. 0.
    // and here d will be the given date.
    // we have to find the number of extra days upto that date and add the gap of the given month and then add the date
    // and then find the remainder.
    printf("\n-------------------------------------------\n");
    printf("|THE DAY OF THE GIVEN DATE %d / %d / %d IS|", d, m, ye);
    printf("\n-------------------------------------------\n");
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    ye -= m < 3;
    k = (ye + ye / 4 - ye / 100 + ye / 400 + t[m - 1] + d) % 7;
    // tomohiko sakamotos algorithm.
    // as the first day of 1 ad is monday then the 1st day will sunday of the previous year
    /*then y will be the no of extra days and y / 4 - y / 100 + y / 400 is the
            number of leap days starting from the reference to the given year */
    /*so  ____________________________
                  |___k________|____DAYS_____|
                  |   0        |    sunday   |
                  |   1        |    monday   |
                  |   2        |    tuesday  |
                  |   3        |    wednesday|
                  |   4        |    thursday |
                  |   5        |    friday   |
                  |___6________|____saturday_|
                                                  */

    switch (k) // printing the day as by providing the value of k.
    {
    case 0:
        printf("             **********");
        printf("\n             * SUNDAY *");
        printf("\n             **********");
        break;

    case 1:
        printf("             **********");
        printf("\n             * MONDAY *");
        printf("\n             **********");
        break;

    case 2:
        printf("             ***********");
        printf("\n             * TUESDAY *");
        printf("\n             ***********");
        break;

    case 3:
        printf("             *************");
        printf("\n             * WEDNESDAY *");
        printf("\n             *************");
        break;

    case 4:
        printf("             ************");
        printf("\n             * THURSDAY *");
        printf("\n             ************");
        break;

    case 5:
        printf("             **********");
        printf("\n             * FRIDAY *");
        printf("\n             **********");
        break;

    case 6:
        printf("             ***********");
        printf("\n             * SATURDAY *");
        printf("\n             ***********");
        break;
    }
}

void year(int dat, int mn)
{
    int ye;
    for (int i = 1; i > 0; i++)
    {
        printf("\n----------------------\n");
        printf("*  ENTER 0 TO EXIT *");
        printf("\n----------------------\n");

        printf("\n______________________");
        printf("\n  ENTER THE YEAR:");
        scanf("%d", &ye);
        system("cls");
        if (ye >= 0)
        {
            break;
        }
    }
    if (ye == 0)
    {
        printf("the code is terminated");
    }
    else
    {
        if (dat == 29)
        {
            if (!(ye % 400 == 0 || (ye % 4 == 0 && ye % 100 != 0)))
            {
                printf("\n-----------------------------\n");
                printf("** ENTER THE PROPER YEAR  **");
                printf("\n-----------------------------\n");
                year(dat, mn);
            }
            else
            {
                year2(dat, mn, ye);
            }
        }
        else
        {
            year2(dat, mn, ye);
        }
    }
}

void month(int d)
{
    int mon;
    for (int i = 1; i > 0; i++)
    {
        MonthPrint();
        printf("\n-------------------------------------------------------\n");
        printf("* ENTER THE CORRESPONGING NUMBER OR ENTER 0 TO EXIT *");
        printf("\n-------------------------------------------------------\n");

        printf("\n_____________________");
        printf("\n  ENTER THE MONTH:");
        scanf("%d", &mon); // taking the input of the month of the paricular date.
        system("cls");
        if (mon >= 0 && mon <= 12)
        {
            break;
        }
    }
    if (mon == 0)
    {
        printf("the code is terminated");
    }
    else
    {

        if (d == 31)
        {
            if (mon == 2 || mon == 4 || mon == 6 || mon == 9 || mon == 11)
            {
                printf("\n-----------------------------\n");
                printf("** ENTER THE PROPER MONTH  **");
                printf("\n-----------------------------\n");
                month(d);
            }
            else
            {
                year(d, mon);
            }
        }
        else if (d == 29)
        {
            if (mon != 2)
            {
                printf("\n-----------------------------\n");
                printf("** ENTER THE PROPER MONTH  **");
                printf("\n-----------------------------\n");
                month(d);
            }
            else
            {
                year(d, mon);
            }
        }
        else
        {
            if (mon == 2)
            {
                printf("\n-----------------------------\n");
                printf("** ENTER THE PROPER MONTH  **");
                printf("\n-----------------------------\n");
                month(d);
            }
            else
            {
                year(d, mon);
            }
        }
    }
}

void dayprint()
{
    int da;

    for (int i = 1; i > 0; i++)
    {
        printf("\n------------------------\n");
        printf("**  ENTER 0 TO EXIT **");
        printf("\n------------------------\n");

        printf("\n____________________");
        printf("\n  ENTER THE DATE:");
        scanf("%d", &da);
        system("cls");
        if (da >= 0 && da <= 31)
        {
            break;
        }
    }
    if (da == 0)
    {
        printf("the code is terminated");
    }
    else
    {
        month(da);
    }
}

int main()
{

    int n;
    system("cls");
    for (int i = 1; i > 0; i++)
    {
        // here we give the first message to the user so that he/she can give the first input i.e. which feature he/she wanted to use
        firstMessage();
        printf("\n-------------------------------------------------------\n");
        printf("* ENTER THE CORRESPONGING NUMBER OR ENTER 0 TO EXIT *");
        printf("\n-------------------------------------------------------\n");

        printf("\n___________________________");
        printf("\n  ENTER THE DESIRED VALUE:"); // storing the input of the user in "n".
        scanf("%d", &n);                        // taking the desired input form the user and enter it into the "n".

        system("cls"); // clearing the desktop.
        if (n == 0 || n == 1 || n == 2)
        {
            break;
        }
    }
    if (n == 0)
    {
        printf("the code is terminated");
    }
    else if (n == 1)
    {
        // user want the full calendar to be printed
        calendar();
    }
    else
    {
        // user wants the day of a particular date
        dayprint();
    }

    return 0;
}
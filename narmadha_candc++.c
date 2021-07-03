#include<stdio.h>
#define TRUE    1
#define FALSE   0
int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]=
{
	" ",
	"\n\n\nJanuary",
	"\n\n\nFebruary",
	"\n\n\nMarch",
	"\n\n\nApril",
	"\n\n\nMay",
	"\n\n\nJune",
	"\n\n\nJuly",
	"\n\n\nAugust",
	"\n\n\nSeptember",
	"\n\n\nOctober",
	"\n\n\nNovember",
	"\n\n\nDecember"
};


int determinedaycode(int month, int year)
{
    int daycode, day=1;
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    year -= month < 3;
    daycode = ( year + year/4 - year/100 + year/400 + t[month-1] + day) % 7;

    return daycode;
}




int determineleapyear(int year)
{
	if(year% 4 == FALSE && year%100 != FALSE || year%400 == FALSE)
	{
		days_in_month[2] = 29;
		return TRUE;
	}
	else
	{
		days_in_month[2] = 28;
		return FALSE;
	}
}

void calendar(int year, int daycode, int month)
{
	int day;

		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );

		// Correct the position for the first date
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}

		// Print all the dates for one month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			printf("%2d", day );

			// Is day before Sat? Else start next line Sun.
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
			// Set position for next month
			//daycode = ( daycode + days_in_month[month] ) % 7;
	}


int main(void)
{

    {
	int year, month, daycode, leapyear;
	printf("This program shows calender of a given month \n");
    printf("\n Enter month,year format is mm-yyyy \n");
	printf("\nPlease enter a month and year (example: 04-2001) : ");
	scanf("%d %d", &month, &year);
	year = (-1*year);
	daycode = determinedaycode(month, year);
	determineleapyear(year);
	calendar(year, daycode, month);
	printf("\n");
    }

}


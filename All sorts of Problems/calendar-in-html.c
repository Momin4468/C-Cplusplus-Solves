#include<stdio.h>

 int get_1st_weekday(int year)
  {
      int d;
     d=(((year-1) * 365) +((year -1)/4)-((year-1)/100)+ ((year)/400) + 1) % 7;
     return d;
  }
int main()
{

    FILE *out;
	out = fopen("about.html","w");

    int year,month,day,daysInMonth,weekDay=0,startingDay;
    printf("\t\t\t\t\tWelcome to the Calender generator!!!\n");
    printf("Enter the Year:\n");
    scanf("%d",&year);

    fprintf(out, "<!DOCTYPE html>\n");
	fprintf(out, "<head><title>Year Calendar</title></head>\n");
	fprintf(out, "<html><body background=\"picture.jpg\" style=\"color:black;font-family:georgia\">\n");
	fprintf(out, "<h1 style=\"text-align:center;\">Year %d</h1>\n",year);

    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    fprintf(out, "<table  width='900' border ='5' cellspaxing='1' cellspaxing='1' align='center'>\n");

    //fprintf(out ,"<thead><tr><td colspan=\"7\" align=\"center\">January</td><td colspan=\"7\" align=\"center\">&emsp;&emsp;&emsp;&emsp;&emsp;February</td><td colspan=\"7\" align=\"center\">&emsp;&emsp; &emsp;&emsp;March</td></tr>");
    /*fprintf(out ,"<thead><tr>January<td>\n Sun| Mon| Tue| Wed| Thu| Fri| Sat|\n\n</td></tr></thead>");
    fprintf(out ,"<tr><td>February</td></tr>");
    fprintf(out ,"<tr><td>&emsp;&emsp; March</td></tr>");
    fprintf(out ,"<tr><td> &emsp;&emsp; April</td></tr>");
    fprintf(out ,"<tr><td>May</td></tr>");
    fprintf(out ,"<tr><td>June</td></tr>");
    fprintf(out ,"<tr><td>July</td></tr>");
    fprintf(out ,"<tr><td>August</td></tr>");
    fprintf(out ,"<tr><td>September</td></tr>");
    fprintf(out ,"<tr><td>October</td></tr>");
    fprintf(out ,"<tr><td>November</td></tr>");
    fprintf(out ,"<tr><td>December</td></tr>");*/


    int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
    //-------------------------------for leap year--------------------------------------//
    if (((year%4==0)&&(year%100!=0))||(year%400==0))
      monthDay[1]=29;

   startingDay= get_1st_weekday(year);// <<----------for starting day--------------------//
    //------------------------------for months and days--------------------------------//
    for(month=0;month<12;month++)
    {
        daysInMonth=monthDay[month];
        printf("\n\n-------------%s-------------\n",months[month]);
        printf("\n Sun| Mon| Tue| Wed| Thu| Fri| Sat|\n\n");
       // printf("\n  ---   ---   ---   ---   ---   ---   ---  \n ");
       fprintf(out,"<tr><td align='center'>\n %s\n\n</td</tr>",months[month]);
       fprintf(out,"<tr><td>\n  Sun| Mon| Tue| Wed| Thu| Fri| Sat| \n\n</td</tr>");

       for(weekDay=0;weekDay<startingDay;weekDay++)
        printf("     ");
        fprintf(out ,"<tr><td>               </td></tr>");
      //-----------------------------for weeks-------------------------------------------//
       for(day=1;day<=daysInMonth;day++)
        {

           printf("%5d",day);
           fprintf(out ,"<tr><td> %5d </td></tr>",day);
           if(++weekDay>6)
            {
               printf("\n");
               fprintf(out ,"<tr><td>\n</td></tr>");
               weekDay=0;
            }
           startingDay=weekDay;
        }
    }
    fprintf(out ,"</thead>");
    fprintf(out, "</table>\n");
    fprintf(out, "</body></html>\n");



    fclose(out);
	printf("\n\nInput is Successfully Created...");
	printf("\n----------------------------------");

}


#include <stdio.h>

int main(){
    int t1y = 1;
    int t1M = 11;
    int t1d = 25;
    int t1h = 22;
    int t1m = 58;

    int t2y = 2;
    int t2M = 1;
    int t2d = 2;
    int t2h = 8;
    int t2m = 5;

    // find t1 + t2 : we have to find from smallest to highest

    //minutes
    int t3m = (t1m + t2m)%60;
    int leftover_min_to_hour = (t1m + t2m)/60; 

    //hours
    int t3h = (t1h + t2h + leftover_min_to_hour)%24;
    int leftover_hour_to_day = (t1h + t2h + leftover_min_to_hour)/24;

    //days
    int t3d = (t1d + t2d + leftover_hour_to_day)%30;
    int leftover_day_to_month = (t1d + t2d + leftover_hour_to_day)/30;

    //Months
    int t3M = (t1M + t2M + leftover_day_to_month)%12;
    int leftover_month_to_year = (t1M + t2M + leftover_day_to_month)/12;

    //years
    int t3y = (t1y + t2y + leftover_month_to_year);

    printf("T3 = %5d years %5d months %5d days %5d hours %5d minutes",t3y,t3M,t3d,t3h,t3m);
}
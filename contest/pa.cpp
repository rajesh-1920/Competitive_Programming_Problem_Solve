// Author:  Rajesh Biswas
// Date  :  19-02-2024

#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int First_day_of_year(int year)
{
    int day = ((year * 365 + ((year - 1) / 4) + ((year - 1) / 400) - ((year - 1) / 100)) % 7);
    return day;
}
char *month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        string s[5];
        s[0] = "| - | - | - | - | - | - | - |";
        s[1] = "| - | - | - | - | - | - | - |";
        s[2] = "| - | - | - | - | - | - | - |";
        s[3] = "| - | - | - | - | - | - | - |";
        s[4] = "| - | - | - | - | - | - | - |";
        int i, j, year, week_ends = 0, space_counter;
        int days_of_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        int t1, t2, t3;
        char str[5], ch;
        // scanf("%d/%d/%d %s", &t1, &t2, &t3, &str);
        cin >> t1 >> ch >> t2 >> ch >> t3 >> str;

        year = t3;
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
            days_of_month[1] = 29;

        week_ends = First_day_of_year(year);

        for (i = 1; i <= 12; i++)
        {
            int t;
            if (i != t2)
            {
                for (space_counter = 0; space_counter < week_ends; space_counter++)
                    ;
                for (j = 1; j <= days_of_month[i - 1]; j++)
                {
                    week_ends++;
                    if (week_ends == 7)
                        week_ends = 0;
                }
            }
            else
            {
                int f = 0;
                t = 3;
                char ch;
                for (space_counter = 0; space_counter < week_ends; space_counter++)
                    t += 4;
                for (j = 1; j <= days_of_month[i - 1]; j++)
                {
                    if (j < 10)
                    {
                        ch = (char)j + '0';
                        s[f][t - 1] = ' ';
                        s[f][t] = ch;
                        t += 4;
                        if (t >= 29)
                        {
                            f++;
                            t = 3;
                        }
                        if (f == 5)
                            f = 0;
                    }
                    else
                    {
                        ch = (char)((j % 10) + '0');
                        s[f][t] = ch;
                        ch = (char)((j / 10) + '0');
                        s[f][t - 1] = ch;
                        t += 4;
                        if (t >= 29)
                        {
                            f++;
                            t = 3;
                        }
                        if (f == 5)
                            f = 0;
                    }
                    week_ends++;
                    if (week_ends == 7)
                        week_ends = 0;
                }
                for (j = 1; j <= days_of_month[i - 1]; j++)
                {
                    week_ends++;
                    if (week_ends == 7)
                    {
                        week_ends = 0;
                        break;
                    }
                }
                // cout << month[t2 - 1] << ' ' << t3 << '\n';
                printf("|---------------------------|\n");
                printf("|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n");
                printf("|---------------------------|\n");
                for (i = 0; i < 5; i++)
                {
                    cout << s[i];
                    printf("\n");
                    printf("|---------------------------|\n");
                }
                break;
            }
        }
        printf("\n");
    }
    return 0;
}
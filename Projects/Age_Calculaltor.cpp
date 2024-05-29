#include <iostream>
#include <ctime>
using namespace std;
int main()
{
repeat:

  int date, month, year, hours, minutes, seconds;
  int birth_date, birth_month, birth_year;
  int current_date, current_month, current_year;

  cout << endl
       << endl;

  cout << "\t\tEnter Birth date => ";
  cin >> birth_date;
  cout << "\t\tEnter Birth Month => ";
  cin >> birth_month;
  cout << "\t\tEnter Birth Year => ";
  cin >> birth_year;

  time_t now = time(0);
  tm *ltm = localtime(&now);

  current_year = 1900 + (*ltm).tm_year;
  current_month = 1 + (*ltm).tm_mon;
  current_date = (*ltm).tm_mday;

  cout << endl;
  cout << "\t\tCurrent Date/Month/Year " << endl;
  cout << "\t\tDD/MM/YYYY Format : " << current_date << " / " << current_month << " / " << current_year << endl;

  cout << endl;
  cout << "\t\tBirth Date/Month/Year " << endl;
  cout << "\t\tDD/MM/YYYY Format : " << birth_date << " / " << birth_month << " / " << birth_year << endl;

  int months_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  year = current_year - birth_year;

  if (current_month < birth_month)
  {
    year--;
    month = 12 - (birth_month - current_month);
  }
  else
  {
    month = current_month - birth_month;
  }
  if (current_date < birth_date)
  {
    month--;
    date = months_days[current_month - 1] - (birth_date - current_date);
  }
  else
  {
    date = current_date - birth_date;
  }

  int total_months = year * 12 + month;

  cout << "\n\t\tYour age  => ";
  cout << year << " years " << month << " months " << date << " days. ";
  cout << endl;

  cout << "\n\t\tIn Months => " << total_months << " Months " << date << " days" << endl;

  int weeks = (year * 52.1775) + float(month * 4.3481) + float(date / 7) + 1;
  cout << "\t\tIn Weeks => " << float(weeks) << " Weeks" << endl;

  int days = float((total_months * 30.43) + date);
  cout << "\t\tIn Days => " << days << " Days " << endl;

  hours = 24 * days;
  cout << "\n\t\tIn Hours => " << hours << " Hours " << endl;

  minutes = 60 * hours;
  cout << "\t\tIn Minutes => " << minutes << " Minutes " << endl;

  seconds = 60 * minutes;
  cout << "\t\tIn Seconds => " << seconds << " Seconds " << endl
       << endl;

  int choice;
  cout << "\t\tPress 1 for Repeat || any key to Exit => ";
  cin >> choice;

  if (choice == 1)
  {
    goto repeat;
  }

  system("pause");
  return 0;
}
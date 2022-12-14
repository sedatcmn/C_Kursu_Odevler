#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include<stdio.h>
#define isleap(y) ((y) % 4 == 0 && (y) % 100 != 0 || (y) % 400 == 0)

int day_of_year(int day, int month, int year) {
	int sum = day;

switch (month - 1) {
  case 11: sum += 30;
  case 10: sum += 31;
  case 9: sum += 30;
  case 8: sum += 31;
  case 7: sum += 31;
  case 6: sum += 30;
  case 5: sum += 31;
  case 4: sum += 30;		
  case 3: sum += 31;
  case 2: sum += isleap(year) ? 29 : 28;	
  case 1: sum += 31;
	
	return sum;
}
}
int main() 
{
	printf("The day of the year is %d\n", day_of_year(20,3,2022));
}

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void birthdayArray(int birthdays [], int size)
{
    for (int i = 0; i < size; i++)
    {
        birthdays[i] = rand() % 365 + 1;
    }
}

int main(void) 
{
	int birthdays[51];
	int trials = 5000;
	int flag;
	double total;
	int collisions[51];
   // number of people "in the room"
   for (int i = 2; i <= 50; i++)
   {
      collisions[i] = 0;
      // do 5000 trials:
      for (int t = 0; t < trials; t++)
      {
        birthdayArray(birthdays, i);
        flag = 0;
        // compare all pairs (j,k)
        for (int j = 0; j < i - 1 && flag == 0; j++)
        {
          for (int k = j + 1; k < i && flag == 0; k++ )
          {
            if (birthdays[k] == birthdays[j])
            {
              collisions[i]++;
              flag = 1;
            }
          }
        }
      }
    total = collisions[i] / 5000.0;
    cout << "For " << i << " people in the room the probability is " << total << endl;
    }
	return 0;
}
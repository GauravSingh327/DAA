#include <bits/stdc++.h>
using namespace std;
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
 
    cout <<"Following activities are selected "<< endl;
    i = 1;
    cout <<" "<< i;
    for (j = 2; j < n; j++)
    {
      if (s[j] >= f[i])
      {
          cout <<" " << j;
          i = j;
      }
    }
}
int main()
{
    int s[] = { 2 ,1, 3 ,2 ,2 ,2 ,1};
    int f[] = { 2, 3, 8, 6, 2, 5, 3};

    int n = sizeof(s)/sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
  int num1, num2, max;
  cin >> num1 >> num2;
  max = (num1 > num2) ? num1 : num2;

  while(true)
  {
    if(max % num1 == 0 && max % num2 ==0)
    {
      cout<<max;
      break;
    }
    else
      max++;
  }
  return 0;
}
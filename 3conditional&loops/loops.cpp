#include <iostream>
using namespace std;

int main()
{
  //! while loop
  // //question-> print number 1 to 5
  // int n=30;
  // int num=1;
  // while(num<=n){
  //   cout<<num<< " ";
  //   num++;//without this it will be an infinite loop
  // }

  //! for loop
  // //print number 1 to 10
  // for(int i=1;i<=10;i++){
  //   cout<<i<<" ";
  // }

  //? Question->print the sum of number from 1 to 10;
  // int i = 1, sum = 0;
  // for (int i = 1; i <= 10; i++)
  // {
  //   sum =sum+i;
  // }
  // cout << sum;

  //?solving the same problem using while loop
  // int i=1, sum=0;
  // while(i<=10){
  //   // sum=sum+i;
  //   sum+=i;
  //   i++;
  // }
  // cout<<sum;

  //*using break keyword
  // int i = 1, sum = 0;
  // for (i = 1; i <= 20; i++)
  // {
  //   sum += i;
  //   if (i == 10)
  //   {
  //     break;
  //   }
  // }
  // cout << sum;
  //?sum of all odd numbers form 1 to N
  // int i = 1, oddSum = 0, n = 20;
  // for (i = 1; i <= n; i++)
  // {
  //   if (i % 2 != 0)
  //   {
  //     oddSum += i;
  //   }
  // }
  // cout << oddSum;
  //*using while loop
  // int i = 1, sum = 0, n = 20;
  // while (i <= n)
  // {
  //   if (i % 2 != 0)
  //   {
  //     sum += i;
  //   }
  //   i++;
  // }
  // cout << sum;
  //*solving the same question using
  // int i = 1, evenSum = 0, n = 20;
  // for (i = 1; i <= n; i++)
  // {
  //   if (i % 2 == 0)
  //   {
  //     evenSum += i;
  //   }
  // }
  // cout << evenSum;

  // ! Do-while loop
  // int i = 1, n = 20;
  // do
  // {
  //   cout << i << " ";
  //   i++;
  // } while (i <= n);
  // cout << endl;
  //*solve the privious question using do-while loop
  // int i = 1, sum = 0, n = 20;
  // do
  // {
  //   if (i % 2 != 0)
  //   {
  //     sum += i;
  //   }
  //   i++;
  // } while (i <= n);

  // cout << sum;
  return 0;
}
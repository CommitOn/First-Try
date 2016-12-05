/**
 *
 * Solution to homework task
 * Introduction to programming course
 * Faculty of Mathematics and Informatics of Sofia University
 * Winter semester 2016/2017
 *
 * @author Plamen Komitov
 * @idnumber 81408
 * @task 1
 * @compiler GCC
 *
 */
#include<iostream>
using namespace std;
float y;
int x,c1,c2,c3,c4;
int main()
{
  cin>>y;

  if(y != int(y) || y < 1 || y > 3000)
  {
    cout<<"Invalid number!"<<endl;
    return 0;
  }

  x = int(y);

  c4 = x%10;
  x /= 10;
  c3 = x%10;
  x /= 10;
  c2 = x%10;
  x /= 10;
  c1 = x%10;

  if(c1 == 1)
    cout<<"M";
  if(c1 == 2)
    cout<<"MM";
  if(c1 == 3)
    cout<<"MMM";


  if(c2 == 1)
    cout<<"C";
  if(c2 == 2)
    cout<<"CC";
  if(c2 == 3)
    cout<<"CCC";
  if(c2 == 4)
    cout<<"CD";
  if(c2 == 5)
    cout<<"D";
  if(c2 == 6)
    cout<<"DC";
  if(c2 == 7)
    cout<<"DCC";
  if(c2 == 8)
    cout<<"DCCC";
  if(c2 == 9)
    cout<<"CM";


  if(c3 == 1)
    cout<<"X";
  if(c3 == 2)
    cout<<"XX";
  if(c3 == 3)
    cout<<"XXX";
  if(c3 == 4)
    cout<<"XL";
  if(c3 == 5)
    cout<<"L";
  if(c3 == 6)
    cout<<"LX";
  if(c3 == 7)
    cout<<"LXX";
  if(c3 == 8)
    cout<<"LXXX";
  if(c3 == 9)
    cout<<"XC";


  if(c4 == 1)
    cout<<"I";
  if(c4 == 2)
    cout<<"II";
  if(c4 == 3)
    cout<<"III";
  if(c4 == 4)
    cout<<"IV";
  if(c4 == 5)
    cout<<"V";
  if(c4 == 6)
    cout<<"VI";
  if(c4 == 7)
    cout<<"VII";
  if(c4 == 8)
    cout<<"VIII";
  if(c4 == 9)
    cout<<"IX";

  cout<<endl;
}

#include<iostream>
using namespace std;
long long i,j,k,pom,pomi,p,j1,bp,kp,b,kr,i1,pomj;
long long m[15],a[1000005],pp[15];
string s;
int main()
{

  k = 0;
  j = 0;
  j1 = 1;
  while(1)
  {
    k++;
    if(k == 2)
    {
      for(i=1000;i<=9999;i++)
      {
        pom = i;
        pomi = 5;
        while(pom > 0)
        {
          pomi--;
          m[pomi] = pom%10;
          pom /= 10;
        }

        if(m[1] == m[2] || m[1] == m[3] || m[1] == m[4] || m[2] == m[3] || m[2] == m[4] || m[3] == m[4])
           continue;

        bp = 0;
        kp = 0;

        for(i1=1;i1<=4;i1++)
        {
          if(m[i1] == pp[i1])
            bp++;
          else
            if(m[i1] == pp[1] || m[i1] == pp[2] || m[i1] == pp[3] || m[i1] == pp[4])
              kp++;
        }
        if(bp == b && kp == kr)
        {
          j++;
          a[j] = i;
          cout<<i<<" ";
        }
      }
    }

    if(k > 2)
    {
      pomj = j;
      for(j1=j1;j1<=pomj;j1++)
      {
        pom = a[j1];
        pomi = 5;
        while(pom > 0)
        {
          pomi--;
          m[pomi] = pom%10;
          pom /= 10;
        }

        bp = 0;
        kp = 0;

        for(i1=1;i1<=4;i1++)
        {
          if(m[i1] == pp[i1])
            bp++;
          else
            if(m[i1] == pp[1] || m[i1] == pp[2] || m[i1] == pp[3] || m[i1] == pp[4])
              kp++;
        }


        if(bp == b && kp == kr)
        {
          j++;
          a[j] = a[j1];
          cout<<a[j1]<<" ";
        }

      }
    }
    if(k> 1)
      cout<<endl;
    cin>>p;
    pom = p;
    pomi = 5;
    while(pom > 0)
    {
      pomi--;
      pp[pomi] = pom%10;
      pom /= 10;
    }


//    cout<<p<<endl;

    cin>>b>>kr;

    if(b == 4 && kr == 0)
    {
      cout<<k<<" opita"<<endl;
      break;
    }

  }
}

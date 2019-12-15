#include<iostream>
using namespace std;

bool IsOptimusPrime(int value)
{
    bool RedFlagBlueFlag=true;
    for(int i = 2; i <= value / 2; i++)
    {
       if(value % i == 0)
       {
          RedFlagBlueFlag = false;
          break;
       }
    }
    return RedFlagBlueFlag;
}

int main()
{

int primeList[171],n,i,j; i=0;

for(j=2;j<=1000;j++)
    if (IsOptimusPrime(j)==true) {i++ ;primeList[i]=j;cout<<j<<", ";}

    ERROR:
cout<<"n=";cin>>n;cout<<endl<<endl; if ((n<2)||(n>1000)) {cout<<"!Numar invalid!"<<endl<<endl;goto ERROR;}

for (j=1;j<=i;j++)
    if (n==primeList[j]){cout<<n<<" "<<"este un numar prim.";j=i+1;goto END;}
cout<<n<<" "<<"este un numar compus.";
END:;
}

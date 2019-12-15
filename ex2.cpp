#include<iostream>
using namespace std;

bool Prime(int value)
{
    bool BlackFlag=true;
    for(int i = 2; i <= value / 2; i++)
    {
       if(value % i == 0)
        {
          BlackFlag = false;
          break;
        }
    }
    return BlackFlag;
}

int main()
{
int p,q,r,n,i;
bool pFlag,qFlag,rFlag;START:
cout<<"p=";cin>>p;cout<<endl;
cout<<"q=";cin>>q;cout<<endl;
cout<<"r=";cin>>r;cout<<endl;
pFlag=Prime(p);
qFlag=Prime(q);
rFlag=Prime(r);
if ((p==q) || (p==r) || (q==r)) {cout<<"Numerele trebuie sa fie distincte."<<endl<<endl; goto START;}
if ((pFlag==false) || (qFlag==false) || (rFlag==false)) {cout<<"Toate numerele trebuie sa fie prime."<<endl<<endl; goto START;}
else cout<<"All good!"<<endl<<endl;

cout<<"n=";cin>>n;cout<<endl;

int k=0;
for(i=1;i<=n;i++)
    if ((i%p==0) || (i%q==0) || (i%r==0)) k++;
cout<<k;
}

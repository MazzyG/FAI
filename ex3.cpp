#include <iostream>
using namespace std;
int CMMDC(int a, int b)
{
    if (a == 0)
        return b;
    return CMMDC(b % a, a);
}
int main()
{
int nr1, nr2, cmmdc, cmmmc;

cout<<"Primul numar este"<<" ";cin>>nr1;cout<<endl;
cout<<"Al doilea numar este"<<" ";cin>>nr2;cout<<endl;

cmmdc= CMMDC(nr1 ,nr2);
cmmmc= (nr1*nr2)/cmmdc;

cout<<"C.m.m.d.c.-ul numerelor"<<" "<<nr1<<" "<<"si"<<" "<<nr2<<" "<<"este"<<" "<<cmmdc<<endl<<endl;
cout<<"C.m.m.m.c.-ul numerelor"<<" "<<nr1<<" "<<"si"<<" "<<nr2<<" "<<"este"<<" "<<cmmmc;

}

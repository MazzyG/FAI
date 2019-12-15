#include<iostream>
#include<cmath>
using namespace std;
int main()
{
//Initialize variables
int a1Real ,b1Img ,a2Real ,b2Img ,a3Real ,b3Img ,a4Real ,b4Img ;
//Input first number
cout<<"Numarul complex este de forma a+bi"<<endl;
cout<<"Introduceti coeficientii pentru primul numar"<<endl<<"a=";
cin>>a1Real;
cout<<"b=";
cin>>b1Img;
cout<<endl;
//Input second number
cout<<"Introduceti coeficientii pentru al doilea numar"<<endl<<"a=";
cin>>a2Real;
cout<<"b=";
cin>>b2Img;
cout<<endl;
//Product
a3Real = a1Real * a2Real - b1Img * b2Img;
b3Img = a1Real * b2Img + a2Real * b1Img;
//Sum
a4Real = a1Real+  a2Real;
b4Img = b1Img + b2Img;
//Output sum operation
cout<<"Suma dintre "<<a1Real;if(b1Img>=0) cout<<"+";cout<<b1Img<<"i"<<" si "<<a2Real;if(b2Img>=0) cout<<"+";cout<<b2Img<<"i"<<" este ";
//Output sum result
cout<<a4Real;if(b4Img>=0) cout<<"+";cout<<b4Img<<"i"<<endl<<endl;
//Output product operation
cout<<"Produsul dintre "<<a1Real;if(b1Img>=0) cout<<"+";cout<<b1Img<<"i"<<" si "<<a2Real;if(b2Img>=0) cout<<"+";cout<<b2Img<<"i"<<" este ";
//Output product result
cout<<a3Real;if(b3Img>=0) cout<<"+";cout<<b3Img<<"i"<<endl<<endl<<endl;
/*
      ....           ....           ....           ....
     ||             ||             ||             ||
 /"""l|\        /"""l|\        /"""l|\        /"""l|\
/_______\      /_______\      /_______\      /_______\
|  .-.  |------|  .-.  |------|  .-.  |------|  .-.  |------
 __|L|__| .--. |__|L|__| .--. |__|L|__| .--. |__|L|__| .--.
_\  \\p__`o-o'__\  \\p__`o-o'__\  \\p__`o-o'__\  \\p__`o-o'_
------------------------------------------------------------
------------------------------------------------------------
*/
//Initialize new variables
int Na1Real, Nb1Img, Na2Real, Nb2Img, Na3Real, Nb3Img,i;float k;
//Input new number
cout<<"Numarul complex este de forma a+bi"<<endl;
cout<<"Introduceti coeficientii numarului"<<endl<<"a=";
cin>>Na1Real;
cout<<"b=";
cin>>Nb1Img;
cout<<endl;
//Error
if((Na1Real==0)&&(Nb1Img==0)) goto Error;
//Module
k=sqrt((Na1Real*Na1Real) + (Nb1Img*Nb1Img));
//Output module
cout<<"Modulul lui "<<Na1Real;
if(Nb1Img >= 0) cout<<"+";
cout<<Nb1Img<<"i"<<" este radical din "<<(Na1Real*Na1Real) + (Nb1Img*Nb1Img)<<" care este aproximativ ";
cout<<k<<endl<<endl;
//Invert
i = (Na1Real*Na1Real) + (Nb1Img*Nb1Img);
//Output inverted
cout<<"Inversul lui "<<Na1Real;
if(Nb1Img >= 0) cout<<"+";
cout<<Nb1Img<<"i"<<" este ";
if(Na1Real !=0 ) cout<<Na1Real<<"/"<<i;
if(Nb1Img > 0) cout<<"+";
if(Nb1Img!=0) cout<<Nb1Img<<"i/"<<i<<endl<<endl;
Error:;
}

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;





int main()
{
    //Get first vector
    vector<float> Vector1;
    float value;
    int nr1,nr2,Vector10,Vector20; Vector10=0; Vector20=0;
    cout<<"Introduceti numarul de elemente al primei multimi."<<endl; cin>>nr1;
    for(int i=1;i<=nr1;i++)
    {
        cout<<"Introduceti un element."<<endl;
        cin>>value;
        if (value==0) Vector10=1;
        Vector1.push_back (value);
    }

    //Get second vector
    vector<float> Vector2;
    cout<<"Introduceti numarul de elemente al doilea multimi."<<endl; cin>>nr2;
    for(int i=1;i<=nr2;i++)
    {
        cout<<"Introduceti un element."<<endl;
        cin>>value;
        if (value==0) Vector20=1;
        Vector2.push_back (value);
    }
    cout<<endl;

    //Sort vector 1 & 2
    sort(Vector1.begin(), Vector1.end());
    sort(Vector2.begin(), Vector2.end());

    //Common vector
    vector<float> Common(Vector1.size() + Vector2.size());
    vector<float>::iterator it, st;
    it = set_intersection(Vector1.begin(),
                      Vector1.end(),
                      Vector2.begin(),
                      Vector2.end(),
                      Common.begin());
    cout<<"Intersectia"<<endl;
    for (st = Common.begin(); st != it; ++st)
            cout << *st << " ";
    cout<<endl<<endl;

    //Merge vector
    vector<float> Merge(Vector1.size() + Vector2.size());
    merge(Vector1.begin(), Vector1.end(),Vector2.begin(), Vector2.end(),Merge.begin());
    Merge.erase( unique( Merge.begin(), Merge.end() ), Merge.end() );
    sort(Merge.begin(), Merge.end());
    cout<<"Reuniunea"<<endl;
    for (int i = 0; i < Merge.size(); i++)
        cout << Merge[i] << " ";
    cout<<endl<<endl;

    //Difference Vector1-Vector2
    vector<float> Difference1(Vector1.size() + Vector2.size());
    set_difference(Vector1.begin(), Vector1.end(), Vector2.begin(), Vector2.end(), inserter(Difference1, Difference1.begin()));
    Difference1.erase( unique( Difference1.begin(), Difference1.end() ), Difference1.end() );
    if (Vector10==1 && Vector20==0) Difference1.push_back (0);
    cout<<"Diferenta dintre prima si a doua multime"<<endl;
    for (int i = 0; i < Difference1.size()-1; i++)
        cout << Difference1[i] << " ";
    cout<<endl<<endl;

    //Difference Vector2-Vector1
    vector<float> Difference2(Vector1.size() + Vector2.size());
    set_difference(Vector2.begin(), Vector2.end(), Vector1.begin(), Vector1.end(), inserter(Difference2, Difference2.begin()));
    Difference2.erase( unique( Difference2.begin(), Difference2.end() ), Difference2.end() );
    if (Vector20==1 && Vector10==0) Difference2.push_back (0);
    cout<<"Diferenta dintre a doua si prima multime"<<endl;
    for (int i = 0; i < Difference2.size()-1; i++)
        cout << Difference2[i] << " ";
    cout<<endl<<endl;

    //Symmetric difference
    vector<float> SymmetricDifference(Merge.size());
    set_difference(Merge.begin(), Merge.end(), Common.begin(), Common.end(), inserter(SymmetricDifference, SymmetricDifference.begin()));
    SymmetricDifference.erase( unique( SymmetricDifference.begin(), SymmetricDifference.end() ), SymmetricDifference.end() );
    cout<<"Diferenta simetrica"<<endl;
    for (int i = 0; i < SymmetricDifference.size()-1; i++)
        cout << SymmetricDifference[i] << " ";
    cout<<endl<<endl;
}

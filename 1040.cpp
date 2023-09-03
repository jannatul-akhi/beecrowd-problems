#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n1, n2, n3, n4, last, average;
    cin >> n1 >> n2 >> n3 >> n4;
    average = (n1*2 + n2*3 + n3*4 +n4*1)/(2+3+4+1);
    cout << fixed;
    cout << setprecision(1) << "Media: " <<average<< endl;
    if(average >= 7.0){
        cout << "Aluno aprovado." <<endl;
    }
    else if(average >= 5.0){
        cout << "Aluno em exame." <<endl;
        cin >> last;
        cout<<setprecision(1)<<"Nota do exame: "<<last<<endl;
        if((last+average/2.0)>5.0){
            cout << "Aluno aprovado." <<endl;
        }
        else{
            cout << "Aluno reprovado." <<endl;
        }
        cout<<setprecision(1)<<"Media final: "<<(last + average) / 2.0<<endl;
    }
    else{
        cout << "Aluno reprovado." <<endl;
    }
    return 0;
}
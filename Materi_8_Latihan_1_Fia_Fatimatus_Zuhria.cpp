#include <iostream>
using namespace std;


int prima[6] = {2,3,5,7,11,13};

void tampil(){
    int cacah[6] = {0,1,2,3,4,5};

        cout<<"<===================================================================>"<<endl;
        cout<<"                         Bilangan Cacah"<<endl;
        cout<<"<===================================================================>"<<endl;
    for(int i=0;i<6;i++){
        cout<<"Bilangan = "<<cacah[i]<<endl;
    }
}

int main()
{
    tampil();
    cout<<endl;
        cout<<"<===================================================================>"<<endl;
        cout<<"                         Bilangan Prima"<<endl;
        cout<<"<===================================================================>"<<endl;
     for(int i=0;i<6;i++){
        cout<<"Bilangan = "<<prima[i]<<endl;
     }
        cout<<endl;
        cout<<"<===================================================================>"<<endl;
        cout<<"                         Terimakasih ^_^"<<endl;
        cout<<"<===================================================================>"<<endl;
     return 0;
}

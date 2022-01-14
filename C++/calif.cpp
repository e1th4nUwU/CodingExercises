#include <iostream>

using namespace std;

int main()
{
    int n=0, aux=5; float total=0;
    
    while(aux > 4){
        n++;
        cout<<"Calif. #"<<n<<": ";
        cin>>aux;
        aux > 5 ? total += aux : n--;
    }
    
    cout<<endl<<n<<" calificaciones"<<endl<<"Sacaste "<<total/n;

    return 0;
}

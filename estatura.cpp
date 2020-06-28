#include "iostream"
#include "string.h"
using namespace std;

float mediaestatu();
int comparacion();

int main (void)
{
   cout <<endl;
   cout << mediaestatu();
   cout << comparacion();
   
}
float mediaestatu()
{
    float altura[25] , media,sum=0;
    int tam=0,i;

    for(int i=0; i<25; i++)
    {
        cout << "ingrese la altura " << i+1 << endl;
        cin >> altura[i];

        sum += altura[i];
    }

    media = sum/25;
    cout << "La media es: " ;
    return media;
    cout << endl << endl ;

} 
int comparacion()
{   
    float altura[25] ,sum=0;
    int tam=0,i,arri=0,bajo=0,igual=0,media;
    
    for (i=0; i<25; i++)
    {
        if (altura[i] > media)
        {
            arri++;
            
        }
        if (altura[i]< media)
        {
            bajo++;
            
            
        }
       
    }
 cout << endl << endl <<"arriba a la media: " << arri << endl;
 cout << endl << endl <<"abajo a la media: ";
    
    return bajo;
}
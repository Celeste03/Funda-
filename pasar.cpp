#include "iostream"

using namespace std;

int f1();
int f2();

int main (void)
{
    cout << endl ;
    cout << f1();
    cout << f2();
}
int f1()
{
    int stu[100][5];
    int numA,notas,multi,alumno,x,i,j;

    cout << "digite el numero de alumnos:  ";
    cin >> alumno;


    for(int i=0; i<alumno; i++)
    {   for(int j=0; j<5; j++)
        {
            cout <<"alumno["<<(i+1)<<"] nota["<<(j+1)<<"]=";
        
            cin >> stu [i][j];
           
        }
        
       
    }
    
    
}
int f2()
{
    int stu[100][5];
    int numA,notas=0,multi=0,alumno,x,sum=0,j,promedio,i,fila;

    cout << "escriba cuantas alumnos ingreso:  ";
    cin >> notas; 

    if (notas<=5)
    {  sum =0;
       for (i=0; i<=alumno;i++)
       {
            sum=sum+stu[notas][j];
       }
        promedio= sum/notas;
        cout  << "El promedio es: "<< promedio<<endl;
    }  
    else   
    {
      cout << "ERROR";
    }
    if (promedio<=6)
    {
        cout << "reprobado";
    }
    else 
    {
        cout << "aprobado";

    }





}
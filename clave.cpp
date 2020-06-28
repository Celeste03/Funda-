#include "iostream"
#include "stdio.h"
#include "string.h"

using namespace std;

char codigo(char letra)
{
  switch (letra)
  {
    case 'm' : letra = '0'; break;
    case 'u' : letra = '1'; break;
    case 'r' : letra = '2'; break;
    case 'c' : letra = '3'; break;
    case 'i' : letra = '4'; break;
    case 'e' : letra = '5'; break;
    case 'l' : letra = '6'; break;
    case 'a' : letra = '7'; break;
    case 'g' : letra = '8'; break;
    case 'o' : letra = '9'; break;
  }
  return letra ;
}

int main(void)
{ 
  char cod[10]={'m','u','r','c','i','e','l','a','g','o'}; 
  int logi;
  string frase ;

  cout << "ingresar frase: ";
  getline(cin,frase);

  logi =frase.length();

  for (int i=0; i<logi; i++)
  {
    cout << (codigo(frase[i]));
  }
   

}

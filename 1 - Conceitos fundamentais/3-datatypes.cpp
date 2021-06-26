#include <iostream>
using namespace std;

/* Tipos primitivos: 
boolean
char 
int
float
double
void
*/

/* Modificadores
signed
unsigned
short
long
*/ 

int main() {
   // bool é 1 bit
   
   // Variáveis inteiras
   cout << "Size of char: " << sizeof(char) << endl;
   cout << "Size of int: " << sizeof(int) << endl;
   cout << "Size of short int: " << sizeof(short int) << endl;
   cout << "Size of long int: " << sizeof(long int) << endl;

   // Variáveis de ponto flutuante
   cout << "Size of float: " << sizeof(float) << endl;
   cout << "Size of double: " << sizeof(double) << endl;

   // O tamanho dos tipos de dados depende do sistema
   
   // Definindo variáveis
   int var1;
   float var2;
   double var3 = 10.3;
   // int class = 3;
   // char word1;

   //Criando sinônimos
   typedef float totalScore;
   totalScore ana;

   return 0;
}
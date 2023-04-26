#include <iostream>

using namespace std;

int main() {
   int num, total = 0, cont = 0;

   cout << "Dame una lista de numeros psotivios segguidos de una lista de negativos: ";

   cin >> num;
   while (num >= 0) {
      total += num;
      cont++;
      cin >> num;
   }

   if (cont > 0) {
      double media = (double) total / cont;
      cout << "La media de la lista es: " << media << endl;
   } else {
      cout << "No diste numeros positivos." << endl;
   }

   return 0;
}
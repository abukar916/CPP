#include <iostream>

int main() {
  int pesos;
  int reais;
  int soles;
  int dollars; 
  
  std:: cout <<"Enter the number of Colombian Pessos: \n";
  std:: cin >> pesos;
  std:: cout <<"Enter the number of Brazilian Reais: \n";
  std:: cin >> reais;
  std:: cout <<"Enter the number of Peruvian Soles: \n";
  std:: cin >> soles;
  dollars = (0.059 * pesos) + (0.21 * reais) + (0.28 * soles);
  std:: cout << "US Dollars = $"<< dollars <<"\n";
}
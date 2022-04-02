#include "unit.h"
int main() {
  char category;
  main:
  
  printf("Welcome to Unit Converter! \n");
  printf("Here is a list of conversation to choose from: \n");
  printf("Temperature(T),Currency(C),Mass(M) \n");
  printf("Please enter the letter you want to convert.\n");
  scanf("%c",&category);
  char choice;
  choice=toupper(category);
  
  if(choice == 'T'){
      temperature();
  }
  
  else if(choice == 'C') {
      currency();
   }
  else if(choice == 'M'){
      mass();
   }
   else
   {
       printf(" WRONG INPUT !!! enter the correct choice. \n");
       goto main;
   }
  return 0;
}
void temperature()
{
    printf("Welcome to Temperature Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      int tempChoice;
      int inputF; 
      int inputC;
      int fahrenheitToCelcius;
      int celciusToFahrenheit;
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&inputF);
          fahrenheitToCelcius =  ((inputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitToCelcius);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&inputC);
        celciusToFahrenheit = ((9.0/5.0)*inputC + 32);
        printf("Fahrenheit: %d",celciusToFahrenheit);
      }
      else
        printf("Please enter the correct choice. \n");
}
void mass()
{
   printf("Welcome to Mass Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for ounces to pounds. \n");
      printf("Enter 2 for gram to pounds. \n");
      int massChoice;
      int inputOunce; 
      int inputGram; 
      float ounceToPounds; 
      float gramsToPounds;
      scanf("%d",&massChoice);
      if(massChoice == 1){
          printf("Please enter the ounce amount: \n");
          scanf("%d",&inputOunce);
          ounceToPounds = inputOunce * 0.0625;
          printf("Pounds: %.2f",ounceToPounds);
      }
      else if(massChoice == 2) {
          printf("Please enter the gram amount: \n");
          scanf("%d",&inputGram);
          gramsToPounds = inputGram * 0.00220462;
          printf("Pounds: %.2f",gramsToPounds);
      }
      else 
        printf("Please enter the correct choice. \n"); 
}
void currency()
{
   printf("Welcome to Currency Converter! \n");
      printf("Here is a list of conversations to choose from: \n");
      printf("Enter 1 for USD to Euro. \n");
      printf("Enter 2 for USD to JPY. \n");
      printf("Enter 3 for USD to RMB. \n");
      int currencyChoice;
      int inputUSDtoEuro; 
      int inputUSDtoJPY;
      float USDtoEURO;
      float USDtoJPY;
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the USD amount: \n");
          scanf("%d",&inputUSDtoEuro);
          USDtoEURO = inputUSDtoEuro * 0.87;
          printf("Euro: %.2f",USDtoEURO); // %.2f = rounds the float to only 2 decimal places;
      }
      else if(currencyChoice == 2){
          printf("Please enter the USD amount: \n");
          scanf("%d",&inputUSDtoJPY);
          USDtoJPY = inputUSDtoJPY * 111.09;
          printf("JPY: %.2f",USDtoJPY);
      }
     
      else
        printf("Please enter correct choice. \n"); 
}

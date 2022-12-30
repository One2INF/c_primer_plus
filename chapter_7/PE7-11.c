#include<stdio.h>


#define ONION_PRICE_PER_POUND    2.05
#define BEET_PRICE_PER_POUND    1.15
#define CARROT_PRICE_PER_POUND    1.09

#define ONION_PRICE_PER_POUND    2.05

#define FIRST_FREIGHT_AND_PACKING_CHARGES_LEVEL     5
#define SECOND_FREIGHT_AND_PACKING_CHARGES_LEVEL    20

#define FIRST_FREIGHT_AND_PACKING_CHARGES     6.5
#define SECOND_FREIGHT_AND_PACKING_CHARGES    14
#define THIRD_FREIGHT_AND_PACKING_CHARGES     0.5


int main(void)
{
  char SelectedType = 0;
  float Weight = 0;
  float OnionWeight = 0, BeetWeight = 0, CarrotWeight = 0;
  float OnionMoney = 0, BeetMoney = 0, CarrotMoney = 0;
  printf("**************************************************\r\n"
          "Enter vegetables type:\r\n"
          "a) onion          b) beet\r\n"
          "c) carrot         d) quit\r\n"
          "**************************************************\r\n");
  while((SelectedType = getchar()) != 'd')
  {
    while(getchar() != '\n');
    if(SelectedType != 'a' && SelectedType != 'b' && SelectedType != 'c')
      continue;
    
    printf("please input weight: ");
    while(!scanf("%f", &Weight))
    {
      while(getchar() != '\n');
      printf("\r\nplease input a valid weight: ");  
    }
    while(getchar() != '\n');

    switch(SelectedType)
    {
    case 'a':
    {
      OnionWeight += Weight;
      OnionMoney += ONION_PRICE_PER_POUND * Weight;
      break;
    }
    case 'b':
    {
      BeetWeight += Weight;
      BeetMoney += BEET_PRICE_PER_POUND * Weight;
      break;
    }
    case 'c':
    {
      CarrotWeight += Weight;
      CarrotMoney += CARROT_PRICE_PER_POUND * Weight;
      break;
    }
    default:
    {
      printf("please enter a valid type.\r\n");
      break;
    }
    }

  printf("**************************************************\r\n"
          "Enter vegetables type:\r\n"
          "a) onion          b) beet\r\n"
          "c) carrot         d) quit\r\n"
          "**************************************************\r\n");
  }

  float VegetablePrice = OnionMoney + BeetMoney + CarrotMoney;
  float VegetableWeight = OnionWeight + BeetWeight + CarrotWeight;
  float FpCharges;
  if(VegetableWeight == 0)
  {
    FpCharges = 0;
  }
  else if(VegetableWeight < FIRST_FREIGHT_AND_PACKING_CHARGES_LEVEL)
  {
    FpCharges = FIRST_FREIGHT_AND_PACKING_CHARGES;
  }
  else if(VegetableWeight < SECOND_FREIGHT_AND_PACKING_CHARGES_LEVEL)
  {
    FpCharges = SECOND_FREIGHT_AND_PACKING_CHARGES;
  }
  else
  {
    FpCharges = SECOND_FREIGHT_AND_PACKING_CHARGES + (VegetableWeight - SECOND_FREIGHT_AND_PACKING_CHARGES_LEVEL) * THIRD_FREIGHT_AND_PACKING_CHARGES;
  }

  float TotalPrice = VegetablePrice + FpCharges;
  float Discount = 1;
  if(TotalPrice > 100)
  {
    Discount = 0.95;
  }

  printf("\r\nvegetable\tunit-price\tweight\t\tprice\r\n");
  printf("onion\t\t%.2f\t\t%.2f\t\t%.2f\r\n", ONION_PRICE_PER_POUND, OnionWeight, OnionMoney);
  printf("beet\t\t%.2f\t\t%.2f\t\t%.2f\r\n",BEET_PRICE_PER_POUND, BeetWeight, BeetMoney);
  printf("carrot\t\t%.2f\t\t%.2f\t\t%.2f\r\n",CARROT_PRICE_PER_POUND, CarrotWeight, CarrotMoney);

  printf("\r\nvegetable total-weight: %.2f, total-price: %.2f\r\n", VegetableWeight, VegetablePrice);
  printf("discount: %.2f\r\n", 100 - 100 * Discount);
  printf("freight ang packing charges: %.2f\r\n", FpCharges);
  printf("Toal price: %.2f\r\n", TotalPrice * Discount);


  return 0;
}
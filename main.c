#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<stdlib.h>


double qeemat[7] = {150.80 , 70.50 , 90.00 , 100.00 , 100.00 , 22.00 , 16.00 };
double mealTaxPrices[7];
int jawanNumber,bachaNumber;


void printBurger();
void orderBurger();
double orderForJawans();
double orderForKids();
int main()
{
    char jawab = 'y';


     printBurger();
     while(jawab == 'y'|| jawab == 'Y')
    {
            printf("Kitne Jawan hai?:  ");
            scanf("%d",&jawanNumber);

            printf("Kitnay Bachay hai?: ");
            scanf("%d",&bachaNumber);


            orderBurger();

            printf("\nAur khaiengaye?(y/n):");
            scanf("\n%c",&jawab);
    }

 printf("\n\t\t\t   \22******************** ANAY KA SHUKRIYA :)  *************************\22\n");
 printf("\t\t\t\20********************** DOBARA ZAROOR AYEGA!  **************************\20 \n");
   system("pause");
   return 0;
}

void printBurger()
{

      printf("\20*******************  WELCOME TO ATEEQ's BURGER ***********************\n");
      printf("\n\22********************** AIK BAR AZMAISH *****************************\22\n");
      printf("\22********************** BAR BAR FARMAISH ****************************\22\n\n");
      printf(" \t\t\t BURGERZ\t\t\tQEEMAT\n");
      printf(" \t\t\t \22*******************************\22\n");
      printf(" \t\t\t 1- Fish Burger\t\t\tRs150.80\n");
      printf(" \t\t\t 2- Daal Wala Burger\t\tRs70.50\n");
      printf(" \t\t\t 3- Anday Wala Burger\t\tRs90.00\n");
      printf(" \t\t\t 4- Chicken Wala Burger\t\tRs100.00\n");
      printf(" \t\t\t 5- Beef Wala Burger\t\tRs100.00\n");
      printf(" \t\t\t 6- Zinger Wala Burger\t\tRs180.00\n");
      printf(" \t\t\t 7- Cheese Wala Zinger Burger   RS190.00\n");
       printf(" \t\t\t \22*******************************\22\n");



      printf("\n");
}
void orderBurger()
{
	double totalPriceForJawans, totalPriceForKids;
	double allPayment,discount;
         printf("\n                      \t\t**** ATEEQ's BURGER ****\n");
         printf("\n                      \t\t\22**** AIK BAR AZMAISH ***\22\n");
         printf("                      \t\t\22**** BAR BAR FARMAISH **\22\n\n\n");

        totalPriceForJawans =  orderForJawans();
        totalPriceForKids = orderForKids();
		allPayment = totalPriceForJawans + totalPriceForKids ;

     printf("\n \t\t     \22**************************************\22    \n");
     printf(" \t\t        *********  FINAL BILL   *********    \n");
     printf(" \t\t     \22**************************************\22    \n");
     printf(" \t\t\tJAWANS/CHILD\tCOUNT\tTOTAL\n");
     printf(" \t\t\tJAWANS\t\t  %d\t%5.2f\n",jawanNumber,totalPriceForJawans);
     printf(" \t\t\tCHOTAY\t\t  %d\t%5.2f\n",bachaNumber,totalPriceForKids);
     printf(" \t\t\tTOTAL BILL\t\t%5.2f\n",allPayment );




     if(allPayment < 10)
		discount=((allPayment * 2.5)/100);
     else if(allPayment>= 10 && allPayment<20)
          discount=((allPayment * 5)/100);
     else if(allPayment>= 20 && allPayment<30)
          discount=((allPayment * 10)/100);
     else if(allPayment>= 30 && allPayment<40)
          discount=((allPayment * 20)/100);
	else
		  discount= ((allPayment * 50)/100);


		  printf(" \t\t     \22**************************************\22    \n");
          printf("\t\t      After Miss Arfa's Discount: %5.2f\n",allPayment-discount);
          printf(" \t\t     \22**************************************\22    \n");

}
double orderForJawans()
{
     int menuOption,i,amount;
      char jawab = 'y';
      double totalPerPerson = 0.0,totalAllPerson = 0.0;
      double tax = 5.0;
      if(jawanNumber <=0)
		   printf("\n ");

      for(i=0;i<jawanNumber;i++)
     {
               printf("\t\t\t    \22****Han Bhai/Bhen Batayae!****\22\n\n");
               while(jawab == 'y' || jawab == 'Y')
               {
                              printf("Kia Khana Pasand kraingaye?:");
                              scanf("%d",&menuOption);
							  if(menuOption<1 || menuOption>7)
							  {
								  printf("Sorry Ye Hamaray Pass Nahi hai \nAgain! ");
								  continue;
							  }
                              printf("Please Miqdaar Bataye?:");
                              scanf("%d",&amount);


                           totalPerPerson = totalPerPerson + (amount * qeemat[menuOption - 1] );

                              printf("\nAur khaana pasand kraingaye?(Y/N):");
                              scanf("\n%c",&jawab);



               }
               printf("\n");
               totalAllPerson += totalAllPerson +  totalPerPerson;
               totalPerPerson = 0.0;
               jawab = 'y';
     }

     return totalAllPerson + ((totalAllPerson * tax) / 100);
}
double orderForKids()
{
       int menuOption,i,amount;
      char jawab = 'y';
      double totalPerKid = 0.0,totalAllKids = 0.0;
      double tax = 5.0,oneOrder;
       if(bachaNumber <=0)
		   printf("\n");


       for(i=0;i<bachaNumber;i++)
     {
              printf("\t\t\t    \22****Han Chota/Choti Batayae!****\22\n\n");
               while(jawab == 'y' || jawab == 'Y')
               {
                              printf("Kia Khana Pasand Kraingaye?:");
                              scanf("%d",&menuOption);
							  if(menuOption<1 || menuOption>7)
							  {
								  printf("Sorry Hamaray Pass Nahi hai ye ");
                                  continue;
							  }
                              printf("Please Miqdaar Bataye?:");
                              scanf("%d",&amount);

                              oneOrder = (qeemat[menuOption - 1] * 60)/100 ;
                              totalPerKid = totalPerKid + (amount * oneOrder)  ;

							  printf("Aur Khana pasand kraingaye?(Y/N):");
                              scanf("\n%c",&jawab);


               }
               totalAllKids += totalAllKids +  totalPerKid;
               jawab = 'y';
               totalPerKid = 0.0;

               printf("\n");

     }

     return totalAllKids + ((totalAllKids * tax) / 100);
}

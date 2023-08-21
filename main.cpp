#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

void converter() ; void dollar (); void euro () ; void swiss ();  void japan (); void ph ();
float divide (float a, float b);

int main()
{
    int choice ;
    char cont, cnt;
    float a ;


     cout << setw(90) << "Welcome to our Currency Converter! Do you want to use this program? " << endl ;
     cout << "------------------------------------------------------------------------------------------------------" << endl;
     cout << "<TYPE Y FOR YES> <TYPE N FOR NO> : " ;
     cin >> cont ;
     cout << "\n" ;

     while (cont == 'y' || cont == 'Y')
     {
         start:
        converter();
         cout << "\n" ;
         cout << "Enter the money do you want to convert. < enter a number > : " ;
         cin >> choice ;
         cout << "\n" ;

        if (choice == 1)
        {
           do
            {
            dollar();
            cin >> a ;
            cout << a << " $ = " << divide (a,1.11) << " in Euro. \n" ;
            cout << a << " $ = " << divide (a,1.01) << " in Franc. \n" ;
            cout << a << " $ = " << divide (a,0.0092) << " in Yen. \n" ;
            cout << a << " $ = " << divide  (a,0.019) << " in Php. \n" ;
            cout << "\n" ;
            cout << "Do you want to convert dollar again? < Type 'Y' if YES and 'N' if NO > : " ;
            cin >> cnt ;
            cout << "\n" ;
            system ("cls");
            }
            while (cnt == 'y' || cnt == 'Y') ;
        }
        else  if (choice == 2)
        {
            do
           {
            euro();
            cin >> a ;
            cout << a << " E = " << divide (a,0.90)  << " in Dollar. \n" ;
            cout << a << " E = " << divide (a,0.91) << " in Franc. \n" ;
            cout << a << " E = " << divide (a,0.0083) << " in Yen. \n" ;
            cout << a << " E = " << divide (a,0.018) << " in Php. \n" ;
            cout << "\n" ;
            cout << "Do you want to convert euro again? < Type 'Y' if YES and 'N' if NO > : " ;
            cin >> cnt ;
            cout << "\n" ;
            system ("cls");
            }
            while (cnt == 'y' || cnt == 'Y') ;
        }
        else  if (choice == 3)
        {
            do
           {
            swiss ();
            cin >> a ;
            cout << a << " F = " << divide (a,0.99) << " in Dollar. \n" ;
            cout << a << " F = " << divide (a,1.10) << " in Euro. \n" ;
            cout << a << " F = " << divide (a,0.0091) << " in Yen. \n" ;
            cout << a << " F = " << divide (a,0.019) << " in Php. \n" ;
            cout << "\n" ;
            cout << "Do you want to convert franc again? < Type 'Y' if YES and 'N' if NO > : " ;
            cin >> cnt ;
            cout << "\n" ;
            system ("cls");
            }
            while (cnt == 'y' || cnt == 'Y') ;
        }
        else  if (choice == 4)
        {
            do
           {
            japan ();
            cin >> a ;
            cout << a << " Y = " << divide (a,108.66) << " in Dollar. \n" ;
            cout << a << " Y = " << divide (a,120.90) << " in Euro. \n" ;
            cout << a << " Y = " << divide (a,110.01) << " in Franc. \n" ;
            cout << a << " Y = " << divide (a,2.12) << " in Php. \n" ;
            cout << "\n" ;
            cout << "Do you want to convert yen again? < Type 'Y' if YES and 'N' if NO > : " ;
            cin >> cnt ;
            cout << "\n" ;
            system ("cls");
            }
            while (cnt == 'y' || cnt == 'Y') ;
        }
        else  if (choice == 5)
        {
           do
           {
            ph ();
            cin >> a ;
            cout << a << " P = " << divide (a,51.34) << " in Dollar. \n" ;
            cout << a << " P = " << divide  (a,57.11) << " in Euro. \n" ;
            cout << a << " P = " << divide (a,51.98) << " in Franc. \n" ;
            cout << a << " P = " << divide (a,0.47) << " in Yen. \n" ;
            cout << "\n" ;
            cout << "Do you want to convert php again? < Type 'Y' if YES and 'N' if NO > : " ;
            cin >> cnt ;
            cout << "\n" ;
            system ("cls");
            }
            while (cnt == 'y' || cnt == 'Y') ;
        }
        else  if (choice == 6)
        {
            cout << "-----------------------------EXIT PROGRAM----------------------------- \n" ;
            cout << "\n" ;
            cout << " Are you sure you want to quit the program? < TYPE 'Y' TO EXIT > < TYPE 'N' FOR NO> : " ;
            cin >> cont ;
            cout << "\n" ;
            if (cont == 'N' || cont == 'n')
            {
                system ("cls");
                goto start;
            }
            else if (cont == 'Y' || cont == 'y')
            {
            cout << setw(50)<< "OKAY BYE! THANKS FOR USING OUR PROGRAM \n" ;
            break;
            }
            else
            {
                cout << "INVALID INPUT" ;
                break;
            }
        }
         else
            {
               cout << "INVALID INPUT \n" ;
               cout << "\n" ;
               break ;
            }
            system ("cls");

     }
     if (cont == 'N' || cont == 'n')
            {
            cout << "OKAY,THANK YOU.  \n" ;
            cout << "\n" ;
            }

    return 0;
}
void converter ()
{
            cout << "===========================MONEY CONVERTER========================== \n" ;
            cout << "|                                                                  | \n" ;
            cout << "| [1] USD ( U.S DOLLAR )          [2]  EUR ( EURO)                 | \n" ;
            cout << "| [3] CHF ( SWISS FRANC )         [4]  JPY ( JAPANESE YEN )        | \n" ;
            cout << "| [5] PHP ( PHILIPPINE PESO )     [6]  EXIT                        | \n" ;
            cout << "|                                                                  | \n" ;
            cout << "==================================================================== \n" ;

}
void dollar ()
 {
            cout << "-----------------------------DOLLAR CONVERTER----------------------------- \n" ;
            cout << "Enter the amount in dollars : " ;
 }
void euro ()
{           cout << "-----------------------------EURO CONVERTER----------------------------- \n" ;
            cout << "Enter the amount in euro : " ;
}
void swiss ()
{
            cout << "-----------------------------SWISS FRANC CONVERTER----------------------------- \n" ;
            cout << "Enter the amount in franc : " ;
}
void japan ()
{
            cout << "-----------------------------JAPANESE YEN CONVERTER----------------------------- \n" ;
            cout << "Enter the amount in yen : " ;
}
void ph ()
{
            cout << "-----------------------------PHILIPPINE PESO CONVERTER----------------------------- \n" ;
            cout << "Enter the amount in peso : " ;
}
float divide (float a, float b)
{
    float d;
d=a/b;
return (d);
}

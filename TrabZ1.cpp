#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>

using namespace std;
int main ()
{
    //Calculation choice
    int choice = -1;
    float vector [5];
        for (int i = 0; i < 5 ; i++)
        {
            cout << "Enter your five grades: ";
            cin >> vector [i];
        }

    //Menu Display
    cout << "Choose the option you want to perform" << endl << endl;
    cout << endl << "1. Mean";
    cout << endl << endl << "2. Standard Deviation" ;
    cout << endl << endl << "3. Determine the Largest and Smallest Values";
    cout << endl << endl << "4. Reading Numbers" << endl;

    //Loop to choose the type of alculation
    while(1){
        cin >> choice;

    //if-else ladder
        if (choice == 1)
        {
            cout << "You chose Mean (Weights: 3, 3, 2, 1, 1): " << endl;
    
    //Simple and Weigthed Mean
    {
        //Variable Declaration 
        int choose;
        float mean =((vector[1]+vector[2]+vector[3]+vector[4]+vector[5])/5);
        float meanW =(((vector[1] * 3)+(vector[2]*3)+(vector[3]*2)+(vector[4]*1)+(vector[5]*1))/5);

        //Data Input 
        cout << "What is the desired mean?";
        cout << endl << "1- Arithmetic";
        cout << endl << "2- Weighted" << endl;
        cin >> choose;

        //Processing
        {
            if (choose == 1)
                cout << "Arithmetic Mean: " << fixed << setprecision(2) << mean << endl;
            else

            if (choose == 2)
                cout << "Weigthed Mean: " << fixed << setprecision(2) << meanW << endl;
            else
                cout << "Invalid Option!!" << endl;
        }
    break;
    }
        }
        //Standard  Deviation
        else if (choice == 2)
        {
            cout << "You chose Standard Deviation: " << endl;
            {
            float m, mean, sigma, p;
            mean = 0;
            m = 0;
            sigma = 0;
            p = 0;

            for (int i = 0; i < 5; i++)
            {
                m = m + vector[i];
            }
            mean = m / 5.0;
            for (int i = 0; i < 5; i++)
            {
                p += pow((vector [i] - mean), 2);
            }
            sigma = p / 5.0;
            sigma = sqrt (sigma);
            cout << "The Result is: " << fixed << setprecision(2) << sigma << endl;
            
            }
            break;

        }
        //Determine the Largest and Smallest Value
        else if (choice == 3)
        {
            cout << "You chose Determine the Largest and Smallest Value:" << endl;
            {
                int largestV = -99999999;
                int smallestV =  99999999;

                for (int i = 0; i < 5; i++)
                {
                    if (vector[i] < smallestV)
                    {
                        smallestV = vector[i];
                    }
                    if (vector[i] > largestV)
                    {
                        largestV = vector[i];
                    }
                }
                cout << "Largest Value:  " << endl << largestV << endl;
                cout << "Smallest Value:  " << endl << smallestV << endl;
            break;
            }

        }
        //Leitura do Número
        else if (choice == 4)
        {
            sort(vector, vector+5);      //Ascending Order
            cout << "You chose Reading Numbers :" << endl <<  "[ ";
            for(int i = 0; i < 5; i++)
            {
                cout << vector[i] << ", ";
            }
            cout << "]" << endl;
        }
        //End of the loop
        else 
        {
            cout << "Invalid Command" << endl;
        }
   
            break;
        
     }
} 

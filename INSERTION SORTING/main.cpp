//ALI IBRAHIM
//P15/37272/2016
//Cpp program implementation of Insertion Sort

#include <iostream>
#include<iomanip>
#include<windows.h>

using namespace std;
void insertionsort(int arr[], int n);
void print(int arr[], int n);

int main( )
{   int arr[100];
    int n,j;
    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, 10);
    cout<<setw(75) <<"Welcome to my Insertion Sort Program \t\t"<<endl;
    SetConsoleTextAttribute(color, 15);
    cout<<"\t"<<"Please Enter the size of array: ";
    while(!(cin>>n) || n < 1)
        {
    SetConsoleTextAttribute(color, 12);
    cout<<"\t"<<"Enter an Integer value size of ARRAY!!!: ";
    cin.clear();
    cin.ignore(100,'\n');
    }

    for(j=0; j<n; j++)
        {
    SetConsoleTextAttribute(color, 15);
    cout<< setw(30) <<"Enter the element: ["<< j + 1 <<"] : \t\t";
           while(!(cin>>arr[j]))
            {
        SetConsoleTextAttribute(color, 12);
        cout<<setw(30)<< "Enter an integer value for ["<< j + 1 <<"]!!: \t\t";
        cin.clear();
        cin.ignore(100,'\n');
           }

    }
     SetConsoleTextAttribute(color, 15);
    cout << setw(30) <<"\nYour Numbers before Insertion Sort Order Are: "<<endl;
                for(int i=0;i<n;i++)
                {   std::cout << std::setw(2);
                SetConsoleTextAttribute(color, 14);
                    std::cout <<"\t"<< "{";
                    cout << arr[i];

                    if(i!=(n))
                    {
                        cout << "}";
                    }
                }

    SetConsoleTextAttribute(color, 15);
   cout <<"\t"<<setw(30)<<"\nYour Numbers after insertion sort order are:\n";
   insertionsort(arr, n);
   SetConsoleTextAttribute(color, 14);
   print(arr, n);

 return 0;
}
void insertionsort(int arr[], int n){
 for(int j=1; j < n;  j++)
    {
        int temp = arr[j];
        int i= j;
        while(i> 0 && arr[i-1] > temp)
         {
            arr[i] = arr[i-1];
            i--;
         }
         arr[i] = temp;
        }
}
void print(int arr[], int n){
    int i;
    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(color, 14);


for(i=0; i<n; i++){
        std::cout << std::setw(2);
        std::cout <<"\t"<<"{";

        cout <<arr[i];
        if(i!=(n))
        {
        cout << "}";
        }
    }

}

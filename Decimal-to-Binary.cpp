#include <iostream>


using namespace std;

int main() {
    
    int dec, arr[50], i, j, length, real;
    
    cout<<"Enter any number: ";
    
    cin>>dec;
    
    real = dec;
    
    for (i=0; dec > 0 ; i++)
    {
        arr[i] = dec%2;
        dec = dec/2;
        
    }
    
    length = i -1 ;
    
    
    cout<< "Binary of "<<real<<" is : " ;
    for(j = length ; j >= 0 ; j-- )
    {
        cout<< arr[j];
    }
    
}

#include <iostream>
#include<math.h>

using namespace std;

int main(){
    float price;
    char rating;
    float distance;
    double a;
    double b;
    double c;
    double TD;
    double NP;

    cout<<"Total price: ";
    cin>>price;
    cout<<"Enter your rating(G/A):";
    cin>>rating;
    cout<<"Distance from your home in (KM):";
    cin>>distance;

  

    if(price > 1000 && rating == 'G' && distance < 5) {
        a = price * 0.05;
        b = price * 0.07;
        c = price * 0.08;

        TD = a + b + c;
        cout<<"Your total discount is " <<TD;
    } else if(price > 1000 && rating == 'G') {
        a = price * 0.05;
        b = price * 0.07;
        c = 0;

        TD = a + b + c;
        cout<<"Your total discount is " <<TD;
    } else if(price > 1000 && distance < 5) {
        a = price * 0.05;
        b = 0;
        c = price * 0.08;

        TD = a + b + c;
        cout<<"Your total discount is " <<TD;
    } else if(rating == 'G' && distance < 5) {
        a = 0;
        b = price * 0.07;
        c = price * 0.08;

        TD = a + b + c;
        cout<<"Your total discount is " <<TD;
    } else if (price > 1000) {
        a = price * 0.05;
        b = 0;
        c = 0;

        TD = a + b + c;
        cout<<"Your total discount is " <<TD;
    } else if (rating == 'G') {
        a = 0;
        b = price * 0.07;
        c = 0;

        TD = a + b + c;
        cout<<"Your total discount is " <<TD;
    } else if(distance < 5) {
        a = 0;
        b = 0;
        c = price * 0.08;

        TD = a + b + c;
        cout<<"Your total discount is " <<TD;
    } else {
        cout<< "No Discount! \n";
    }

    NP = price - TD;
    cout<<"\nYour new price is " <<NP;

    return 0;
}

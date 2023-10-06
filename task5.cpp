#include<iostream>
using namespace std;
main(){
    system("color 0B");


cout<<"                                                                                                      "<<endl;
cout <<"                                   >>>>>>>>> Welcome to FooD Billing System <<<<<<<<                                   "<<endl;
cout<<"                 |____________________________________________________________________________________|      "<<endl;
cout<<"                                              ------------------------------                                                                           "<<endl;
int pizza, fries, wings;
int CocaCola;
cout<<"     Enter No of the Pizza: ";
cin>>pizza;
cout<<"     Enter No of drinks: ";
cin>>CocaCola;
cout<<"     Fries (Large) :";
cin>>fries;
cout<<"     Enter No Of Wings (more than 12) :";
cin>>wings;
if(wings<12){
    cout<<"     Please enter No of wings Greater than 12: ";
    cin>>wings;
}
float price = (pizza*999.9)+(CocaCola*110)+(fries*350.0)+(wings*50.0);
cout<<"     Final Price = Rs."<<price;


}




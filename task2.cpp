#include<iostream>
using namespace std;

main()
{
    float length, volume, height, width;
    string unt;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters):";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>unt;
    volume = (length*width*height)/3.0;
    if (unt == "meters") 
   {
    cout<<"The volume of the pyramid is: " << volume << ".000000 cubic meters";
   }
   if (unt == "millimeters")
   {
    cout<<"The volume of the pyramid is: " << volume*1000000000 << ".000000 cubic millimeters";
   } 
   if (unt == "centimeters")
   {
    cout<<"The volume of the pyramid is: " << volume*1000000 << ".000000 cubic millimeters";
   } 
   if (unt == "kilometers")
   {
    cout<<"The volume of the pyramid is: " << volume/1000000000 << ".000000 cubic millimeters";
   } 
   
    
}

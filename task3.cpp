 #include<iostream>
 using namespace std;

void taxCalculator(char type, float price);

main()
{
    float price, taxrate;
    char type;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>type; 
    cout<<"Enter the price of the vehicle: $";
    cin>>price;
    taxCalculator(type, price);
    


}
void taxCalculator(char type, float price)
{
    float taxamount, finalprice;
    finalprice=price+taxamount; 
    

    if (type == 'E' )
    {
        taxamount=(price*8.0)/100;
        finalprice=price+taxamount;
        cout <<"The final price of a vehicle of type E after adding tax is "<< finalprice<<".";
    }
    if (type == 'S')
    {
        taxamount=(price*10.0)/100;
        finalprice=price+taxamount;
        cout<<"The final price of a vehicle of type E after adding tax is $"<< finalprice<<".";
    }
    if (type == 'M')
    {
        taxamount=(price*6.0)/100;
        finalprice=price+taxamount;
        cout<<"The final price of a vehicle of type E after adding tax is "<< finalprice<<".";
    }
    if (type == 'V')
    {
        taxamount=(price*12.0)/100;
        finalprice=price+taxamount;
        cout<<"The final price of a vehicle of type E after adding tax is "<< finalprice<<".";
    }
    if (type == 'T')
    {
        taxamount=(price*15.0)/100;
        finalprice=price+taxamount;
        cout<<"The final price of a vehicle of type E after adding tax is "<< finalprice<<".";
    }
}

#include<iostream>
#include<string>
using namespace std;

class Product
{
public:
    int product_id;
    string product_name;
    float price;
    int monthlysales[12];

    void getdata()
    {
        cout<<"enter product id:"<<endl;
        cin>>product_id;
        cout<<"enter name of the product:"<<endl;
        cin>>product_name;
        cout<<"enter price:"<<endl;
        cin>>price;
        cout<<"enter monthly sales:\n";
        for(int i=0; i<12; i++){
            cout<<"month "<<i+1<<":";
            cin>>monthlysales[i];
        }
    }

    int total_quantity()
    {
        int total = 0;
        for(int i=0; i<12; i++){
            total = total + monthlysales[i];
        }
        return total;
    }

    float total_bill()
    {
        return total_quantity() * price;
    }

    void display()
    {
        cout<<"\n..........................\n";
        cout<<"product id:"<<product_id<<endl;
        cout<<"product name:"<<product_name<<endl;
        cout<<"price:"<<price<<endl;
        cout<<"total quantity:"<<total_quantity()<<endl;
        cout<<"total bill:"<<total_bill()<<endl;
        cout<<"..........................\n";
    }
};

int main()
{
    int n;

    cout<<"enter the number of products:";
    cin>>n;

    if(n>100)
    {
        cout<<"maximum 100 products allowed"<<endl;
        return 0;
    }

    Product p[100];
    for(int i=0; i<n; i++)
    {
        cout<<"\nenter details of product "<<i+1<<":\n";
        p[i].getdata();
    }

    cout<<"\n...................PRODUCT DETAILS.......................\n";
    for(int i=0; i<n; i++)
    {
        p[i].display();
    }
    return 0;
}

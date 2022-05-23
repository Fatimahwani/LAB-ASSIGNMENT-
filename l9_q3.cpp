/*Start with the publication, book, and tape classes of Exercise 1. Add a base class sales
that holds an array of three floats so that it can record the dollar sales of a particular 
publication for the last three months. Include a getdata() function to get three sales
amounts from the user, and a putdata() function to display the sales figures. Alter the
book and tape classes so they are derived from both publication and sales. An object
of class book or tape should input and output sales data along with its other data. Write
a main() function to create a book object and a tape object and exercise their input/output
capabilities*/
#include <iostream>
 
using namespace std;

class Sales
{
    protected:
     float pub_sales[3];

    public:
     

     void get_data_sales()
     {
         cout<<"Enter the sales from last three months"<<endl;
         int i;
         for(i=0;i<3;i++)
         {
             cin>>pub_sales[i];
         }
     }

     void put_data_sales()
     {
         cout<<"the sales are "<<pub_sales[0]<<" "<<pub_sales[1]<<" "<<pub_sales[2]<<endl;
     }

};
 
class Publication
{
    protected:
     string title;
     float price;
     
    public:

     
    void get_data_publication()
    {
        cout<<"enter the title,price"<<endl;
        cin>>title>>price;
        
    }
    
    void put_data_publication()
    {
        cout<<"The title is "<<title<<endl;
        cout<<"The price is "<<price<<endl;
    }
    
    
};
 
class Book:public Publication,public Sales
{
    private:
    int page_count;
    
    public:

    
    void get_data_book()
    {
        get_data_publication();
        get_data_sales();
        cout<<"Enter the page count"<<endl;
        cin>>page_count;
        
    }
    
    void put_data_book()
    {
        put_data_publication();
        put_data_sales();
        cout<<"The page count is "<<page_count;
    }
    };
    
    class Tape:public Publication,public Sales
    {
        private:
        float playing_time;
        
        public:
        void get_data_tape()
        {
            get_data_publication();
            get_data_sales();
            cout<<"Enter the playing time in minutes"<<endl;
            cin>>playing_time;
            
        }
        
        void put_data_tape()
        {
            put_data_publication();
            put_data_sales();
            cout<<"playing time is "<<playing_time<<endl;
        }
    };
int main() {
    Publication p;
    Sales s;
    Book b;
    Tape t;
    
    
    b.get_data_book();
    b.get_data_book();
    
    
 
    return 0;
}
 
/*imagine a publishing company that markets both book and audiocassette versions of its
works. Create a class publication that stores the title (a string) and price (type float)
of a publication. From this class derive two classes: book, which adds a page count (type
int), and tape, which adds a playing time in minutes (type float). Each of these three
classes should have a getdata() function to get its data from the user at the keyboard,
and a putdata() function to display its data.
Write a main() program to test the book and tape classes by creating instances of them,
asking the user to fill in data with getdata(), and then displaying the data with putdata().*/
#include <iostream>
 
using namespace std;
 
class Publication
{
    protected:
     string title;
     float price;
     
    public: 
    void get_data()
    {
        cout<<"enter the title,price"<<endl;
        cin>>title>>price;
        
    }
    
    void put_data()
    {
        cout<<"The title is "<<title<<endl;
        cout<<"The price is "<<price<<endl;
    }
    
    
};
 
class Book:public Publication
{
    private:
    int page_count;
    
    public:

    Book():page_count(0){}
    void get_data_book()
    {
        get_data();
        cout<<"Enter the page count"<<endl;
        cin>>page_count;
        
    }
    
    void put_data_book()
    {
        put_data();
        cout<<"The page count is "<<page_count;
    }
    };
    
    class Tape:public Publication
    {
        private:
        float playing_time;
        
        public:
        void get_data_tape()
        {
            get_data();
            cout<<"Enter the playing time in minutes"<<endl;
            cin>>playing_time;
            
        }
        
        void put_data_tape()
        {
            put_data();
            cout<<"playing time is "<<playing_time<<endl;
        }
    };
int main() {
    Publication p;
    Book b;
    Tape t;
    
    
    t.get_data_tape();
    t.put_data_tape();
    
    
 
    return 0;
}
 

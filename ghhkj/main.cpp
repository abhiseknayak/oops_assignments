#include<iostream>

using namespace std;

class Publication
{
public:
    char title[100];
    float price;
    void getdata();
    void displaydata();

};

class Book:public Publication
{
    int page;
public:
    void getdata();
    void displaydata();
};

class Tape:public Publication
{
    int playing_time;
public:
    void getdata();
    void displaydata();

};

void Publication::getdata()
{
    cout<<"Enter the title of book\n";
    cin>>title;
    cout<<"Enter the price of the book\n";
    cin>>price;
}

void Publication::displaydata()
{
    cout<<"The title of the book is :"<<title<<'\n';
    cout<<"The price of the book is :"<<price<<'\n';
}

void Book::displaydata()
{
    Publication::displaydata();
    cout<<"The total number of pages is :"<<page<<'\n';


}

void Book::getdata()
{
    Publication::getdata();
    cout<<"enter the number of pages in book is :";
    cin>>page;
}

void Tape::getdata()
{
    Publication::getdata();
    cout<<"enter the duration of playing time :";
    cin>>playing_time;
}

void Tape::displaydata()
{
    Publication::displaydata();
    cout<<"The playing time of the tape is :"<<playing_time<<'\n';
}


int main()
{
    Publication a;
    Book b;
    Tape c;
    a.getdata();
    a.displaydata();
    b.getdata();
    b.displaydata();
    c.getdata();
    c.displaydata();

    return 0;
}



#include <iostream>
#include <string>

using namespace std;

class Publication{
protected:
    string title;
    float price;
public:
    void set_data(){
        cout << "Enter title : ";
        getline(cin,title);
        cout << "Enter price : ";
        cin >> price;
    }
    void get_data() const{
        cout <<"Title : " << title << endl;
        cout <<"Price : " << price << endl;
    }
};

class Book : public Publication{
private:
    int page_count;
public:
    void set_data(){
        Publication::set_data();
        cout << "Enter Book's total pages : ";
        cin >> page_count;
        cin.ignore();
    }
    void get_data() const{
        Publication::get_data();
        cout << "Book's Total Pages : " << page_count << endl;
    }
};

class Tape : public Publication{
private:
    float playTime;
public:
    void set_data(){
        Publication::set_data();
        cout << "Enter Tape's playing time : ";
        cin >> playTime;
        cin.ignore();
    }
    void get_data() const{
        Publication::get_data();
        cout << "Playing Time : " << playTime << endl;
    }
};

int main()
{
    Book obj1;
    Tape obj2;

    cout << "\n\tEnter details for Book\n\n";
    obj1.set_data();

    cout << "\n\tEnter details for Tape\n\n";
    obj2.set_data();

    cout << "\n\nGet data for Book\n\n";
    obj1.get_data();

    cout << "\n\nGet data for Tape\n\n";
    obj2.get_data();

    return 0;
}
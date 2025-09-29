//toba mohaqqeq
//COMSC-210
//LAB-15


#include<iostream>
#include<string>
#include<array>
#include<fstream>
 using namespace std;

  class Movie{
    private:   
         string title;
         int yearReleased;
         string title;
    
    public:
       void setWriter(string writer) { screenWriter = writer;}
       string getWriter() {return screenWriter;}

       void setyear(int year) {yearReleased = year;}
       int getYear() {return yearReleased;}

       void setTitle(string movieTitle) {title = movieTitle;}
       string getTitle() {return title;}

  void print(){

     cout << "Title: " << title << endl;
     cout << "Year published: " << yearReleased << endl;
     cout << "Author: " << author << endl << endl;
    
  }
};

int main() {
ifstream inFile("input.txt");
     if (!inFile) {
         cerr << "Error: Unable to open the file"; << endl;
             return 1; }
     
     }
Movie movie[4];
string writer, title;
int year;


for (int i=0; i<4; i++){
     getline(inFile, title);
     inFile >> year;
     inFile.ignore();  // this ignores the new line.
     getline(inFile, writer);


     Movie temp;
     temp.setTitle(title);
     temp.setYear(year);
     temp.setWriter(writer);

     movie[i] = temp;
}



     

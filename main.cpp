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


  }
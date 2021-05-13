#ifndef RGBVALUES_H
#define RGBVALUES_H
#include <string>
#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::vector;

class RGBvalues{
  private:
    int redv;
    int greenv;
    int bluev;

  public: 
    string svgRGB0(int,int,int);

    string svgRGB1(int,int,int);

    string svgRGB2(int,int,int);

    string svgRGB3(int,int,int);

    string svgRGB4(int,int,int);

    string svgRGB5(int,int,int);

    string svgBackground(void);

};

#endif
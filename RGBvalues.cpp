#include "RGBvalues.h"
#include <string>
#include <vector>
#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::to_string;

string RGBvalues::svgRGB0(int redv, int greenv, int bluev){
  string svgStart = "<line x1='50' x2='50' y1='100' y2='200' stroke='rgb(";
  string redsvg = to_string(redv);
  string greensvg = to_string(greenv);
  string bluesvg = to_string(bluev);
  string comma = ", ";
  string svgEnd = ")' stroke-width='50' stroke-linecap='butt'/>";

  string svgColor = svgStart + redsvg + comma + greensvg + comma + bluesvg + svgEnd;

  return svgColor;
}

string RGBvalues::svgRGB1(int redv, int greenv, int bluev){
  string svgStart = "<line x1='150' x2='150' y1='100' y2='200' stroke='rgb(";
  string redsvg = to_string(redv);
  string greensvg = to_string(greenv);
  string bluesvg = to_string(bluev);
  string comma = ", ";
  string svgEnd = ")' stroke-width='50' stroke-linecap='butt'/>";

  string svgColor = svgStart + redsvg + comma + greensvg + comma + bluesvg + svgEnd;

  return svgColor;
}

string RGBvalues::svgRGB2(int redv, int greenv, int bluev){
  string svgStart = "<line x1='250' x2='250' y1='100' y2='200' stroke='rgb(";
  string redsvg = to_string(redv);
  string greensvg = to_string(greenv);
  string bluesvg = to_string(bluev);
  string comma = ", ";
  string svgEnd = ")' stroke-width='50' stroke-linecap='butt'/>";

  string svgColor = svgStart + redsvg + comma + greensvg + comma + bluesvg + svgEnd;

  return svgColor;
}

string RGBvalues::svgRGB3(int redv, int greenv, int bluev){
  string svgStart = "<line x1='350' x2='350' y1='100' y2='200' stroke='rgb(";
  string redsvg = to_string(redv);
  string greensvg = to_string(greenv);
  string bluesvg = to_string(bluev);
  string comma = ", ";
  string svgEnd = ")' stroke-width='50' stroke-linecap='butt'/>";

  string svgColor = svgStart + redsvg + comma + greensvg + comma + bluesvg + svgEnd;

  return svgColor;
}

string RGBvalues::svgRGB4(int redv, int greenv, int bluev){
  string svgStart = "<line x1='450' x2='450' y1='100' y2='200' stroke='rgb(";
  string redsvg = to_string(redv);
  string greensvg = to_string(greenv);
  string bluesvg = to_string(bluev);
  string comma = ", ";
  string svgEnd = ")' stroke-width='50' stroke-linecap='butt'/>";

  string svgColor = svgStart + redsvg + comma + greensvg + comma + bluesvg + svgEnd;

  return svgColor;
}

string RGBvalues::svgRGB5(int redv, int greenv, int bluev){
  string svgStart = "<line x1='550' x2='550' y1='100' y2='200' stroke='rgb(";
  string redsvg = to_string(redv);
  string greensvg = to_string(greenv);
  string bluesvg = to_string(bluev);
  string comma = ", ";
  string svgEnd = ")' stroke-width='50' stroke-linecap='butt'/>";

  string svgColor = svgStart + redsvg + comma + greensvg + comma + bluesvg + svgEnd;

  return svgColor;
}

string RGBvalues::svgBackground(){
  return "<line x1='0' x2='600' y1='150' y2='150' stroke='rgb(128,128,128)' stroke-width='300' stroke-linecap='butt'/>";
}
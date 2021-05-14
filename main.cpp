//Author: Tobias Huybers
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include "RGBvalues.h"
using namespace std;

//Prototypes
void checkValues( int & );
int randomColor(vector <int>);

int main() {

//Variables
int cred = 0;
int cgreen = 0;
int cblue = 0;
fstream reader;
char letter;
string line;
vector <int> list;
vector <int> list2;
vector <int> redlist;
vector <int> greenlist;
vector <int> bluelist;

RGBvalues colors;

cout << "Please enter the values of Red, Green , and Blue" << endl;

//Finding Color Red
cout << endl;
cout << "Enter value for red (0-255): ";
cin >> cred;
checkValues(cred);

//Finding Color Green
cout << endl;
cout << "Enter value for green (0-255): ";
cin >> cgreen;
checkValues(cgreen);

//Finding Color Blue
cout << endl;
cout << "Enter value for Blue (0-255): ";
cin >> cblue;
checkValues(cblue);

//Displays the Inputed Values
cout << endl;
cout << "Red: " << cred << endl;
cout << "Green: " << cgreen << endl;
cout << "Blue: " << cblue << endl;

int crg = cred - cgreen;
int crb = cred - cblue;
int cgr = cgreen - cred;
int cgb = cgreen - cblue;
int cbr = cblue - cred;
int cbg = cblue - cgreen;

//If they made Grey Colors
if (cred == cgreen && cgreen == cblue && cred == 255){
  cout << endl;
  cout << "The values you chose make white" << endl;
}
else if (cred == cgreen && cgreen == cblue && cred > 169 && cred < 255){
  cout << endl;
  cout << "The values you chose make light grey" << endl;
}
else if (cred == cgreen && cgreen == cblue && cred > 84 && cred <= 169){
  cout << endl;
  cout << "The values you chose make grey" << endl;
}
else if (cred == cgreen && cgreen == cblue && cred > 0 && cred <= 84){
  cout << endl;
  cout << "The values you chose make dark grey" << endl;
}
else if (cred == cgreen && cgreen == cblue && cred == 0){
  cout << endl;
  cout << "The values you chose make black" << endl;
}

//If they make Red
if (cgreen == cblue && cgreen < cred){
    cout << endl;
    cout << "The values you chose make red" << endl;
}
else if (cgb > 0 && cgb <= 50 && cgreen < cred){
    cout << endl;
    cout << "The values you chose make red-ish" << endl;
}
else if (cbg > 0 && cbg <= 50 && cblue < cred){
    cout << endl;
    cout << "The values you chose make red-ish" << endl;
}

//If they make Green
if (cred == cblue && cred < cgreen){
    cout << endl;
    cout << "The values you chose make green" << endl;
}
else if (crb > 0 && crb <= 50 && cred < cgreen){
    cout << endl;
    cout << "The values you chose make green-ish" << endl;
}
else if (cbr > 0 && cbr <= 50 && cblue < cgreen){
    cout << endl;
    cout << "The values you chose make green-ish" << endl;
}

//If they make Blue
if (cred == cgreen && cred < cblue){
    cout << endl;
    cout << "The values you chose make blue" << endl;
}
else if (crg > 0 && crg <= 50 && cred < cblue){
    cout << endl;
    cout << "The values you chose make blue-ish" << endl;
}
else if (cgr > 0 && cgr <= 50 && cgreen < cblue){
    cout << endl;
    cout << "The values you chose make blue-ish" << endl;
}

//Vector Storage of 80 random values between 0 and 255
do {
  list.push_back(rand() % 256);
  list2.push_back(rand() % 256);
} while (list.size() != 80);

//Vector Storage for 5 red values
do {
  int r = 0;

  redlist.push_back(randomColor(list));

  if (redlist[r] == cred && r == 0){

    do{
      redlist.pop_back();
      redlist.push_back(randomColor(list2));
    }while (redlist[r] <= cred + 30 && redlist[r] >= cred - 30);
  } else if (redlist[r] == redlist[r-1] && r > 0){
    do{
      redlist.pop_back();
      redlist.push_back(randomColor(list2));
    }while (redlist[r] <= redlist[r-1] + 30 && redlist[r] >= redlist[r-1] - 30);
  }else{
    r++;
  }
} while (redlist.size() != 5);

//Vector Storage for 5 green values
do {
  int g = 0;

  greenlist.push_back(randomColor(list));

  if (greenlist[g] == cgreen && g == 0){
    do{
      greenlist.pop_back();
      greenlist.push_back(randomColor(list2));
    }while (greenlist[g] <= cgreen + 30 && greenlist[g] >= cgreen - 30);
  } else if (greenlist[g] == greenlist[g-1] && g >= 0){
    do{
      greenlist.pop_back();
      greenlist.push_back(randomColor(list2));
    }while (greenlist[g] <= greenlist[g-1] + 30 && greenlist[g] >= greenlist[g-1] - 30);
  }else{
    g++;
  }
} while (greenlist.size() != 5);

//Vector Storage for 5 blue values
do {
  int b = 0;

  bluelist.push_back(randomColor(list));

  if (bluelist[b] == cblue && b == 0){
    do{
      bluelist.pop_back();
      bluelist.push_back(randomColor(list2));
    }while (bluelist[b] <= cblue + 30 && bluelist[b] >= cblue - 30);
  } else if (bluelist[b] == redlist[b-1] && b >= 0){
    do{
      bluelist.pop_back();
      bluelist.push_back(randomColor(list2));
    }while (bluelist[b] <= bluelist[b-1] + 30 && bluelist[b] >= bluelist[b-1] - 30);
  }else{
    b++;
  }
} while (bluelist.size() != 5);

cout << "\n" <<"Here are 5 other colors:" <<endl;
for (int i = 0; i < bluelist.size(); i++){
  cout << redlist[i] << ", " << greenlist[i] << ", " << bluelist[i] << "\n";
}

//Ask if it wants to be saved to a file

cout << endl;
cout << "Do you want to save the values and 5 other colors as an image to 'Colors.svg'? (Y or N)" << endl;
cin >> letter;

//Colors.svg file

reader.open("Colors.svg");
while (letter != 'N' || letter != 'n'){
  if (letter == 'Y' || letter == 'y'){
    reader << "<?xml version='1.0' standalone='no'?>" << "\n";
    reader << "<svg width='600' height='300' xmlns='http://www.w3.org/2000/svg' version='1.1'>" << "\n";
    //Neutral grey background
    reader << colors.svgBackground() << "\n";
    //Colored Rectangles
    reader << colors.svgRGB0(cred, cgreen, cblue) << "\n";
    reader << colors.svgRGB1(redlist[0],greenlist[0],bluelist[0]) << "\n";
    reader << colors.svgRGB2(redlist[1],greenlist[1],bluelist[1]) << "\n";
    reader << colors.svgRGB3(redlist[2],greenlist[2],bluelist[2]) << "\n";
    reader << colors.svgRGB4(redlist[3],greenlist[3],bluelist[3]) << "\n";
    reader << colors.svgRGB5(redlist[4],greenlist[4],bluelist[4]) << "\n";
    reader << "</svg>";

    cout << endl;
    cout << "!Image Saved!" << endl;
    cout << endl;

    reader.close();
    break;
  }
  else if (letter == 'N' || letter == 'n') {
    reader.close();
    break;
  } else {
    cout << "ERROR: Please input Y or N" << endl;
    cin >> letter;
  }
}


cout << "File 'Colors.svg' says:" << "\n" << endl;
reader.open("Colors.svg", ios::in);
if (reader.is_open() ){
  while (!reader.eof()){
  getline(reader,line);
  cout << line << endl;
  }
reader.close();
}
else {
  cout << "Could not open 'Colors.svg' " << endl;
}

  return 0;
}

//Function that checks if Red, Green, or Blue is between 0 and 255
void checkValues(int & number) {
  while (number <= 0 || number >= 0){
  if (number < 0 || number > 255){
    cout << endl;
    cout << "ERROR: value not between 0-255" << endl;
    cout << endl;
    cout << "Enter a value between (0-255): ";
    cin >> number;
  } else {
    break;
  }
  }
}

//Function that picks a random integer from a vector <int> storage
int randomColor(vector <int> file){
  int number = file[rand() % 50];

  return number;
}
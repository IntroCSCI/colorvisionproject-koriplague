//Author: Tobias Huybers
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
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
vector <int> redlist;
vector <int> greenlist;
vector <int> bluelist;

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

//Vector Storage of 50 random values between 0 and 255
do {
  list.push_back(rand() % 256);
} while (list.size() != 50);

//Vector Storage for 5 red values
do {
  redlist.push_back(randomColor(list));
} while (redlist.size() != 5);

//Vector Storage for 5 green values
do {
  greenlist.push_back(randomColor(list));
} while (greenlist.size() != 5);

//Vector Storage for 5 blue values
do {
  bluelist.push_back(randomColor(list));
} while (bluelist.size() != 5);

cout << "\n" <<"Here are 5 other colors:" <<endl;
for (int i = 0; i < bluelist.size(); i++){
  cout << redlist[i] << ", " << greenlist[i] << ", " << bluelist[i] << "\n";
}

//Ask if it wants to be saved to a file

cout << endl;
cout << "Do you want to save the values and 5 other colors to 'RGBvalues.txt'? (Y or N)" << endl;
cin >> letter;

reader.open("RGBvalues.txt");

while (letter != 'N' || letter != 'n'){
  if (letter == 'Y' || letter == 'y'){
    reader << "The Values You Picked" << "\n";
    reader << "R: " << cred << "\n";
    reader << "G: " << cgreen << "\n";
    reader << "B: " << cblue << "\n";
    reader << "\n" << "The 5 other Colors:" << "\n";
    reader << redlist[0] << ", " << greenlist[0] << ", " << bluelist[0] << "\n";
    reader << redlist[1] << ", " << greenlist[1] << ", " << bluelist[1] << "\n";
    reader << redlist[2] << ", " << greenlist[2] << ", " << bluelist[2] << "\n";
    reader << redlist[3] << ", " << greenlist[3] << ", " << bluelist[3] << "\n";
    reader << redlist[4] << ", " << greenlist[4] << ", " << bluelist[4];

    cout << endl;
    cout << "!File Saved!" << endl;
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

cout << "File 'RGBvalues.txt' says:" << "\n" << endl;
reader.open("RGBvalues.txt", ios::in);
if (reader.is_open() ){
  while (!reader.eof()){
  getline(reader,line);
  cout << line << endl;
  }
reader.close();
}
else {
  cout << "Could not open 'RGBvalues.txt' " << endl;
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
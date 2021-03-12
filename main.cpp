//Author: Tobias Huybers
#include <iostream>
using namespace std;

int main() {

int cred = 0;
int cgreen = 0;
int cblue = 0;

cout << "Please enter the values of Red, Green , and Blue" << endl;

//Finding Color Red
cout << endl;
cout << "Enter value for red (0-255): ";
cin >> cred;

while (cred <= 0 || cred >= 0){
  if (cred < 0 || cred > 255){
    cout << "ERROR: value not between 0-255" << endl;
    cout << endl;
    cout << "Enter value for red (0-255): ";
    cin >> cred;
  } else {
    break;
  }
}

//Finding Color Green
cout << endl;
cout << "Enter value for green (0-255): ";
cin >> cgreen;

while (cgreen <= 0 || cgreen >= 0){
  if (cgreen < 0 || cgreen > 255){
    cout << "ERROR: value not between 0-255" << endl;
    cout << endl;
    cout << "Enter value for green (0-255): ";
    cin >> cgreen;
  } else {
    break;
  }
}

//Finding Color Blue
cout << endl;
cout << "Enter value for Blue (0-255): ";
cin >> cblue;

while (cblue <= 0 || cblue >= 0){
  if (cblue < 0 || cblue > 255){
    cout << "ERROR: value not between 0-255" << endl;
    cout << endl;
    cout << "Enter value for blue (0-255): ";
    cin >> cblue;
  } else {
    break;
  }
}

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
  cout << "The color values make white" << endl;
}
else if (cred == cgreen && cgreen == cblue && cred > 169 && cred < 255){
  cout << endl;
  cout << "The color values make light grey" << endl;
}
else if (cred == cgreen && cgreen == cblue && cred > 84 && cred <= 169){
  cout << endl;
  cout << "The color values make grey" << endl;
}
else if (cred == cgreen && cgreen == cblue && cred > 0 && cred <= 84){
  cout << endl;
  cout << "The color values make dark grey" << endl;
}
else if (cred == cgreen && cgreen == cblue && cred == 0){
  cout << endl;
  cout << "The color values make black" << endl;
}

//If they make Red
if (cgreen == cblue && cgreen < cred){
    cout << endl;
    cout << "The color values make red" << endl;
}
else if (cgb > 0 && cgb <= 50 && cgreen < cred){
    cout << endl;
    cout << "The color values make red-ish" << endl;
}
else if (cbg > 0 && cbg <= 50 && cblue < cred){
    cout << endl;
    cout << "The color values make red-ish" << endl;
}

//If they make Green
if (cred == cblue && cred < cgreen){
    cout << endl;
    cout << "The color values make green" << endl;
}
else if (crb > 0 && crb <= 50 && cred < cgreen){
    cout << endl;
    cout << "The color values make green-ish" << endl;
}
else if (cbr > 0 && cbr <= 50 && cblue < cgreen){
    cout << endl;
    cout << "The color values make green-ish" << endl;
}

//If they make Blue
if (cred == cgreen && cred < cblue){
    cout << endl;
    cout << "The color values make blue" << endl;
}
else if (crg > 0 && crg <= 50 && cred < cblue){
    cout << endl;
    cout << "The color values make blue-ish" << endl;
}
else if (cgr > 0 && cgr <= 50 && cgreen < cblue){
    cout << endl;
    cout << "The color values make blue-ish" << endl;
}
  return 0;
}
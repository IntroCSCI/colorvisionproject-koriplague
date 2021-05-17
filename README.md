# To Be Visable or Not

## Description

05/12/21: The program asks what values of RGB and if the values are in a specific bound the program will state what kind of color it is, afterwards the code will state 5 more different RGB color values and save both the 5 new and inputed values into 'Colors.svg' where an image of the 6 colors will be displayed.

### v0.2 Updates

The program has slimmed the main code, while also adding the ability for the coder to make 5 other colors and save them to 'RGBvalues.txt'.

### v1.0 Updates

The program has a more slimmed main.cpp, while getting rid of the 'RGBvalues.txt' file to save the colors to, it now saves the 5 colors and the one the user made to 'Colors.svg' as an image.


## Developer

Tobias Huybers

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
 g++ -std=c++11 *.cpp -o cvp; ./cvp
Please enter the values of Red, Green , and Blue

Enter value for red (0-255): 55

Enter value for green (0-255): 255

Enter value for Blue (0-255): 100

Red: 55
Green: 255
Blue: 100

The values you chose make green-ish

Here are 5 other colors:
88, 13, 102
41, 115, 186
46, 198, 46
51, 81, 84
163, 178, 90

Do you want to save the values and 5 other colors as an image to 'Colors.svg'? (Y or N)
Y

!Image Saved!

File 'Colors.svg' says:

<?xml version='1.0' standalone='no'?>
<svg width='600' height='300' xmlns='http://www.w3.org/2000/svg' version='1.1'>
<line x1='0' x2='600' y1='150' y2='150' stroke='rgb(128,128,128)' stroke-width='300' stroke-linecap='butt'/>
<line x1='50' x2='50' y1='100' y2='200' stroke='rgb(55, 255, 100)' stroke-width='50' stroke-linecap='butt'/>
<line x1='150' x2='150' y1='100' y2='200' stroke='rgb(88, 13, 102)' stroke-width='50' stroke-linecap='butt'/>
<line x1='250' x2='250' y1='100' y2='200' stroke='rgb(41, 115, 186)' stroke-width='50' stroke-linecap='butt'/>
<line x1='350' x2='350' y1='100' y2='200' stroke='rgb(46, 198, 46)' stroke-width='50' stroke-linecap='butt'/>
<line x1='450' x2='450' y1='100' y2='200' stroke='rgb(51, 81, 84)' stroke-width='50' stroke-linecap='butt'/>
<line x1='550' x2='550' y1='100' y2='200' stroke='rgb(163, 178, 90)' stroke-width='50' stroke-linecap='butt'/>
</svg>

```

## C++ Guide

### Variables and Data Types

3/10/21: The only variables as of right now are only integer variables to hold the number value of what the user plugged in, however it also has integer values of the red, green, and blue values subtracted by each other to make upper and lower bounds for deciding what color the input is.

```
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
```
### Console Input and Output

03/10/21: The only console input the user plugs in is the values for either red, green, or blue. However the console outputs the promt for these values, the values you put in, and if the user's values are in the upper and lower bounds a special message that states about what the color is.

### Decisions

03/10/21: There are multiple decisions this code has to make, like first if the value inputed by the user is in the appropriate bounds and restates the prompt with an error message if they didn't input the right value. The code also makes the decision to add the special message if the values fit the strict statements to say the message. 

### Iteration

03/10/21: The Iteration added to the code is when the user plugs in a value for Red, Green, or Blue will loop if they input a value below or above the bounds placed for a RGB value; However the loop will break if they plug in an appropriate values.

### File Input and Output

03/12/21: After everything is finished, the program will ask if you want to save the values of Red, Blue and Green to a file. Answering yes will implement the values into it, saying no will show that the file is empty.

05/12/21: It's basically the same as when the File was a '.txt', but now the reader when you answer yes will impliment the values of all 6 colors and put them as seperate rectangles with their respective color with a neutral grey background.

```
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

```
### Arrays/Vectors

04/21/21: There are a couple instances where I used Vectors in the code. I mostly used them to help store the values of the 5 other colors. So the code generates 50 different values between 0 and 255 and it stores the numbers into a Vector. Then I have the code pick 5 different values from the 50 and store it into 1 of 3 Vectors for Red, Green, and Blue.

05/13/21: There is now 2 vectors that have code that generate 80 different values between 0 and 255. I did this to make sure the values would have a less likely chance of being the same.

### Functions

04/21/21: There are 2 functions that I have created for this code, one was to slim down the main code. It's a void return type function that check if the user put in a value between 0 and 255. The other is a integer return type function that picks one number form a list of 50 values and convert it from a vector value to a plain integer.

```
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
```
### Classes

05/12/21: There is 1 class, this class has a total of 7 different members in public and 3 in private, but there are really only 2 different members in public. 6 of the 7 public members display out a string that can only used by 'Colors.svg' that makes the different rectangles based on the 3 values put in, the reason why there are 6 is that each rectangle is in a different cordinate and also to make 'main.cpp' look cleaner. The other member in public is also a string, but it takes no other parameters, because it only makes the background of 'Colors.svg'.

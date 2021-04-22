# To Be Visable or Not

## Description

04/21/21: The program asks what values of RGB and if the values are in a specific bound the program will state what kind of color it is, afterwards the code will state 5 more different RGB color values and save both the 5 new and inputed values into 'RGBvalues.txt'.

### v0.2 Updates

The program has slimmed the main code, while also adding the ability for the coder to make 5 other colors and save them to 'RGBvalues.txt'.

### v1.0 Updates

*Coming soon*


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

The color values make green-ish

Here are 5 other colors:
251, 141, 255
46, 242, 90
93, 27, 13
201, 94, 99
74, 154, 49

Do you want to save to a File 'RGBvalues.md'? (Y or N)
Y

!File Saved!

File 'RGBvalues.txt' says:

The Values You Picked:
R: 55
G: 255
B: 100

The 5 other Colors:
251, 141, 255
46, 242, 90
93, 27, 13
201, 94, 99
74, 154, 49

```

## C++ Guide

### Variables and Data Types

3/10/21: The only variables as of right now are only integer variables to hold the number value of what the user plugged in, however it also has integer values of the red, green, and blue values subtracted by each other to make upper and lower bounds for deciding what color the input is.

### Console Input and Output

03/10/21: The only console input the user plugs in is the values for either red, green, or blue. However the console outputs the promt for these values, the values you put in, and if the user's values are in the upper and lower bounds a special message that states about what the color is.

### Decisions

03/10/21: There are multiple decisions this code has to make, like first if the value inputed by the user is in the appropriate bounds and restates the prompt with an error message if they didn't input the right value. The code also makes the decision to add the special message if the values fit the strict statements to say the message. 

### Iteration

03/10/21: The Iteration added to the code is when the user plugs in a value for Red, Green, or Blue will loop if they input a value below or above the bounds placed for a RGB value; However the loop will break if they plug in an appropriate values.

### File Input and Output

03/12/21: After everything is finished, the program will ask if you want to save the values of Red, Blue and Green to a file. Answering yes will implement the values into it, saying no will show that the file is empty.

### Arrays/Vectors

04/21/21: There are a couple instances where I used Vectors in the code. I mostly used them to help store the values of the 5 other colors. So the code generates 50 different values between 0 and 255 and it stores the numbers into a Vector. Then I have the code pick 5 different values from the 50 and store it into 1 of 3 Vectors for Red, Green, and Blue.

### Functions

04/21/21: There are 2 functions that I have created for this code, one was to slim down the main code. It's a void return type function that check if the user put in a value between 0 and 255. The other is a integer return type function that picks one number form a list of 50 values and convert it from a vector value to a plain integer.

### Classes

*Coming in version 1.0*

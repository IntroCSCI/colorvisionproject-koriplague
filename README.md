# To Be Visable or Not

## Description

03/10/21: The program asks what values of RGB and if the values are in a specific bound the program will state what kind of color it is.

### v0.2 Updates

*Coming soon*

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
Please enter the values of Red, Green , and Blue

Enter value for red (0-255): 55

Enter value for green (0-255): 255

Enter value for Blue (0-255): 100

Red: 55
Green: 255
Blue: 100

The color values make green-ish
```

## C++ Guide

### Variables and Data Types

3/10/21: The only variables as of right now are only integer variables to hold the number value of what the user plugged in, however it also has integer values of the red, green, and blue values subtracted by each other to make upper and lower bounds for deciding what color the input is.

### Console Input and Output

3/10/21: The only console input the user plugs in is the values for either red, green, or blue. However the console outputs the promt for these values, the values you put in, and if the user's values are in the upper and lower bounds a special message that states about what the color is.

### Decisions

3/10/21: There are multiple decisions this code has to make, like first if the value inputed by the user is in the appropriate bounds and restates the prompt with an error message if they didn't input the right value. The code also makes the decision to add the special message if the values fit the strict statements to say the message. 

### Iteration

3/10/21: The Iteration added to the code is when the user plugs in a value for Red, Green, or Blue will loop if they input a value below or above the bounds placed for a RGB value; However the loop will break if they plug in an appropriate values.

### File Input and Output

3/12/21: After everything is finished, the program will ask if you want to save the values of Red, Blue and Green to a file. Answering yes will implement the values into it, saying no will show that the file is empty.

### Arrays/Vectors

*Coming in version 0.2*

### Functions

*Coming in version 0.2*

### Classes

*Coming in version 1.0*

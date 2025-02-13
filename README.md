Program name: convert.cpp
Date written: 12th February, 2025
Problem statement: This C++ program asks the user for the number of tons and prints out
the equivalent in pounds,ounces,kilograms,and grams.The program also

prints out the conversion factors used.

Input: The number of tons
Output: The number of tons converted to pounds,ounces,kilograms and grams, as well as the
conversion factors used.
Main algorithm:
Prompt the user for number of tons

convert the number of tons into required amounts
new units equals number of tons multiplied by conversion factor
print out the converted amounts
print out the conversion factors

Major variables:
numberOfTons - the number of tons

TONS_TO_POUNDS - the conversion factor to pounds
TONS_TO_OUNCES - the conversion factor to ounces
TONS_TO_KILOGRAMS - the conversion factor to kilograms
TONS_TO_GRAMS - the conversion factor to grams
pounds - the equivalent amount in pounds
ounces - the euivalent amount in ounces
kilograms - the euivalent amount in kilograms
grams - the euivalent amount in grams

Assumptions:- a ton means 2000 pounds
a ton means 32000 ounces

a ton means 907.185 kilograms
a ton means 907185 grams

Program limitations:
- hardcoded for these four conversions only

- almost no formatting of output is performed

## check_anagrams
- logic was quite easy
- what i have learned how to use array as map for string
- how to work wiht string asccii and the 'a' subtraction

## check_palindrome
- the basic code of palindrome
- i did impkemented first whihc was wrokign for the ony same caps
- later i have learned to use trhe tolower to make it work for any case
- i later implemented the recursivce code to practicve my recursion skill
- Added implementations for checking palindromes in arrays (both iterative and recursive)
- Added alternative implementation for string palindrome checking

## first_non_repeating_character
- its anotehr code to get the first char non repeating char

## counting_valleys
- Problem involves tracking altitude changes during a hike
- A valley is defined as a sequence of steps below sea level, starting with a 'D' and ending with a 'U'
- Solution approach:
  - Track current altitude (0 = sea level)
  - For each step:
    - 'U' increases altitude
    - 'D' decreases altitude
  - Only increment valley count when returning to sea level (altitude = 0) after being below it
- Time complexity: O(n) where n is the number of steps
- Space complexity: O(1) - only using a few variables

## string_to_integer_atoi
- Implementation of the classic ATOI function to convert strings to integers
- Two approaches implemented:
  1. Iterative approach that processes the string character by character
  2. Recursive approach that breaks down the problem into smaller subproblems
- Key considerations:
  - Handling leading whitespace
  - Determining the sign of the number (+ or -)
  - Converting valid digit characters to numeric values
  - Stopping conversion when a non-digit character is encountered
- This is a common interview problem that tests string manipulation and edge case handling

## string_to_integer_atoi_recursive
- Pure recursive implementation of the ATOI function
- Uses multiple parameters to maintain state through recursive calls
- Handles the same key considerations as the iterative version:
  - Leading whitespace
  - Sign detection
  - Digit conversion
  - Overflow checking
  - Stopping at non-digit characters
- Demonstrates advanced recursion techniques with multiple state variables
- While less efficient in terms of space complexity due to the call stack, it's an elegant solution that breaks the problem into smaller subproblems
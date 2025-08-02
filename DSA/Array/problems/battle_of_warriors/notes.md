# Battle of Warriors

## Problem Statement
There is a long line of warriors standing in a row. Each warrior belongs to a clan, represented by a number in an array warriors[]. Two warriors from different clans duel each other and both fall. But if two warriors from the same clan meet, they unite and get stronger.

Your task is to determine the clan that will survive in the end after all possible duels.

You may assume that there is always one clan that has more than half the total number of warriors.

You must not use extra space (i.e., constant space).

## Approach
This is a custom implementation of the Boyer-Moore Majority Vote Algorithm applied to a story-based problem:
1. Initialize a counter to 0 and a candidate clan to 0
2. Iterate through the warriors array:
   - If counter is 0, set the current warrior's clan as the new candidate
   - If current warrior's clan equals candidate clan, increment counter (they unite)
   - Otherwise, decrement counter (they duel and both fall)
3. Return the candidate clan

The algorithm works because the majority clan appears more than n/2 times, so even if all other clans duel with members of the majority clan, there will still be members of the majority clan remaining.

## Time Complexity
O(n) - Single pass through the array

## Space Complexity
O(1) - Only using constant extra space

## Known Issues
- The problem description in comments has several spelling and grammatical errors
- Variable names could be more descriptive (strongCamp could be survivingClan)
- The code includes informal comments that should be removed or made more professional
- No validation that the input actually has a majority element (though the problem states to assume it does)

## LeetCode Link
This is a custom variation of the [Majority Element](https://leetcode.com/problems/majority-element/) problem.
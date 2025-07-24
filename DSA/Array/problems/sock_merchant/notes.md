# Sock Merchant Problem

## Problem Description
There is a large pile of socks that must be paired by color. Given an array of integers representing the color of each sock, determine how many pairs of socks with matching colors there are.

## Solution Approach
This problem uses a frequency map to count occurrences of each sock color, then calculates the number of pairs by dividing each count by 2 and summing the results.

## Implementation Details
- Uses a map to store sock color frequencies
- Iterates through the frequency map and adds floor(count/2) to the total pairs

## Known Issues
None - solution appears correct.
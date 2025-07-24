# Migratory Birds Problem

## Problem Description
Given an array of bird sightings where every element represents a bird type id, determine the id of the most frequently sighted type. If more than 1 type has been spotted that maximum amount, return the smallest of their ids.

## Solution Approach
This problem uses a frequency map to count occurrences of each bird type, then iterates through the array to find the bird type with the highest frequency. In case of a tie, it returns the smallest id.

## Implementation Details
- Uses a map to store bird type frequencies
- Tracks maximum frequency and corresponding bird id
- Handles tie-breaking by selecting the smallest id

## Known Issues
None - solution appears correct.
#include <iostream>
#include <vector>
#include <algorithm>
/*
Problem Explanation
The Activity Selection Problem involves selecting the maximum number of activities that a single person (or resource) can perform, given a set of activities with their start and end times. The catch is that the activities must not overlap—meaning that the start time of one activity must be greater than or equal to the end time of the previously selected activity. This is a classic example of a problem solved using a greedy algorithm.
Key Idea

You're given a list of activities, each with a start time and an end time.
Your goal is to pick as many activities as possible without any time conflicts.
The greedy strategy is to always choose the activity that ends earliest, as this leaves the most time available for subsequent activities.

Example
Consider these activities:

Activity 1: Start = 1, End = 4
Activity 2: Start = 3, End = 5
Activity 3: Start = 5, End = 7
Activity 4: Start = 6, End = 10

If we sort them by end time and pick greedily:

Pick Activity 1 (ends at 4).
Skip Activity 2 (starts at 3, overlaps with 4).
Pick Activity 3 (starts at 5, ends at 7).
Skip Activity 4 (starts at 6, overlaps with 7).

Selected activities: 1 and 3, for a total of 2 activities.

Constraints

Number of Activities (n): Typically ranges from 1 to 10^4 or 10^5, so your solution should be efficient (e.g., O(n log n) is acceptable due to sorting).
Start and End Times: Non-negative integers (e.g., 0 ≤ start < end ≤ 10^9).
Input Order: Activities are not guaranteed to be sorted, so you'll need to sort them in your implementation.


Input Format

First Line: An integer n, the number of activities.
Next n Lines: Two integers per line, representing the start time and end time of each activity.

Example Input
text4
1 4
3 5
5 7
6 10
Expected Output
A single integer: the maximum number of non-overlapping activities (e.g., 2 for the example above).

Approach to Solve
Here's how you can solve this problem:

Sort by End Time: Arrange the activities in ascending order of their end times. This ensures you can pick the earliest-finishing activity first.
Greedy Selection:

Select the first activity (it ends earliest).
For each subsequent activity, check if its start time is ≥ the end time of the last selected activity. If yes, select it and update the last end time.


Count Activities: Keep track of how many activities you select.

This approach runs in O(n log n) time due to the sorting step, with the selection process being O(n).

*/

// Define a structure to hold activity start and end times
struct Activity {
    int start;
    int end;
};

// Comparator function to sort activities by end time
bool compare(const Activity& a, const Activity& b) {
    return a.end < b.end;
}

// Function to select maximum non-overlapping activities
int selectActivities(std::vector<Activity>& activities) {
    if (activities.empty()) return 0;

    // Step 1: Sort activities by end time
    std::sort(activities.begin(), activities.end(), compare);

    // Step 2: Implement greedy selection logic here
    // Hint: Start with the first activity and iterate through the rest,
    // selecting activities that don't overlap with the last selected one
    
    
    int lastEnd=-1;
    int numActivities=0;
    for(int i=0;i<activities.size();i++){
        if(lastEnd<=activities[i].start){
            numActivities++;
            lastEnd=activities[i].end;
        }
        
    }
    
    
    return numActivities; 
}

int main() {
    int n;
    std::cout << "Enter the number of activities: ";
    std::cin >> n;

    std::vector<Activity> activities(n);
    std::cout << "Enter the start and end times for each activity:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> activities[i].start >> activities[i].end;
    }

    int maxActivities = selectActivities(activities);
    std::cout << "Maximum number of non-overlapping activities: " << maxActivities << std::endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
/*
Problem Statement: Fractional Knapsack Problem
Given a set of items, each with a weight and a value, and a knapsack with a limited capacity, maximize the total value of items included in the knapsack. You can include fractions of items to achieve this maximum value.
Explanation

Objective: Fill a knapsack of capacity W with items (or fractions of items) to maximize the total value.
Key Feature: Unlike the 0/1 Knapsack Problem, you can take fractional parts of items, making a greedy approach optimal.
Input:

Number of items n.
For each item: a value v_i and a weight w_i.
Knapsack capacity W.


Output: A single double/float representing the maximum total value achievable, rounded to a reasonable precision (e.g., 2 decimal places).
Constraints:

1 ≤ n ≤ 10^5 (number of items).
1 ≤ v_i, w_i ≤ 10^9 (value and weight of each item).
1 ≤ W ≤ 10^9 (knapsack capacity).


Hint

Compute the value-to-weight ratio (value/weight) for each item.
Prioritize items with higher ratios.
Handle fractions when the remaining capacity is less than an item's weight.

OUTPUT 
Discussion

Input Example:
text3 50
60 10
100 20
120 30

3 items, capacity 50.
Item 1: value = 60, weight = 10.
Item 2: value = 100, weight = 20.
Item 3: value = 120, weight = 30.


Expected Output: 240.00 (take all of items 1 and 2, and 2/3 of item 3).
Challenge: How will you sort items by value-to-weight ratio? What happens when only a fraction of an item fits?

*/

struct Item {
    int value;
    int weight;
};

bool compare(const Item& a,const Item&b){
    // Fixed the comparison to use double division for accurate ratio comparison
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractionalKnapsack(int W, std::vector<Item>& items) {
    // sort the item list based on the fractional value (value/weight ratio)
    sort(items.begin(),items.end(),compare);
    int remWeight = W;
    double val = 0.0;  // Changed to double for fractional values
    
    // iterate over the sorted array and take the items
    for(int i=0;i<items.size();i++){
        Item item = items[i];
        if(item.weight <= remWeight){
            // Take the whole item
            val += item.value;
            remWeight -= item.weight;
        } else {
            // Take fraction of the item
            val += item.value * ((double)remWeight / item.weight);
            break;
        }
    }
    return val;
}

int main() {
    int n, W;
    std::cout << "Enter number of items and knapsack capacity: ";
    std::cin >> n >> W;
    std::vector<Item> items(n);
    std::cout << "Enter value and weight for each item:\n";
    for (int i = 0; i < n; ++i) {
        std::cin >> items[i].value >> items[i].weight;
    }
    double maxValue = fractionalKnapsack(W, items);
    printf("Maximum value: %.2f\n", maxValue);
    return 0;
}
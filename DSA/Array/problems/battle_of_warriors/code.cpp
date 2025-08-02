//anothet custrom boyer moorie
#include <iostream>
#include <vector>
using namespace std;


//this is a customer version of Boyer-Moore:

//QUESTION
/*
🧨 Custom Duel Problem: Battle of Warriors
🏹 Problem Statement:
There is a long line of warriors standing in a row. Each warrior belongs to a clan, represented by a number in an array warriors[]. Two warriors from different clans duel each other and both fall. But if two warriors from the same clan meet, they unite and get stronger.

Your task is to determine the clan that will survive in the end after all possible duels.

You may assume that there is always one clan that has more than half the total number of warriors.

You must not use extra space (i.e., constant space).

📥 Input:
A vector warriors of integers (clan numbers), where each element represents the clan of the warrior at that position.

📤 Output:
Return the clan number that survives in the end (i.e., the majority clan).

🧠 Example:
cpp
Copy
Edit
Input: warriors = [3, 3, 4, 2, 4, 4, 2, 4, 4]
Output: 4
Explanation:

Clan 4 appears 5 times out of 9 → majority.

After pairwise duels, 4 survives as the only remaining dominant clan.

⛔ Constraints:
1 <= warriors.length <= 10^5

Clan values are integers.

*/


//now outline the the idea 
//we have  lot of warriors 
//the warrios array contians the all the various warrious from differnt clas
// hte aray store the clan id
//now if dual happens between two both falls
//now we need to find out whihc clas will have more power
//here more power means if every warrior is occupied with eachj other 
//there will be some warrior leftr who not in dual 
///we need to find out whic clan will be on top


class Solution {
public:
    int survivingClan(vector<int>& warriors) {
        int count=0;
        int strongCamp=0;
        
        for(int i=0;i<warriors.size();i++){
            int warriorCamp=warriors[i];
            
            //if the count becomnes zero 
            //its kiund oif a reset 
            //we stat with the current camid
            
            if(count==0){
                strongCamp=warriorCamp;
            }
            //now if the current camp is same as the strongest warrior
            //we add the count 
            //if someelse camp we reduce
            //so basicallu increase me we have added one more manppower to the team
            //if we got warrior frmm anotehr  camp we ned to put down our strongest camp one membnet so that he can tackle that opppoisiton
            
            if(warriorCamp==strongCamp)
            {
                count++;
            }else{
                count--;
            }
            
        }
        
        return strongCamp;
    }
};


int main() {
    Solution sol;

    vector<int> warriors = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    cout << "Surviving Clan: " << sol.survivingClan(warriors) << endl;

    return 0;
}
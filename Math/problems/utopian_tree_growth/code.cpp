// This was fun — I tracked growth by checking if it’s an odd or even cycle.
// Odd → double, Even → add 1

int utopianTree(int numCycles){
    int treeGrowth = 1;
    for(int i = 1; i <= numCycles; i++){
        if (i % 2 == 1){
            treeGrowth *= 2;
        } else {
            treeGrowth += 1;
        }
    }
    return treeGrowth;
}

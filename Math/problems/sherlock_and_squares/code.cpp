// First I understood that perfect squares are like n*n where n is an integer.
// So I tried brute-force by checking each number using sqrt and floor.

int perfectSquare(int a,int b){
    int count=0;
    for(int i=a;i<=b;i++){
        if(sqrt(i)==floor(sqrt(i))) count++;
    }
    return count;
}

// Then I realized we can use math directly:
// Total perfect squares from ceil(sqrt(a)) to floor(sqrt(b)).

int perfectSquare1(int a,int b){
    return floor(sqrt(b)) - ceil(sqrt(a)) + 1;
}

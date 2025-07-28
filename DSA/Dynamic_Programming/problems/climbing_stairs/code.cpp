// Climbing Stairs problem
// You are climbing a staircase. It takes n steps to reach the top.
// You can either climb 1 or 2 steps at a time.
// How many distinct ways can you climb to the top?

// Recursive solution with counting
int nthStare(int i, vector<int>& arr, int& count) {
    if (i == 0 || i == 1) {
        count++;
        return 1;
    }
    return nthStare(i-1, arr, count) + nthStare(i-2, arr, count);
}

// Alternative recursive solution with void return
void nthStare(int i, vector<int>& arr, int& count) {
    if (i == 0 || i == 1) {
        count++;
        return;
    }
    nthStare(i-1, arr, count);
    nthStare(i-2, arr, count);
    return;
}
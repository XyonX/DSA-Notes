// I really liked this one as it shows how cleanly we can use math to avoid loops.
// I started by forming an equation using n jumps:
// x1 + v1*n = x2 + v2*n
// Rearranged it: (v1 - v2)*n = x2 - x1
// So, n = (x2 - x1) / (v1 - v2)
// Since n is a number of jumps, it must be a non-negative integer.
// So (x2 - x1) % (v1 - v2) must be 0 and result should be ≥ 0.

string kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) return (x1 == x2) ? "YES" : "NO";
    
    int diff = x2 - x1;
    int speedDiff = v1 - v2;

    if ((diff % speedDiff == 0) && ((diff / speedDiff) >= 0))
        return "YES";
    
    return "NO";
}

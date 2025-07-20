// Simple counting problem. I just counted how many came on or before 0.

bool angryProfessor(int minStudent, vector<int> arrivalTimes) {
    int numOnTime = 0;

    for (int i = 0; i < arrivalTimes.size(); i++) {
        if (arrivalTimes[i] <= 0) {
            numOnTime++;
        }
    }

    return numOnTime < minStudent;
}

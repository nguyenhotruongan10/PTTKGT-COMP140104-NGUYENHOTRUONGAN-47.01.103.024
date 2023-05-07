#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Job {
    int start, end, profit;
};

bool cmp(Job a, Job b) {
    return a.end < b.end;
}

int jobScheduling(vector<Job>& jobs) {
    sort(jobs.begin(), jobs.end(), cmp);

    int n = jobs.size();
    vector<int> dp(n, 0);

    dp[0] = jobs[0].profit;

    for (int i = 1; i < n; i++) {
        int currProfit = jobs[i].profit;
        int latestJobIdx = -1;
        for (int j = i - 1; j >= 0; j--) {
            if (jobs[j].end <= jobs[i].start) {
                latestJobIdx = j;
                break;
            }
        }
        if (latestJobIdx != -1) {
            currProfit += dp[latestJobIdx];
        }
        dp[i] = max(currProfit, dp[i - 1]);
    }

    return dp[n - 1];
}

int main() {
    vector<Job> jobs = { {1, 3, 5}, {2, 5, 6}, {4, 6, 5}, {6, 7, 4}, {5, 8, 11}, {7, 9, 2} };
    int maxProfit = jobScheduling(jobs);
    cout << "Max profit: " << maxProfit << endl;

    return 0;
}

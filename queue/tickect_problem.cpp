#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        int time1 = 0, time2 = 0;

        for (int i = 0; i <= k; i++) {
            time1 += min(tickets[k], tickets[i]);
        }

        for (int i = k + 1; i < tickets.size(); i++) {
            time2 += min(tickets[k] - 1, tickets[i]);
        }

        time = time1 + time2;
        return time;
    }
};

int main() {
    int k = 2;
    vector<int> tickets = {1, 5, 2, 3, 1};

    Solution solution;
    int result = solution.timeRequiredToBuy(tickets, k);
    
    cout << "Time required to buy the ticket: " << result << endl;

    return 0;
}

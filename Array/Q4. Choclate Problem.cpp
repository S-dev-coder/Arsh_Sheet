Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 

Each student gets one packet.
The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.


// optimal solution 

#include <vector>
#include <algorithm>

class Solution {
public:
    int distributeChocolates(vector<int>& packets, int m) {
        int n = packets.size();
        if (n < m) {
            return -1; // Not enough packets to distribute
        }
        
        sort(packets.begin(), packets.end());
        
        int minDifference = packets[m-1] - packets[0]; // Initialize with the difference between first and last packets in the first window
        for (int i = 1; i + m - 1 < n; i++) {
            int difference = packets[i + m - 1] - packets[i];
            minDifference = min(minDifference, difference);
        }
        
        return minDifference;
    }
};



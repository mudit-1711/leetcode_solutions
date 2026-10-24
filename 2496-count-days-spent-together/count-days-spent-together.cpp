class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice,
                          string arriveBob, string leaveBob) {
        vector<int> a;
        vector<vector<int>> v, w;
        a.push_back(stoi(arriveAlice.substr(0, 2)));
        a.push_back(stoi(arriveAlice.substr(3, 2)));
        v.push_back(a);
        a.clear();
        a.push_back(stoi(leaveAlice.substr(0, 2)));
        a.push_back(stoi(leaveAlice.substr(3, 2)));
        v.push_back(a);
        a.clear();
        a.push_back(stoi(arriveBob.substr(0, 2)));
        a.push_back(stoi(arriveBob.substr(3, 2)));
        w.push_back(a);
        a.clear();
        a.push_back(stoi(leaveBob.substr(0, 2)));
        a.push_back(stoi(leaveBob.substr(3, 2)));
        w.push_back(a);
        a.clear();
        int ans = 0;
        int startMonth = max(v[0][0], w[0][0]);
        int startDay;
        if (v[0][0] == w[0][0])
            startDay = max(v[0][1], w[0][1]);
        else if (v[0][0] > w[0][0])
            startDay = v[0][1];
        else
            startDay = w[0][1];
        int endMonth = min(v[1][0], w[1][0]);
        int endDay;
        if (v[1][0] == w[1][0])
            endDay = min(v[1][1], w[1][1]);
        else if (v[1][0] < w[1][0])
            endDay = v[1][1];
        else
            endDay = w[1][1];
        vector<int> monthDays = {31, 28, 31, 30, 31, 30,
                                 31, 31, 30, 31, 30, 31};
        int start = startDay;
        for (int i = 0; i < startMonth - 1; i++)
            start += monthDays[i];
        int end = endDay;
        for (int i = 0; i < endMonth - 1; i++)
            end += monthDays[i];
        if (start <= end)
            ans = end - start + 1;
        return ans;
    }
};
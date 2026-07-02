class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        vector<double> ans;
        int i,j;
        auto a = sides[0];
        auto b = sides[1];
        auto c = sides[2];
         if (a + b <= c || b + c <= a || a + c <= b) {
            return {}; 
        }
        double A = acos((b*b + c*c - a*a) / (2.0 * b * c));
        double B = acos((a*a + c*c - b*b) / (2.0 * a * c));
        double C = acos((a*a + b*b - c*c) / (2.0 * a * b));
        auto p = acos(-1);
        ans.push_back(A*(180/p));
        ans.push_back(B*(180/p));
        ans.push_back(C*(180/p));
        sort(ans.begin(),ans.end());
        return ans;
    }
};
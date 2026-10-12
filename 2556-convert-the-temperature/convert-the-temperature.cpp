class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> answer;
        double a = celsius+273.15;
        answer.push_back(a);
        double b = celsius*1.8+(32);
        answer.push_back(b);
        return answer;
    }
};
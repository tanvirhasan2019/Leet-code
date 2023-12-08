class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int mv = 0;
        std::sort(seats.begin(), seats.end());
        std::sort(students.begin(), students.end());
        for(int i=0; i < seats.size(); i++) mv += std::abs(seats[i] - students[i]);
        return mv;
    }
};

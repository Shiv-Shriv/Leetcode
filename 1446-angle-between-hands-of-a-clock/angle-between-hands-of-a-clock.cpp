class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourangle = hour*5 + (double)minutes/12;

        double angle = 0;

        angle = (abs(hourangle-minutes))*6;

        if(angle>180){
            angle = 360-angle;
        }

        return angle;
    }
};
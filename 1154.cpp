class Solution {
public:
    int dayOfYear(string date) {
        int monthArray[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
        int year = stoi(date.substr(0, 4)); 
        int month = stoi(date.substr(5, 2));
        int day = stoi(date.substr(8, 2));       
        int leap = ((((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) == true) && month > 2) ? 1 : 0;
        return leap + day + monthArray[month];
    }
};

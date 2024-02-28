#include <iostream>

using namespace std;

class Time{
  public:
    Time(int H, int M, int S){
      hour = H;
      minute = M;
      second = S;
    }
    void putTime(int H, int M, int S){
      hour += H;
      minute += M;
      second += S;
      updateTime();
    }
    void printTime(){
      cout << hour << ":" << minute << ":" << second;
    }
  private:
    int hour, minute, second;
    void updateTime(){
      if(second > 60){
        minute += int(second/60);
        second %= 60;
      }
      if(minute > 60){
        hour += int(minute/60);
        minute %= 60;
      }
    }
};

int main (int argc, char *argv[]) {
  Time t1(25,59,23);
  t1.printTime();
  t1.putTime(2,5,59);
  cout << endl;
  t1.printTime();
  return 0;
}

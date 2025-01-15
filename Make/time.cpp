#include "Time.hpp"

int main() {
    Time current(5, 30, 30.0);
    Time additional(0, 30, 0.0);
    Time completed = current.add_time(additional);
    completed.print_time();
   
    Time cur_time(6, 30, 50.0);
    Time cook(1, 30, 50.0);
    Time completed_time= cur_time.add_time(cook);
    completed_time.print_time();

}

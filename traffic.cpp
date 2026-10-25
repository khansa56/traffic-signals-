// Traffic Signal Simulation in C++
// Simulates a 4-way traffic signal cycling through Red -> Green -> Yellow

#include <iostream>
#include <thread>
#include <chrono>
#include <string>

using namespace std;

class TrafficSignal {
private:
    string name;
    int redTime, greenTime, yellowTime;

public:
    TrafficSignal(string signalName, int red, int green, int yellow)
        : name(signalName), redTime(red), greenTime(green), yellowTime(yellow) {}

    void showState(const string& state, int duration) {
        cout << "[" << name << "] Signal is " << state
             << " for " << duration << " second(s)" << endl;
        this_thread::sleep_for(chrono::milliseconds(300)); // shortened for demo
    }

    void runCycle(int cycles) {
        for (int i = 0; i < cycles; i++) {
            cout << "\n--- Cycle " << (i + 1) << " ---" << endl;
            showState("RED", redTime);
            showState("GREEN", greenTime);
            showState("YELLOW", yellowTime);
        }
    }
};

int main() {
    cout << "=====================================" << endl;
    cout << "   Traffic Signal Simulation (C++)   " << endl;
    cout << "=====================================" << endl;

    TrafficSignal signalA("Signal A", 5, 4, 2);
    TrafficSignal signalB("Signal B", 4, 5, 2);

    int cycles;
    cout << "\nEnter number of cycles to simulate: ";
    cin >> cycles;

    cout << "\nRunning simulation for Signal A:" << endl;
    signalA.runCycle(cycles);

    cout << "\nRunning simulation for Signal B:" << endl;
    signalB.runCycle(cycles);

    cout << "\nSimulation complete." << endl;
    return 0;
}

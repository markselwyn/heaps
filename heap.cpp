#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to display the heap
void displayHeap(const vector<int>& heap, const string& heapType) {
    if (heap.empty()) {
        cout << "\nThe " << heapType << " is empty!\n";
        return;
    }
    cout << "\n" << heapType << ": ";
    for (int value : heap) {
        cout << value << " ";
    }
    cout << "\n";
}

// Main function
int main() {
    vector<int> heap; // Store the heap
    int choice, speed, count;

    cout << "Speed Tracker's Typhoon Challenge\n";

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Add multiple typhoon speed\n";
        cout << "2. Display current heap\n";
        cout << "3. Convert to Min-Heap\n";
        cout << "4. Convert to Max-Heap\n";
        cout << "5. Exit\n" << "\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1: { // Add multiple typhoons
                cout << "How many typhoons would you like to add? ";
                cin >> count;

                for (int i = 1; i <=count; ++i) {
                         cout << "Enter the speeds of the typhoon " << i << ": " ;
                    cin >> speed;
                    heap.push_back(speed);
                    push_heap(heap.begin(), heap.end());
                }
                cout << "All typhoons added successfully!\n";
                break;
            }


            case 2: // Display the current heap
                displayHeap(heap, "Current Heap");
                break;

            case 3: { // Convert to Min-Heap
                sort(heap.begin(), heap.end());
                displayHeap(heap, "Min-Heap");
                break;
            }

            case 4: { // Convert to Max-Heap
                make_heap(heap.begin(), heap.end());
                displayHeap(heap, "Max-Heap");
                break;
            }

            case 5: // Exit
                cout << "Thank you for using Speed Tracker's Typhoon Challenge!\n";
                return 0;

            default: // Invalid input
                cout << "Invalid choice! Please try again.\n";
        }
    }
}

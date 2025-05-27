#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to merge overlapping intervals
vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    // Handle edge case: empty input
    if (intervals.empty()) {
        return {};
    }
    
    // Step 1: Sort intervals by their start times
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];  // Compare start times
    });
    
    // Step 2: Initialize result with the first interval
    vector<vector<int>> merged;
    merged.push_back(intervals[0]);
    
    // Step 3: Iterate through remaining intervals
    for (int i = 1; i < intervals.size(); i++) {
        vector<int>& lastInterval = merged.back();  // Reference to last merged interval
        vector<int>& currentInterval = intervals[i]; // Current interval being processed
        
        // Check if current interval overlaps with the last merged interval
        if (currentInterval[0] <= lastInterval[1]) {
            // Overlapping: merge by updating the end time
            lastInterval[1] = max(lastInterval[1], currentInterval[1]);
        } else {
            // Non-overlapping: add current interval as new interval
            merged.push_back(currentInterval);
        }
    }
    
    return merged;
}

// Helper function to print intervals
void printIntervals(const vector<vector<int>>& intervals, const string& label) {
    cout << label << ": [";
    for (int i = 0; i < intervals.size(); i++) {
        cout << "[" << intervals[i][0] << "," << intervals[i][1] << "]";
        if (i < intervals.size() - 1) {
            cout << ",";
        }
    }
    cout << "]" << endl;
}

// Test function with step-by-step explanation
void demonstrateExample() {
    cout << "=== Step-by-Step Demonstration ===" << endl;
    
    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {15,18}};
    
    cout << "Original intervals: [[1,3],[2,6],[8,10],[15,18]]" << endl;
    
    // Step 1: Sort (already sorted in this case)
    cout << "\nStep 1: Sort by start times" << endl;
    cout << "After sorting: [[1,3],[2,6],[8,10],[15,18]] (already sorted)" << endl;
    
    // Step 2: Process each interval
    cout << "\nStep 2: Process intervals one by one" << endl;
    
    cout << "- Start with first interval: [1,3]" << endl;
    cout << "  Result: [[1,3]]" << endl;
    
    cout << "- Process [2,6]: start=2 <= last_end=3? YES (overlapping)" << endl;
    cout << "  Merge: end = max(3,6) = 6" << endl;
    cout << "  Result: [[1,6]]" << endl;
    
    cout << "- Process [8,10]: start=8 <= last_end=6? NO (non-overlapping)" << endl;
    cout << "  Add new interval" << endl;
    cout << "  Result: [[1,6],[8,10]]" << endl;
    
    cout << "- Process [15,18]: start=15 <= last_end=10? NO (non-overlapping)" << endl;
    cout << "  Add new interval" << endl;
    cout << "  Result: [[1,6],[8,10],[15,18]]" << endl;
    
    vector<vector<int>> result = mergeIntervals(intervals);
    cout << "\nFinal Result: ";
    printIntervals(result, "");
}

int main() {
    cout << "=== Merge Intervals Problem ===" << endl;
    
    // Test Case 1: Basic example
    cout << "\nTest Case 1:" << endl;
    vector<vector<int>> intervals1 = {{1,3}, {2,6}, {8,10}, {15,18}};
    printIntervals(intervals1, "Input");
    vector<vector<int>> result1 = mergeIntervals(intervals1);
    printIntervals(result1, "Output");
    
    // Test Case 2: All overlapping
    cout << "\nTest Case 2 (All overlapping):" << endl;
    vector<vector<int>> intervals2 = {{1,4}, {4,5}};
    printIntervals(intervals2, "Input");
    vector<vector<int>> result2 = mergeIntervals(intervals2);
    printIntervals(result2, "Output");
    
    // Test Case 3: Complex overlapping
    cout << "\nTest Case 3 (Complex overlapping):" << endl;
    vector<vector<int>> intervals3 = {{1,4}, {2,3}, {4,6}, {5,7}, {8,9}};
    printIntervals(intervals3, "Input");
    vector<vector<int>> result3 = mergeIntervals(intervals3);
    printIntervals(result3, "Output");
    
    // Test Case 4: Unsorted input
    cout << "\nTest Case 4 (Unsorted input):" << endl;
    vector<vector<int>> intervals4 = {{2,6}, {1,3}, {15,18}, {8,10}};
    printIntervals(intervals4, "Input");
    vector<vector<int>> result4 = mergeIntervals(intervals4);
    printIntervals(result4, "Output");
    
    // Test Case 5: Single interval
    cout << "\nTest Case 5 (Single interval):" << endl;
    vector<vector<int>> intervals5 = {{1,4}};
    printIntervals(intervals5, "Input");
    vector<vector<int>> result5 = mergeIntervals(intervals5);
    printIntervals(result5, "Output");
    
    cout << "\n";
    demonstrateExample();
    
    return 0;
}

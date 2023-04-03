#include <iostream>
#include <list>

using namespace std;

// Function to merge two sorted lists into a single sorted list
list<int> mergeLists(list<int>& list1, list<int>& list2) {
    list<int> mergedList;

    while (!list1.empty() && !list2.empty()) {
        if (list1.front() < list2.front()) {
            mergedList.push_back(list1.front());
            list1.pop_front();
        }
        else {
            mergedList.push_back(list2.front());
            list2.pop_front();
        }
    }

    while (!list1.empty()) {
        mergedList.push_back(list1.front());
        list1.pop_front();
    }

    while (!list2.empty()) {
        mergedList.push_back(list2.front());
        list2.pop_front();
    }

    return mergedList;
}

// Function to perform merge-insert sort on a list
void mergeInsertSort(list<int>& myList) {
    if (myList.size() <= 1) {
        return;
    }

    list<int> leftList, rightList;

    int middleIndex = myList.size() / 2;
    int i = 0;
    for (auto it = myList.begin(); it != myList.end(); it++) {
        if (i < middleIndex) {
            leftList.push_back(*it);
        }
        else {
            rightList.push_back(*it);
        }
        i++;
    }

    mergeInsertSort(leftList);
    mergeInsertSort(rightList);

    myList = mergeLists(leftList, rightList);
}

// Example usage
int main() {
    list<int> myList = { 3, 7, 2, 1, 8, 6, 4, 5 };
    for (auto it = myList.begin(); it != myList.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    mergeInsertSort(myList);

    for (auto it = myList.begin(); it != myList.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
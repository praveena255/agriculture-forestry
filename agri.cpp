#include <iostream>
using namespace std;

int main() {
// Variables for agriculture
string cropName;
float cropArea;

// Variables for forestry  
string treeType;  
int treeCount;  

// Input crop data  
cout << "Enter crop name: ";  
cin >> cropName;  
cout << "Enter area used for crop (in acres): ";  
cin >> cropArea;  

// Input forest data  
cout << "Enter tree type: ";  
cin >> treeType;  
cout << "Enter number of trees: ";  
cin >> treeCount;  

// Output data  
cout << "\n--- Agriculture Info ---\n";  
cout << "Crop: " << cropName << "\nArea: " << cropArea << " acres\n";  

cout << "\n--- Forestry Info ---\n";  
cout << "Tree Type: " << treeType << "\nTree Count: " << treeCount << endl;  

return 0;

}
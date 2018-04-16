#include "Test.h"



/* METHODS THAT NEED TO BE CHECKED

  bool isEmpty
  int size
  bool search(int)
  void addBack(int)
  void addFront(int)
  bool removeBack()
  bool removeFront()

*/
void Test::TestAll(){
  LinkedListOfInts list;
  Test1(list);
  Test2(list);
  Test3(list);
  Test4(list);
  Test5(list);
  Test6(list);
  Test7(list);
  Test8(list);
  Test9(list);
  Test10(list);
  Test11(list);
  Test12(list);
  Test13(list);
  Test14(list);
  Test15(list);
  Test16(list);
  Test17(list);
  Test18(list);
}


// Check that isEmpty returns true on an empty list
void Test::Test1(LinkedListOfInts list){

  printStatement("Test 1: isEmpty returns true on an empty list:", list.isEmpty());
}

// Check that size returns 0 on an  list
void Test::Test2(LinkedListOfInts list){
  bool result = (list.size() == 0);
  printStatement("Test 2: size returns 0 on an empty list:", result);
}

// Check that search returns false on an empty list
void Test::Test3(LinkedListOfInts list){

  printStatement("Test 3: search returns false on empty list:", !(list.search(0)));
}

// Check that addBack increases size by 1
void Test::Test4(LinkedListOfInts list){

  list.addBack(1);
  printStatement("Test 4: addBack increases the size of the list:", list.size() == 1);
}

// Check that addFront increases size by 1
void Test::Test5(LinkedListOfInts list){

  list.addFront(2);
  printStatement("Test 5: addFront increases the size of the list:", list.size() == 1);
}

// Check that removeBack decrements size by 1
void Test::Test6(LinkedListOfInts list){

  list.addFront(3);
  printStatement("Test 6: removeBack decrements size by 1:", (list.size() == 0));
}

// Check that removeBack returns true when an item has been removed
void Test::Test7(LinkedListOfInts list){

  list.addFront(90);
  printStatement("Test 7: removeBack returns true when an item has been removed:", list.removeBack());
}

// Check that removeBack returns false when there is nothing to remove
void Test::Test8(LinkedListOfInts list){

  printStatement("Test 8: removeBack retuns false when called on an empty list:", !list.removeBack());
}

// Check that removeFront decrements size by 1
void Test::Test9(LinkedListOfInts list){

  list.addFront(4);
  printStatement("Test 9: removeFront decrements size by 1:", (list.size() == 0));
}

// Check that removeFront returns true when an item has been removed
void Test::Test10(LinkedListOfInts list){

  list.addFront(100);
  printStatement("Test 10: removeFront returns true when an item has been removed:", list.removeFront());
}

// Check that removeFront returns false when there is nothing to remove
void Test::Test11(LinkedListOfInts list){

  printStatement("Test 11: removeFront return false when called on an empty list:", !list.removeFront());
}

// Check that isEmpty returns false on a non-empty list
void Test::Test12(LinkedListOfInts list){

  list.addFront(5);
  printStatement("Test 12: isEmpty returns false on a list that isn't empty:", !list.isEmpty());
}

// Check that size returns size 1 after 1 add
void Test::Test13(LinkedListOfInts list){
  list.addFront(6);
  printStatement("Test 13: size returns 1 after 1 add:", list.size() == 1);
}

// Check that search returns true on a value that has been added to the list
void Test::Test14(LinkedListOfInts list){
  list.addFront(7);
  list.addBack(8);
  list.addBack(9);
  list.addFront(10);
  printStatement("Test 14: search returns true on a value that has been added to the list:", list.search(9));
}

// Check that addBack does indeed add to back
void Test::Test15(LinkedListOfInts list){

  list.addBack(11);
  list.addBack(12);
  list.addBack(13);
  std::vector<int> vec = list.toVector();

  bool result = (vec[vec.size()-1] == 13);
  printStatement("Test 15: addBack adds value to the back of the list:", result);
}

// Check that addFront does add to front
void Test::Test16(LinkedListOfInts list){
  list.addFront(14);
  list.addFront(15);
  list.addFront(16);
  std::vector<int> vec = list.toVector();

  bool result = (vec[0] == 16);
  printStatement("Test 16: addFront adds value to the front of the list:", result);
}

// Check that removeBack removes from the back
void Test::Test17(LinkedListOfInts list){
  list.addBack(17);
  list.addFront(18);
  list.addBack(19);

  std::vector<int> vec1 = list.toVector();
  list.removeBack();
  std::vector<int> vec2 = list.toVector();

  bool result = true;
  for (int i = 0; i < vec2.size(); i++){
    if (vec2[i] != vec1[i]){
      result = false;
      break;
    }
  }

  printStatement("Test 17: removeBack removes from the back of the list:", result);
}

// Check that removeFront removes from the front
void Test::Test18(LinkedListOfInts list){
  list.addFront(20);
  list.addBack(21);
  list.addFront(22);

  std::vector<int> vec1 = list.toVector();
  list.removeFront();
  std::vector<int> vec2 = list.toVector();

  bool result = true;
  for (int i = 0; i < vec2.size(); i++){
    if (vec2[ i] != vec1[i+1]){
      result = false;
      break;
    }
  }

  printStatement("Test 18: removeFront removes from the front of the list:", result);
}


// A convenient way to quickly print the result
void Test::printStatement(std::string line, bool eval){
  std::string result = eval? "PASSED" : "FAILED";
  std::cout << line << " " << result << std::endl;
}

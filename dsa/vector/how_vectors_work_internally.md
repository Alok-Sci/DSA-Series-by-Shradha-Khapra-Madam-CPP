# How vectors work internally
Vectors internally are arrays.

## Important properties of vector

### Size
Size tells how many elements are present in the vector.

### Capacity
Capacity tells how many elements can the vector store.

```c++
vector<int> vec; // create vector of size 0

// if ( vector capacity is 0 )
    // 1. create an array of size 1,
    // 2. insert the element at 0th index.
// else if ( vector capacity == vector size )
    // 1. create another array with double the size of existing array
    // 2. copy all the element of existing array to the new one, and delete the old one.
    // 3. insert the element after the last element in the array.
// else 
    // 1. insert the element after the last element in the array.

// capacity = 0
// size = 0
vec.push_back(0); 
// capacity == 0; 
// capacity = 1; 
// [ ]
// [0] ; size = 1;


// capacity = 1
// size = 1
vec.push_back(1); 
// capacity == size; (1==1) 
// capacity *= 2; (2)
// [0][ ] 
// [0][1] size = 2;


// capacity = 2
// size = 2
vec.push_back(2); 
// capacity == size; (2 == 2)
// capacity *= 2; (4)
// [0][1][ ][ ]
// [0][1][2][ ] size = 3


// capacity = 4
// size = 3
vec.push_back(4); 
// capacity != size; (4 != 3)
// [0][1][2][ ]
// [0][1][2][4] size = 3
```

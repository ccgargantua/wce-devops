# Mock Assignment

This assignment is used to demonstrate the capabilities of using the template.

## Task

Implement a 2D vector API that supports vector addition and subtraction. Test cases for addition must succeed, and you must implement test cases for subtraction. If compiled under debug, any vector operations should be printed to stdout. Otherwise, no printing should occur.

Your main program should accept user input in the form of x,y where x and y are integer inputs to be treated as vector components. It should request two vectors v1&v2, and then output their sum and then the difference v1 - v2.

**Release**
```sh
./program
>> Enter x,y components of vector 1 (v1): 1, 2
>> Enter x,y components of vector 2 (v2): 3, 4
>> v1 + v2 = 4, 6
>> v2 - v1 = 2, 2
```

**Debug**
```sh
>> Enter x,y components of vector 1 (v1): 1, 2
>> Enter x,y components of vector 2 (v2): 3, 4
>> Adding vectors v1 (1, 2) and v2 (3, 4)
>> v1 + v2 = 4, 6
>> Subtracting vectors v1 (1, 2) and v2 (3, 4)
>> v2 - v1 = 2, 2
```
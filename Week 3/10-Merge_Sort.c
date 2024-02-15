// Merge sort is an algorithm for sorting n numbers 
// it is better than selection and bubble sort

// algorithm
// if only one number
    // quit
// else
    // sort left half of numbers
    // sort right half of numbers
    // merge sorted halves

// understanding:
// 1346   0257 // two half and they are sorted from smallest to largest
// merge means in this case
// first it checks 1 and 0 that is 1 from first element of first half and 0 from second element from second half which is smaller will be displayed
// 1 and 0
// 0
// 1 and 2
// 01
// 3 and 2 
// 012
// 3 and 5
// 0123
// 4 and 5
// 01234
// 6 and 5
// 012345
// 6 and 7
// 01234567

// selection sort and bubble sort uses 1 bit at a time which is less space
// so in programming in CS less time solving problem we have to spend more space and more money so that it reduce the time
// It all depends upon us

// 63415270 // array
// 6341           // 5270
// 63 //41        //52  //70
// 6  //4         //5   //7

// 01234567 // array
// 1346                // 0257
// 36  //14            //25   //07
// 6 and 3 // 4 and 1 // 5a2  //7a0

// we can check it by running visualisation

// log2(8) = 3
// O(nlogn) 
// omega(nlogn)
// theta(nlogn)

// in terms of chart 
// it is strictly higher than linear and stricty lower than quadratic
// it is faster

// it is not good as linear search and binary search
// but better than selection sort and bubble sort
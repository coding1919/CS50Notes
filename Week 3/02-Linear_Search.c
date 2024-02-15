// computers memory - grid of bytes
// 1 grid is 1 byte or 8 bits

// array is collection of values
// array is contiguous (i.e back to back to back) of given data type

// if we consider a array size of 7 having the values 1,5,10,20,50,100,500 from smallest to largest
// Suppose we have to find 50 number in it
// in case of human eye if that numbers are open to us we can see all the numbers at once
// But in case of computer it can go through one location at a time and check it
// indexing will be 0 to n-1

// searching
// input -> algorithm -> boolean
// searching from left to right or from right to left is called as linear search

// algoritm:
// for each door from left to right
    // if 50 is behind door
        // return true
// return false

// this algorithm is incorrect:
// for each door from left to right
    // if 50 is behind door
        // return true
    // else
        // return false
// if he finds wrong in first index and then goes to else and return false that would erroneously conclude the 50's not there even though it can be in other doors

// coders algoritm:
// for i from 0 to n-1
    // if 50 is behind doors[i]
        // return true
// return false

// binary searc : bi implying two, because it is either left half or right half again and again
// in case ogf phonebook to that is a binary search

// algorithm:
// if no doors left
    // return false
// if 50 is behind middle door
    // return true
// else if 50 < middle door
    // search left half
// else if 50 > middle door
    // search right half
        
// coder's algorithm:
// if no doors left
    // return false
// if 50 is behind doors[middle]
    // return true
// else if 50 < doors[middle]
    // search doors[0] through doors[middle - 1] 
// else if 50 > doors[middle]
    // search doors[middle + 1] through doors[n - 1] 

// if we make like this algorithm it is better to write the codes easily

// running time
// n - stright graph
// n/2 - more incline than n
// log2n - first it will be fast growth and then little bit of seady growth in case of time

// running time and efficiency of algorithm
// it is in the case - like order of that is O(n), O(n/2), O(log2n)
// n - O(n) - O(n)
// n/2 - O(n/2) - O(n)
// log2n - O(log2n) - O(logn)
// we say the efficiency as a computer students in constant form

// O - big O notation
// this is omnipresent in cs
// represents an upper bound on the number of steps counting
// cheat sheet:
// O(n^2) - quadratic time - n people doing n things - n*n - hand shake for every one in the class that is n * n-1 neglect -1 that would be n*n
// O(nlogn) - 
// O(n) - linear time - 1,2,3,4 - n steps
// O(logn) - logarithmic time - binary search - half half
// O(1) - constant time - it may be 1 step, 2 step or even 1000 step - that is constant number of steps(one step total) - everyone stood up at the same time

// where n is the number of any things
// mathematical formula inside the parenthesis describes as a function of the size of that input how fast or slow the algorithm's going to be

// we don't always want to talk about things in term of an upper bound like how many steps in the worst case might this algorithm take and sometimes its useful to know in the best case how few steps might an algoritm take
// For that there is capital greek letter which is omega
// omega represents lower bound
// its opposite of big O
// means that this algorithm might take as few as this many steps for instance, in the very best case


// omega(n^2) - 
// omega(nlogn) - 
// omega(n) - 
// omega(logn) - 
// omega(1) - linear search , Binary search

// in the best case and worst case some algorithms takes n steps - that is theta notation

// theta(1) - for ex in case of attendance 1,2,3,4....
#ifndef KSMALL_SOLUTION_HPP
#define KSMALL_SOLUTION_HPP

#include "arrayTracker.hpp"

void arraySwap(arrayTracker* swappingArray, int indexA, int indexB);
int kSmallPartition(int startIndex, int endIndex, arrayTracker* unsortedArray);

#endif /* KSMALL_SOLUTION_HPP */
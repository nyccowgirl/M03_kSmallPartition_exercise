#ifndef KSMALL_SOLUTION_CPP
#define KSMALL_SOLUTION_CPP

#include "ksmallSolution.hpp"
#include "arrayTracker.hpp"

void arraySwap(arrayTracker* swappingArray, int indexA, int indexB)
{
  int temp = swappingArray->getItem(indexA);
  swappingArray->setItem(indexA, swappingArray->getItem(indexB));
  swappingArray->setItem(indexB, temp);
}

int kSmallPartition(int startIndex, int endIndex, arrayTracker* anArray)
{
	int pivotIndex = startIndex;
	int pivotValue = anArray->getItem(pivotIndex);
	
    // Base case of array empty or size of 1
    if (endIndex <= 0) {
        pivotIndex = endIndex;
    } else {
        
        // For array with size of 2+
        int nextValue, endValue;
        // Continue through array until pivotIndex >= endIndex.
        do {
        /*
        Compare value at endIndex to value at pivotIndex (pivot 
        value). If it is less than or equal to, move value before pivotIndex by swapping with next value at (pivotIndex + 1), increment pivotIndex and move pivot value to that index. Otherwise, decrement endIndex.  
        */
            nextValue = anArray->getItem(pivotIndex + 1);
            endValue = anArray->getItem(endIndex);

            if (endValue <= pivotValue) {
                anArray->setItem(pivotIndex, endValue);
                anArray->setItem(endIndex, nextValue);
                anArray->setItem(pivotIndex + 1, pivotValue);
                pivotIndex++;
            } else {
                endIndex--;
            }

        } while (pivotIndex < endIndex);
        
    }

  return pivotIndex;
}

#endif /* KSMALL_SOLUTION_CPP */
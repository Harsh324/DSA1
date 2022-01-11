
## This is Binary_search 
## Time complexity :  best --> O(1)  , Average --> O(log(n))  , Worst --> O(log(n))
## Space complexity :  O(1)
## Basic concept behind this algorithm is that it works only on sorted array .
## repeatedly it divides the array in half and search for the key in that.
## this is what we call divide and conquer.
def Binary_search(Array, Value):

    Low, High = 0, len(Array) - 1
    while Low <= High:

        Mid = Low + (High - Low)//2

        if Array[Mid] == Value:
            return True

        elif Array[Mid] < Value:
            Low = Mid + 1

        else:
            High = Mid - 1

    return False

Arr = [2,4,5,6,7,8]
if(Binary_search(Arr, 8)):
    print("YES")
else:
    print("NO")


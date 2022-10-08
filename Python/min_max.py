def minimum(arr):
    min = arr[0];
    for item in arr:
        if (item < min):
            min = item
    return min

def maximum(arr):
    max  = arr[0];
    for item in arr:
        if(item > max):
            max = item
    return max

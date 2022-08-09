"""basic python programs"""

def fib(number):
    """fibonacci"""
    arr = [0,1]
    for i in range(2, number):
        sum_ = arr[i - 1] + arr[i - 2]
        arr.append(sum_)
    return arr


print(fib(10))

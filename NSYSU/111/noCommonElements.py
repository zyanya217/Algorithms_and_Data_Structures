def noCommonElements(array1, array2):
    # 將較小的數列使用mergeSort
    mergeSort(array2)  # O(m log m)

    # 在較大的array中為每個元素執行二分搜索 # O(n log m)
    for element in array1:
        if binarySearch(array2, element):  # O(log m)
            return False  # 發現相同的元素

    return True  # 沒有相同的元素

def mergeSort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        left_half = arr[:mid]
        right_half = arr[mid:]

        mergeSort(left_half)
        mergeSort(right_half)

        i = j = k = 0

        while i < len(left_half) and j < len(right_half):
            if left_half[i] < right_half[j]:
                arr[k] = left_half[i]
                i += 1
            else:
                arr[k] = right_half[j]
                j += 1
            k += 1

        while i < len(left_half):
            arr[k] = left_half[i]
            i += 1
            k += 1

        while j < len(right_half):
            arr[k] = right_half[j]
            j += 1
            k += 1

def binarySearch(sortedArray, target):
    low, high = 0, len(sortedArray) - 1

    while low <= high:
        mid = (low + high) // 2
        if sortedArray[mid] == target:
            return True  # 找到元素
        elif sortedArray[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return False  # 未找到元素

# 範例使用
array1 = [1, 2, 3, 4, 5]
array2 = [6, 7, 8]

result = noCommonElements(array1, array2)
if result:
    print("這兩個數列沒有相同的元素。")
else:
    print("這兩個數列有相同的元素。")

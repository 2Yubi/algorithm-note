n = input()
ret = ""
arr = []

for i in range(int(n)):
    m = input()
    for j in m:
        if ord('0') <= ord(j) <= ord('9'):
            ret += j
        else:
            if ret:
                arr.append(int(ret))
                ret = ""
    if ret:
        arr.append(int(ret))
        ret = ""

arr.sort()

for i in arr:
    print(i)    
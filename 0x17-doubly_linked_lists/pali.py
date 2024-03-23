#!/usr/bin/python3
sum = 0
for i in range(999, 0, -1):
    for k in range(999, 0, -1):
        if(str(i*k) == str(i*k)[::-1]):
            if i*k > sum:
                sum = i*k
                print(i*k)
                print("{}:{}".format(i,k))
print(None)


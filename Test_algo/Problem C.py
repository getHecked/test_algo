import bisect

x,y = map(int,input().split())

first = input().split()

second = input().split()

first.sort()
temp=[]

for i in second:
    temp.append(bisect.bisect(first,i))

for i in list(temp):
    print(i,end=' ')

# https://www.acmicpc.net/problem/9093
# Word Reversal

temp = []
t = int(input())
li = []

for i in range(t):
    li.append(list(input().split()))
    for j in range(len(li[i])):
        word = ''
        temp.append(li[i][j])
        word = temp.pop()
        print(word[::-1], end=' ')
    print()


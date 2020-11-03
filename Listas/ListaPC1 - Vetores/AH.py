n = int(input())
i=0
qte = 1
seq = list(map(int, input().split()))
seq.sort()
while i < n:
    qte = seq.count(seq[i])
    print("{} {}".format(seq[i],qte))
    i+=qte

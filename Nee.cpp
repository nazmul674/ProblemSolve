import copy

queue = [143, 86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130];
q = copy.copy(queue)
total = 0
curr = q.pop(0)
seq = [curr]
while len(q)>0:
    curr += 1
    total += 1
    if curr in q:
        q.remove(curr)
        seq.append(curr)
    if curr == 4999:
        curr = 0
        total += 4999
print "e. C-SCAN:", total, seq

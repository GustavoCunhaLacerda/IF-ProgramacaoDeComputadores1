texto = input()
termo = input()
pos = []
for i in range(len(texto)-len(termo)+1):
    straux = texto[i:i+len(termo):1]
    if straux == termo:
        pos.append(i)

for pos in pos:
    print(pos, end = ' ')
print("")
texto = input()
i = 0
while i<len(texto):
    numaux=1
    tamNum = 0
    num = texto[i]
        
    j=i
    while num.isdigit() == True:
        if j ==i:
            tamNum = 1
        j += 1
        num = texto[j]
        if num.isdigit() == True:
            tamNum+=1

    num = texto[i:i+tamNum:1]

    if num.isdigit() == True:
        numaux = int(num)
    if i<len(texto):
        char = texto[i+tamNum]
        print(char*numaux, end = '')


    i+=tamNum+1

print("")
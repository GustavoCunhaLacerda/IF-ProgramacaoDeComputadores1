import subprocess
import sys



if len(sys.argv) != 2:
    print('Como utilizar o r.py: python3 r.py <programa.c>')
    print('OBS.: O arquivo .c deve estar na mesma pasta que o arquivo r.py')
    exit(0)


cmd = sys.argv[1] # O primeiro agrumenro apos r.py (argv[0]) é o programa

bibliotecas = "-lm"

print ("Rodando o programa {0}:".format(cmd))
subprocess.call(["gcc", cmd, "-o -wall bin", bibliotecas]) 
subprocess.call("./bin")
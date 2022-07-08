import random
import os

print(os.getcwd())

try:
    f1 = open('csv.txt', mode='w', encoding='utf-8')

    count=0
    while(count<1000000):
        f1.write(str(random.randrange(1,1000000,1)))
        f1.write(", ")
        count+=1
    f1.close()
except Exception as e:
    print('파일 처리 오류:',e)

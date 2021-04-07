n = 2*1000*1000
p = [True]*n # using python as Segmentation error in C++

def main() :
    p[0] = p[1] = False
    for i in range (2, n, 2) :
        p[i] = False
    nbPrimes = 1 # 2 has been counted as a prime
    sumPrimes = 2
    for i in range (3, n, 2) :
        if p[i] :
            nbPrimes += 1
            sumPrimes += i
            # if nbPrimes == 10001 :
            #     print(i)
            #     return
            for j in range (2*i, n, i) :
                p[j] = False
    print(sumPrimes)

main()
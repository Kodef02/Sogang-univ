for i in range(5):
    x=float(input('번형 거리 : '))
    heigh=float(input('글라이더 무게 : '))
    heigh=heigh*9.8*0.0598
    print(' ={}'.format(heigh))
    f=float(input('힘:'))
    k=f/x*100
    print('k={}'.format(k))
    T=(4*3.14*3.14*heigh)/k
    T=T**(1/2)
    print('T={}'.format(T))

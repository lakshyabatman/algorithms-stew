def MaxMoves(x,y):
    print(x,y)
    if x>8 or x<0:
        return 0
    if y>8 or y<0:
        return 0
    m1 = MaxMoves(x+3,y+1)
    m2 = MaxMoves(x+3,y-1)
    m3 = MaxMoves(x+1,y+3)
    m4 = MaxMoves(x-1,y+3)
    m5 = MaxMoves(x-3,y+1)
    m6 = MaxMoves(x-3,y-1)
    m7 = MaxMoves(x+1,y-3)
    m8 = MaxMoves(x-1,y-3)

    return (max(m1,m2,m3,m4,m5,m6,m7,m8)+1)

print(MaxMoves(0,0))

def BullsandCows (secret,guess):
    secretDict= {}
    Bulls,Cows = 0,0
    for i in range(len(secret)):
            if secret[i] in secretDict:
                secretDict[secret[i]]+=1
            else:
                secretDict[secret[i]]=1
    for i in range(len(secret)):
        if(guess[i]==secret[i]):
            Bulls+=1
        else:
            if guess[i] in secretDict:
                Cows+=1
                if(secretDict[guess[i]]==1):
                    secretDict.pop(guess[i])
                else:
                    secretDict[guess[i]]-=1
                print(secretDict)
    return (Bulls , "A",  Cows ,"B")
    


secret="1807"
guess="7810"

print(BullsandCows(secret,guess))
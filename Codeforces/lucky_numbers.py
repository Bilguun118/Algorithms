luck = int(input())

def findLuckyNumber(luck):
    if luck > 10:
        while luck > 0:
            lst_num = luck % 10
            print('LAST NUM: ',lst_num)
            if lst_num != 7 and lst_num != 4:
                print("NO")
                return
            luck = luck // 10
    else:
            
        if luck == 7 or luck == 4:
            print("YES")
            return
        print("NO")
        return
    print('YES')
    return


if __name__=="__main__":
    findLuckyNumber(luck)
 

# arr1 = input("1 polka:").split()
# arr2 = input("2 polka:").split()
# var = input("3 polka:")

# var = int(var)
# for i in range(len(arr1)):
#     arr1.insert(i, int(arr1[i]))
   
# for i in range(len(arr2)):
#     arr2.insert(i, int(arr2[i]))


def bison(arr1: list, arr2: list, var):

    if(arr1[0] > 0) and (arr1[0] < 100) and (arr2[0] > 0) and (arr2[0] < 100):
        if ((arr1[0] + arr1[1] + arr1[2]) < 5) and ((arr2[0] + arr2[1] + arr2[2]) < 10) and (var > 0 and var < 100):
            return "YES"
        else:
            return "NO"
    else:
        return "bad Data"


#print(bison(arr1, arr2, var))
def table(n=9, m=9):
    n += 1
    m += 1
    for i in range(1,n):
        for j in range(1,m):
            print(f"{i}x{j}={i*j}")
        print("-"*10)

if __name__ == "__main__":
    n = int(input("Please insert base num n= "))
    m = int(input("Please insert base num m= "))
    table(n, m)

    # table() # Call with Default params
    pass
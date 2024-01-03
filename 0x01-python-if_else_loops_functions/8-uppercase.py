#!/usr/bin/python3
def uppercase(str):
    for text_a in str:
        temp = text_a
        if ord(temp) >= 97 and ord(temp) <= 122:
            temp = chr(ord(text_a) - 32)
        print("{}".format(temp), end='')
    print()

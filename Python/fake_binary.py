def fake_bin(x):
    newStr = ''
    for number in x:
        if(number<'5'):
            newStr+='0'
        if(number>='5'):
            newStr+='1'

    return newStr
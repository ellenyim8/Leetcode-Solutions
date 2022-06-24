def multiply(num1, num2):
    """
    :type num1: str
    :type num2: str
    :rtype: str
    """
    # num1 = "2" 
    # num2 = "3"
    # convert string to int -> "2" to 2 
    # "3" to 3 
    # multiply 
    # then convert back to string 
    
    n1 = 0
    n2 = 0
    n1 = int(num1)
    n2 = int(num2)
    
    res = n1 * n2 
    result = str(res)
    return result
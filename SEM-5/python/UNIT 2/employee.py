# Create a program name “employee.py” and implement the functions DA, HRA, PF, and ITAX. Create another program 
# that uses the function of employee module and calculates gross and net salaries of an employee

def da(basic):
    da = basic * 80 / 100
    return da

def hra(basic):
    hra = basic * 15 / 100
    return hra

def pf(basic):
    pf = basic * 12 / 100
    return pf

def itax(gross):
    itax = gross * 0.1
    return itax




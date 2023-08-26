# Create a program name “employee.py” and implement the functions DA, HRA, PF, and ITAX. Create another program 
# that uses the function of employee module and calculates gross and net salaries of an employee

from employee import *

basic = int(input("Enter the basic salary "))

gross = basic + da(basic) + hra(basic)

netsalary = gross - pf(basic) - itax(gross)

print("netsalary : " , netsalary)
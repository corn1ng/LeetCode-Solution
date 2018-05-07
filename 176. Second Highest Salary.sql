# Write your MySQL query statement below
select  max(Salary)  as SecondHighestSalary from Employee where salary <(SELECT max(Salary) FROM Employee)


题目要求若为空,则返回null,所以用max会自动返回null,要是没要求空返回null的话,就用limit 1,1

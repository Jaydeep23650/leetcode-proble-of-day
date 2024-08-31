# Write your MySQL query statement below
SELECT EmployeeUNI.unique_id,Employees.name
FROM Employees natural left JOIN Employeeuni;
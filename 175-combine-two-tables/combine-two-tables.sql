# Write your MySQL query statement below
select p.firstName as firstName, p.lastName as lastName,a.city as city,a.state as state
from Person as p
left join Address as a
on p.personId=a.personId
group by p.personId;

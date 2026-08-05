# Write your MySQL query statement below
select x,y,z,
case
when x+y>z AND z+y>x AND x+z>y
then "Yes"
else "No"
END as triangle
from Triangle;

# Write your MySQL query statement below
select distinct author_id id from views where author_id=viewer_id order by viewer_id;
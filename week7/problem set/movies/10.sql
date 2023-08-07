--列出所有执导过评分至少为 9.0 的电影的人的姓名
SELECT DISTINCT directors.name AS director_name
FROM directors
JOIN movies ON directors.director_id = movies.director_id
WHERE movies.rating >= 9.0;

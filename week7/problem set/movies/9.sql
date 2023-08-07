--列出 2004 年上映的电影中所有主演的姓名，按出生年份排序。
SELECT distinct(name)
  FROM movies, stars, people
 WHERE movies.id = stars.movie_id
   AND people.id = stars.person_id
   AND year = 2004
 ORDER BY birth;
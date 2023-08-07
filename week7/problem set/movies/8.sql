--查询来列出所有出演《玩具总动员》的人的姓名
SELECT name
  FROM movies, stars, people
 WHERE movies.id = stars.movie_id
   AND people.id = stars.person_id
   AND title = "Toy Story";
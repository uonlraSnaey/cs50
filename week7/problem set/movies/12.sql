--列出 Bradley Cooper 和 Jennifer Lawrence 主演的所有电影的标题。
SELECT title
  FROM movies, stars, people
 WHERE movies.id = stars.movie_id
   AND people.id = stars.person_id
   AND name = "Johnny Depp"
   AND title IN
       (SELECT title
          FROM movies, stars, people
         WHERE movies.id = stars.movie_id
           AND people.id = stars.person_id
           AND name = "Helena Bonham Carter");
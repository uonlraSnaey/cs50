--确定 2012 年发行的所有电影的平均评分。
SELECT avg(rating)
  FROM movies
  JOIN ratings
    ON movies.id = ratings.movie_id
 WHERE year = 2012;

--来确定 IMDb 评级为 10.0 的电影数量
SELECT count(rating)
  FROM ratings
 WHERE rating = 10.0;

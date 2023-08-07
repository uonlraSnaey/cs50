-- 查询以按字母顺序列出发行日期在 2018 年或之后的所有电影的标题。
SELECT title
  FROM movies
 WHERE year >= 2018
 ORDER BY title;

--按时间顺序列出所有哈利波特电影的标题和发行年份。
SELECT title, year
  FROM movies
 WHERE title
  LIKE "Harry Potter%"
 ORDER BY year;
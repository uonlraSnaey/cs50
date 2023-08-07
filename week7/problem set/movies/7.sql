--编写一个 SQL 查询来列出 2010 年上映的所有电影及其评分（按评分降序排列）。对于具有相同评级的电影，按标题字母顺序排列。
SELECT title, rating
FROM movies
WHERE year = 2010
ORDER BY rating DESC, title;
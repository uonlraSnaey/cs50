--编写一个 SQL 查询，列出其他艺术家的歌曲名称
SELECT name
  FROM songs
 WHERE name
  LIKE "%feat.%";
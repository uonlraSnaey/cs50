-- 查询以按长度降序列出前 5 首最长的歌曲的名称
SELECT name
  FROM songs
 ORDER BY duration_ms DESC
 LIMIT 5;
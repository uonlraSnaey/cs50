--列出所有可律动、能量和效价大于0.75的歌曲的名称。
SELECT name
  FROM songs
 WHERE danceability > 0.75
   AND energy > 0.75
   AND valence > 0.75;
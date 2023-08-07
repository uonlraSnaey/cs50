--返回 Drake 歌曲的平均能量
SELECT avg(energy)
  FROM songs
 WHERE artist_id IN
       (SELECT id
          FROM artists
         WHERE name = "Drake");
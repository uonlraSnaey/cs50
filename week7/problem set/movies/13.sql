--列出主演Kevin Bacon也主演的电影的所有人员的姓名
SELECT distinct(name)
  FROM stars, people
 WHERE people.id = stars.person_id
   AND name != "Kevin Bacon"
   AND movie_id IN
       (SELECT movie_id
          FROM stars, people
         WHERE stars.person_id = people.id
           AND name = "Kevin Bacon"
           AND birth = 1958);
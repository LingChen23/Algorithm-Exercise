<p>表:&nbsp;<code>Customer</code></p>

<pre>
+-------------+---------+
| Column Name | Type    |
+-------------+---------+
| id          | int     |
| name        | varchar |
| referee_id  | int     |
+-------------+---------+
在 SQL 中，id 是该表的主键列。
该表的每一行表示一个客户的 id、姓名以及推荐他们的客户的 id。</pre>

<p>找出那些 <strong>没有被</strong> <code>id = 2</code> 的客户 <strong>推荐</strong> 的客户的姓名。</p>

<p>以 <strong>任意顺序</strong> 返回结果表。</p>

<p>结果格式如下所示。</p>

<p>&nbsp;</p>

<p><strong>示例 1：</strong></p>

<pre>
<b>输入：</b> 
Customer 表:
+----+------+------------+
| id | name | referee_id |
+----+------+------------+
| 1  | Will | null       |
| 2  | Jane | null       |
| 3  | Alex | 2          |
| 4  | Bill | null       |
| 5  | Zack | 1          |
| 6  | Mark | 2          |
+----+------+------------+
<b>输出：</b>
+------+
| name |
+------+
| Will |
| Jane |
| Bill |
| Zack |
+------+</pre>

<div><div>Related Topics</div><div><li>数据库</li></div></div><br><div><li>👍 285</li><li>👎 0</li></div>
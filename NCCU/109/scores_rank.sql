-- 創建 scores 表格
CREATE TABLE scores (
    Id INT PRIMARY KEY,
    Score DECIMAL(4, 2)
);

-- 插入數據
INSERT INTO scores (Id, Score) VALUES (1, 3.50), (2, 3.65), (3, 4.00), (4, 3.85), (5, 4.00), (6, 3.65);

-- 創建 scores_rank VIEW
CREATE VIEW scores_rank AS
SELECT Score, 
       (SELECT COUNT(DISTINCT s2.Score) + 1 
        FROM scores s2 
        WHERE s2.Score > s1.Score) AS Ranking
FROM scores s1;

-- 查詢結果
SELECT Score, Ranking
FROM scores_rank
ORDER BY Ranking;

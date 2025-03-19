CREATE DATABASE IF NOT EXISTS company_db;
USE company_db;
CREATE TABLE IF NOT EXISTS employee (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(100),
    department VARCHAR(50),
    salary DECIMAL(10,2),
    joining_date DATE,
    last_login TIMESTAMP,
    email VARCHAR(100)
);
  
INSERT INTO employee (name, department, salary, joining_date, last_login, email) VALUES
('John Doe', 'IT', 75000.50, '2020-03-15', '2024-03-10 08:30:00', 'john.doe@example.com'),
('Jane Smith', 'HR', 68000.00, '2019-07-22', '2024-03-11 09:15:00', 'jane.smith@example.com'),
('Michael Brown', 'Finance', 89000.75, '2018-10-10', '2024-03-12 10:45:00', 'michael.brown@example.com');

SELECT 
    UPPER(name) AS Name_Uppercase,
    SUBSTRING_INDEX(email, '@', -1) AS Email_Domain,
    CHAR_LENGTH(name) AS Name_Length,
    CONCAT(name, ' - ', department) AS Name_Department,
    LEFT(email, 5) AS First_Five_Email,
    REPLACE(department, 'IT', 'Information Technology') AS Dept_Replace,
    TRIM(name) AS Trimmed_Name,
    LEFT(name, 3) AS First_Three_Name,
    RIGHT(email, 10) AS Last_Ten_Email,
    LOCATE('a', name) AS First_A_Position,
    REVERSE(name) AS Reversed_Name,
    LPAD(name, 20, '*') AS Padded_Name,
    LPAD(department, 15, '-') AS Padded_Dept,
    LENGTH(email) AS Email_Length,
    POSITION('@' IN email) AS At_Position,
    INSERT(name, 3, 0, 'XYZ') AS Insert_XYZ,
    ASCII(LEFT(name, 1)) AS First_Char_ASCII,

    -- Numeric Functions
    salary * 1.10 AS Salary_10_Percent_Increase,
    salary * 0.95 AS Salary_After_Tax,
    ABS(salary - 80000) AS Salary_Diff_80000,
    ROUND(salary, -3) AS Salary_Rounded,
    TRUNCATE(salary, 0) AS Salary_Truncated,
    CEIL(salary) AS Salary_Ceiling,
    FLOOR(salary) AS Salary_Floor,
    MOD(salary, 2) AS Salary_Even_Odd,
    POWER(salary, 3) AS Salary_Cubed,
    CONCAT(CAST(salary AS CHAR), ' USD') AS Salary_String,
    LEFT(CAST(salary AS CHAR), 5) AS Salary_First_5_Chars,

    -- Date & Time Functions
    joining_date AS Joining_Date,
    DAYNAME(joining_date) AS Joining_Day,
    DATEDIFF(CURDATE(), joining_date) AS Days_Worked,
    MONTHNAME(joining_date) AS Joining_Month,
    YEAR(joining_date) AS Joining_Year,
    DATE_FORMAT(last_login, '%d-%m-%Y %H:%i:%s') AS Last_Login_Format,
    TIMESTAMPDIFF(MONTH, joining_date, CURDATE()) AS Months_Worked,
    TIMESTAMPDIFF(YEAR, joining_date, CURDATE()) AS Years_Worked,
    CURDATE() AS `Current_Date`,  -- FIXED the keyword issue
    LAST_DAY(joining_date) AS Joining_Last_Day_Month,
    DAYOFYEAR(joining_date) AS Joining_Day_Of_Year,
    TIMESTAMPDIFF(DAY, CURDATE(), DATE_ADD(joining_date, INTERVAL 1 YEAR)) AS Days_Till_Anniversary,
    WEEKDAY(joining_date) + 1 AS Weekday_Index,
    FROM_UNIXTIME(UNIX_TIMESTAMP(last_login), '%Y-%m-%d %H:%i:%s') AS Readable_Last_Login,
    DATE_ADD(joining_date, INTERVAL 1 YEAR) AS Next_Year_Joining,
    TIMESTAMPDIFF(HOUR, last_login, NOW()) AS Hours_Since_Last_Login,
    DATE_ADD(joining_date, INTERVAL 15 DAY) AS Joining_Plus_15_Days,
    DATE_FORMAT(NOW(), '%h:%i %p') AS Current_Time_AM_PM,
    HOUR(last_login) AS Last_Login_Hour,
    MINUTE(last_login) AS Last_Login_Minute
FROM employee;

CREATE TABLE Nobel_win (
    year INT,
    subject VARCHAR(100),
    winner VARCHAR(100),
    country VARCHAR(100),
    category VARCHAR(100)
);

INSERT INTO Nobel_win VALUE
(1970,'physics','Hannes alfven','sweden','scientist'),
(1970,'physics','louis neel','france','scientist'),
(1970,'chemistry','luis federico leloir','france','scientist'),
(1970,'physiology','ulf von euler','sweden','scientist'),
(1970,'physiology','bernard katz','germany','scientist'),
(1970,'literature','aleksandr solzhenitsyn','russia','linguist'),
(1970,'economics','paul samuelson','usa','economist'),
(1970,'physiology','julius axelod','usa','scientist'),
(1971,'physics','dennis gabor','hungary','scientist'),
(1971,'chemistry','gerhard herzberg','germany','scientist'),
(1971,'peace','wipablo neruda','chile','linguist'),
(1971,'economics','simon kuznets','russia','economist'),
(1970,'physiology','julius axelod','usa','scientist'),
(1978,'peace','anwar al-sadat','egypt','president'),
(1978,'peace','menachem begin','israel','prime minister'),
(1987,'chemistry','donald j.cram','usa','scientist'),
(1987,'chemistry','jean-marie lehn','france','scientist'),
(1987,'physiology','susumu tnegawa','japan','scientist'),
(1994,'economics','reinhard selten','germany','economist'),
(1994,'peace','yitzhak rabin','israel','prim minister'),
(1987,'phsics','johannes georg bednorz','germany','scientist'),
(1987,'literature','joseph brodsky','russia','linguist'),
(1987,'economics','robert solow','usa','economist'),
(1994,'literature','kenzaburo oe','japan','linguist');


-- ● Write sql query to find the nobel prize winners of the year 1970. Return year,subject and winner

SELECT year, subject, winner FROM Nobel_win WHERE year = 1970;

-- Find the Nobel prize winners in chemistry between the years 1965 and 1975 (inclusive). Return year, subject, winner, and country.

SELECT year, subject, winner, country FROM Nobel_win WHERE subject = 'Chemistry' AND year BETWEEN 1965 AND 1975;

-- Retrieve the details of the winners whose first name matches with the string ‘Louis’. Return year, subject, winner, country.

SELECT year, subject, winner, country FROM Nobel_win WHERE winner LIKE 'Louis%';

-- Find Nobel prize winners for the subject that does not begin with the letter ‘P’. Order the result by year (descending) and winner (ascending).

SELECT year, subject, winner, country, category FROM Nobel_win WHERE subject NOT LIKE 'P%' ORDER BY year DESC, winner ASC;

-- Find the details of 1970 Nobel prize winners. Order the result by subject (ascending) except for ‘Chemistry’ and ‘Economics’ 
-- which will come at the end of the result set. Return year, subject, winner, country, and category.

SELECT year, subject, winner, country, category FROM Nobel_win WHERE year = 1970
ORDER BY CASE WHEN subject IN ('Chemistry', 'Economics') THEN 1 ELSE 0 END, subject ASC;







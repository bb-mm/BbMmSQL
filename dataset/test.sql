CREATE TABLE publisher (
  id int(10),
  name varchar(100),
  nation varchar(3)
);

CREATE TABLE book (
  id int(10),
  title varchar(100),
  authors varchar(200),
  publisher_id int(10),
  copies int(10)
);

CREATE TABLE customer (
  id int(10),
  name varchar(25),
  rank int(10)
);

CREATE TABLE orders (
  customer_id int(10),
  book_id int(10),
  quantity int(10)
);

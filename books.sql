CREATE TABLE AUTHOR (
  Autor_ID INTEGER PRIMARY KEY,
  Name TEXT NOT NULL,
  Surname TEXT NOT NULL,
  BDay DATE NOT NULL,
  Address Text NOT NULL
);

CREATE TABLE PUBLISHER (
  Publisher_ID INTEGER PRIMARY KEY,
  NAME TEXT NOT NULL
);

CREATE TABLE BOOK (
  Book_ID INTEGER PRIMARY KEY,
  Pub_date DATE NOT NULL,
  Autor_ID INTEGER NOT NULL,
  Publisher_ID INTEGER NOT NULL,
  CONSTRAINT FK_Book_Author 
  FOREIGN KEY (Autor_ID) 
  REFERENCES AUTHOR(Autor_ID),
  CONSTRAINT FK_Book_Publisher 
  FOREIGN KEY (Publisher_ID) 
  REFERENCES PUBLISHER(Publisher_ID)
);

CREATE TABLE USER (
  User_ID INTEGER PRIMARY KEY,
  Name TEXT NOT NULL,
  Surname TEXT NOT NULL,
  BDay DATE NOT NULL,
  Address TEXT NOT NULL
);

CREATE TABLE SUBSCRIBER_BOOK (
  Subscriber_book_ID INTEGER PRIMARY KEY,
  User_ID INTEGER NOT NULL,
  Taken_date DATE NOT NULL,
  Returned_Date DATE NOT NULL,
  CONSTRAINT FK_Subscriber_book 
  FOREIGN KEY (User_ID) 
  REFERENCES USER(User_ID)
);

CREATE TABLE STATUS (
  Status_ID INTEGER PRIMARY KEY,
  Type TEXT NOT NULL
);

CREATE TABLE CONDIITION (
  Condition_ID INTEGER PRIMARY KEY,
  Type TEXT NOT NULL
);

CREATE TABLE BOOK_INVENTORY (
  Book_Inventory_ID INTEGER PRIMARY KEY,
  Book_ID INTEGER NOT NULL,
  Subscriber_book_ID INTEGER NOT NULL,
  Condition_ID INTEGER NOT NULL,
  Status_ID INTEGER NOT NULL,
  CONSTRAINT FK_BookInventory_Book
  FOREIGN KEY (Book_ID) 
  REFERENCES BOOK(Book_ID),
  CONSTRAINT FK_BookInventory_Status
  FOREIGN KEY (Status_ID) 
  REFERENCES STATUS(Status_ID),
  CONSTRAINT FK_BookInventory_Condition
  FOREIGN KEY (Condition_ID) 
  REFERENCES CONDIITION(Condition_ID)
);

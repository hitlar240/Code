import mysql.connector

DB_name = "TEST_DB"

DB_connection = mysql.connector.connect(
    host = "localhost",
    user = 'root',
    passwd = 'passward',
    database = DB_name
)
# cursor in...
my_cursor = DB_connection.cursor() 

query = """ 
        CREATE TABLE STUDENT
        (
            ROLL INT PRIMARY KEY,
            NAME VARCHAR(30)
        )
        """

# execute selected query
my_cursor.execute(query)


print("Create table successful")
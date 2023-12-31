import mysql.connector

# connection:
DB_connection = mysql.connector.connect(
    host = "localhost",
    user = 'root',
    passwd = 'passward'
)

print(DB_connection)


# cursor in ...
my_cursor = DB_connection.cursor() 

# CREATE DATABASE TEST_DB
DB_name = 'TEST_DB'
query = 'CREATE DATABASE ' + DB_name 

# execute selected query
my_cursor.execute(query)
#include <windows.h>
#include <mysql.h>
#include <iostream>

using namespace std;

int main()
{
    MYSQL *conn;
    MYSQL_ROW row;
    MYSQL_RES *res;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn,"localhost","root","","tieda",0,NULL,0);
    if(conn){
        system("color a");
        cout<<"Database connected with success.";

    }else{
         system("color c");
        cout<<"Failed to connect database.";

    }

    return 0;
}

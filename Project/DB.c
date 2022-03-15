#include "main.h"
#include "DB.h"

int DB_connect(void) {
	db.connection = NULL;
	mysql_init(&db.conn);

	db.connection = mysql_real_connect(&db.conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0);

	if (db.connection == NULL) {
		fprintf(stderr, "error : %s", mysql_error(&db.conn));
		return 1;
	}

	mysql_query(db.connection, "select * from user");
	db.result = mysql_store_result(db.connection);
	return 0;
}

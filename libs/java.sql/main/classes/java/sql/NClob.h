#ifndef _java_sql_NClob_h_
#define _java_sql_NClob_h_
//$ interface java.sql.NClob
//$ extends java.sql.Clob

#include <java/sql/Clob.h>

namespace java {
	namespace sql {

class $export NClob : public ::java::sql::Clob {
	$interface(NClob, $NO_CLASS_INIT, ::java::sql::Clob)
};

	} // sql
} // java

#endif // _java_sql_NClob_h_
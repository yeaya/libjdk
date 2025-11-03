#ifndef _javax_sql_RowSetReader_h_
#define _javax_sql_RowSetReader_h_
//$ interface javax.sql.RowSetReader
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sql {
		class RowSetInternal;
	}
}

namespace javax {
	namespace sql {

class $import RowSetReader : public ::java::lang::Object {
	$interface(RowSetReader, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void readData(::javax::sql::RowSetInternal* caller) {}
};

	} // sql
} // javax

#endif // _javax_sql_RowSetReader_h_
#ifndef _javax_sql_RowSetWriter_h_
#define _javax_sql_RowSetWriter_h_
//$ interface javax.sql.RowSetWriter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace sql {
		class RowSetInternal;
	}
}

namespace javax {
	namespace sql {

class $import RowSetWriter : public ::java::lang::Object {
	$interface(RowSetWriter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool writeData(::javax::sql::RowSetInternal* caller) {return false;}
};

	} // sql
} // javax

#endif // _javax_sql_RowSetWriter_h_
#ifndef _javax_sql_RowSetInternal_h_
#define _javax_sql_RowSetInternal_h_
//$ interface javax.sql.RowSetInternal
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace sql {
		class Connection;
		class ResultSet;
	}
}
namespace javax {
	namespace sql {
		class RowSetMetaData;
	}
}

namespace javax {
	namespace sql {

class $import RowSetInternal : public ::java::lang::Object {
	$interface(RowSetInternal, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::sql::Connection* getConnection() {return nullptr;}
	virtual ::java::sql::ResultSet* getOriginal() {return nullptr;}
	virtual ::java::sql::ResultSet* getOriginalRow() {return nullptr;}
	virtual $ObjectArray* getParams() {return nullptr;}
	virtual void setMetaData(::javax::sql::RowSetMetaData* md) {}
};

	} // sql
} // javax

#endif // _javax_sql_RowSetInternal_h_
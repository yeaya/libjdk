#ifndef _java_sql_RowId_h_
#define _java_sql_RowId_h_
//$ interface java.sql.RowId
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace sql {

class $import RowId : public ::java::lang::Object {
	$interface(RowId, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool equals(Object$* obj) override;
	virtual $bytes* getBytes() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

	} // sql
} // java

#endif // _java_sql_RowId_h_
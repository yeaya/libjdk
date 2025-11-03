#ifndef _java_sql_RowIdLifetime_h_
#define _java_sql_RowIdLifetime_h_
//$ class java.sql.RowIdLifetime
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("ROWID_UNSUPPORTED")
#undef ROWID_UNSUPPORTED
#pragma push_macro("ROWID_VALID_FOREVER")
#undef ROWID_VALID_FOREVER
#pragma push_macro("ROWID_VALID_OTHER")
#undef ROWID_VALID_OTHER
#pragma push_macro("ROWID_VALID_SESSION")
#undef ROWID_VALID_SESSION
#pragma push_macro("ROWID_VALID_TRANSACTION")
#undef ROWID_VALID_TRANSACTION

namespace java {
	namespace sql {

class $export RowIdLifetime : public ::java::lang::Enum {
	$class(RowIdLifetime, 0, ::java::lang::Enum)
public:
	RowIdLifetime();
	static $Array<::java::sql::RowIdLifetime>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::sql::RowIdLifetime* valueOf($String* name);
	static $Array<::java::sql::RowIdLifetime>* values();
	static ::java::sql::RowIdLifetime* ROWID_UNSUPPORTED;
	static ::java::sql::RowIdLifetime* ROWID_VALID_OTHER;
	static ::java::sql::RowIdLifetime* ROWID_VALID_SESSION;
	static ::java::sql::RowIdLifetime* ROWID_VALID_TRANSACTION;
	static ::java::sql::RowIdLifetime* ROWID_VALID_FOREVER;
	static $Array<::java::sql::RowIdLifetime>* $VALUES;
};

	} // sql
} // java

#pragma pop_macro("ROWID_UNSUPPORTED")
#pragma pop_macro("ROWID_VALID_FOREVER")
#pragma pop_macro("ROWID_VALID_OTHER")
#pragma pop_macro("ROWID_VALID_SESSION")
#pragma pop_macro("ROWID_VALID_TRANSACTION")

#endif // _java_sql_RowIdLifetime_h_
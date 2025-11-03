#ifndef _java_sql_ClientInfoStatus_h_
#define _java_sql_ClientInfoStatus_h_
//$ class java.sql.ClientInfoStatus
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("REASON_UNKNOWN")
#undef REASON_UNKNOWN
#pragma push_macro("REASON_UNKNOWN_PROPERTY")
#undef REASON_UNKNOWN_PROPERTY
#pragma push_macro("REASON_VALUE_INVALID")
#undef REASON_VALUE_INVALID
#pragma push_macro("REASON_VALUE_TRUNCATED")
#undef REASON_VALUE_TRUNCATED

namespace java {
	namespace sql {

class $import ClientInfoStatus : public ::java::lang::Enum {
	$class(ClientInfoStatus, 0, ::java::lang::Enum)
public:
	ClientInfoStatus();
	static $Array<::java::sql::ClientInfoStatus>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::sql::ClientInfoStatus* valueOf($String* name);
	static $Array<::java::sql::ClientInfoStatus>* values();
	static ::java::sql::ClientInfoStatus* REASON_UNKNOWN;
	static ::java::sql::ClientInfoStatus* REASON_UNKNOWN_PROPERTY;
	static ::java::sql::ClientInfoStatus* REASON_VALUE_INVALID;
	static ::java::sql::ClientInfoStatus* REASON_VALUE_TRUNCATED;
	static $Array<::java::sql::ClientInfoStatus>* $VALUES;
};

	} // sql
} // java

#pragma pop_macro("REASON_UNKNOWN")
#pragma pop_macro("REASON_UNKNOWN_PROPERTY")
#pragma pop_macro("REASON_VALUE_INVALID")
#pragma pop_macro("REASON_VALUE_TRUNCATED")

#endif // _java_sql_ClientInfoStatus_h_
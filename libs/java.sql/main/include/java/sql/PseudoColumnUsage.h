#ifndef _java_sql_PseudoColumnUsage_h_
#define _java_sql_PseudoColumnUsage_h_
//$ class java.sql.PseudoColumnUsage
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("NO_USAGE_RESTRICTIONS")
#undef NO_USAGE_RESTRICTIONS
#pragma push_macro("SELECT_LIST_ONLY")
#undef SELECT_LIST_ONLY
#pragma push_macro("USAGE_UNKNOWN")
#undef USAGE_UNKNOWN
#pragma push_macro("WHERE_CLAUSE_ONLY")
#undef WHERE_CLAUSE_ONLY

namespace java {
	namespace sql {

class $import PseudoColumnUsage : public ::java::lang::Enum {
	$class(PseudoColumnUsage, 0, ::java::lang::Enum)
public:
	PseudoColumnUsage();
	static $Array<::java::sql::PseudoColumnUsage>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::java::sql::PseudoColumnUsage* valueOf($String* name);
	static $Array<::java::sql::PseudoColumnUsage>* values();
	static ::java::sql::PseudoColumnUsage* SELECT_LIST_ONLY;
	static ::java::sql::PseudoColumnUsage* WHERE_CLAUSE_ONLY;
	static ::java::sql::PseudoColumnUsage* NO_USAGE_RESTRICTIONS;
	static ::java::sql::PseudoColumnUsage* USAGE_UNKNOWN;
	static $Array<::java::sql::PseudoColumnUsage>* $VALUES;
};

	} // sql
} // java

#pragma pop_macro("NO_USAGE_RESTRICTIONS")
#pragma pop_macro("SELECT_LIST_ONLY")
#pragma pop_macro("USAGE_UNKNOWN")
#pragma pop_macro("WHERE_CLAUSE_ONLY")

#endif // _java_sql_PseudoColumnUsage_h_
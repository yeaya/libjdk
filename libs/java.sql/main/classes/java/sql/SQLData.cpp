#include <java/sql/SQLData.h>
#include <java/sql/SQLInput.h>
#include <java/sql/SQLOutput.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SQLInput = ::java::sql::SQLInput;
using $SQLOutput = ::java::sql::SQLOutput;

namespace java {
	namespace sql {

$Class* SQLData::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getSQLTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLData, getSQLTypeName, $String*), "java.sql.SQLException"},
		{"readSQL", "(Ljava/sql/SQLInput;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLData, readSQL, void, $SQLInput*, $String*), "java.sql.SQLException"},
		{"writeSQL", "(Ljava/sql/SQLOutput;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SQLData, writeSQL, void, $SQLOutput*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.sql.SQLData",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SQLData, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SQLData);
	});
	return class$;
}

$Class* SQLData::class$ = nullptr;

	} // sql
} // java
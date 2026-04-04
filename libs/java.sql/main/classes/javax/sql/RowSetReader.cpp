#include <javax/sql/RowSetReader.h>
#include <javax/sql/RowSetInternal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowSetInternal = ::javax::sql::RowSetInternal;

namespace javax {
	namespace sql {

$Class* RowSetReader::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"readData", "(Ljavax/sql/RowSetInternal;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetReader, readData, void, $RowSetInternal*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.RowSetReader",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RowSetReader, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowSetReader);
	});
	return class$;
}

$Class* RowSetReader::class$ = nullptr;

	} // sql
} // javax
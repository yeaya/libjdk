#include <javax/sql/RowSetWriter.h>
#include <javax/sql/RowSetInternal.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowSetInternal = ::javax::sql::RowSetInternal;

namespace javax {
	namespace sql {

$Class* RowSetWriter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"writeData", "(Ljavax/sql/RowSetInternal;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetWriter, writeData, bool, $RowSetInternal*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.RowSetWriter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RowSetWriter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowSetWriter);
	});
	return class$;
}

$Class* RowSetWriter::class$ = nullptr;

	} // sql
} // javax
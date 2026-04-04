#include <javax/sql/RowSetInternal.h>
#include <java/sql/Connection.h>
#include <java/sql/ResultSet.h>
#include <javax/sql/RowSetMetaData.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Connection = ::java::sql::Connection;
using $ResultSet = ::java::sql::ResultSet;
using $RowSetMetaData = ::javax::sql::RowSetMetaData;

namespace javax {
	namespace sql {

$Class* RowSetInternal::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getConnection", "()Ljava/sql/Connection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetInternal, getConnection, $Connection*), "java.sql.SQLException"},
		{"getOriginal", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetInternal, getOriginal, $ResultSet*), "java.sql.SQLException"},
		{"getOriginalRow", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetInternal, getOriginalRow, $ResultSet*), "java.sql.SQLException"},
		{"getParams", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetInternal, getParams, $ObjectArray*), "java.sql.SQLException"},
		{"setMetaData", "(Ljavax/sql/RowSetMetaData;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetInternal, setMetaData, void, $RowSetMetaData*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.RowSetInternal",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(RowSetInternal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowSetInternal);
	});
	return class$;
}

$Class* RowSetInternal::class$ = nullptr;

	} // sql
} // javax
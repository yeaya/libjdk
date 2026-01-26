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

$MethodInfo _RowSetInternal_MethodInfo_[] = {
	{"getConnection", "()Ljava/sql/Connection;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetInternal, getConnection, $Connection*), "java.sql.SQLException"},
	{"getOriginal", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetInternal, getOriginal, $ResultSet*), "java.sql.SQLException"},
	{"getOriginalRow", "()Ljava/sql/ResultSet;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetInternal, getOriginalRow, $ResultSet*), "java.sql.SQLException"},
	{"getParams", "()[Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetInternal, getParams, $ObjectArray*), "java.sql.SQLException"},
	{"setMetaData", "(Ljavax/sql/RowSetMetaData;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetInternal, setMetaData, void, $RowSetMetaData*), "java.sql.SQLException"},
	{}
};

$ClassInfo _RowSetInternal_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.RowSetInternal",
	nullptr,
	nullptr,
	nullptr,
	_RowSetInternal_MethodInfo_
};

$Object* allocate$RowSetInternal($Class* clazz) {
	return $of($alloc(RowSetInternal));
}

$Class* RowSetInternal::load$($String* name, bool initialize) {
	$loadClass(RowSetInternal, name, initialize, &_RowSetInternal_ClassInfo_, allocate$RowSetInternal);
	return class$;
}

$Class* RowSetInternal::class$ = nullptr;

	} // sql
} // javax
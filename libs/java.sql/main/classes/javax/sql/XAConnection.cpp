#include <javax/sql/XAConnection.h>
#include <javax/transaction/xa/XAResource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XAResource = ::javax::transaction::xa::XAResource;

namespace javax {
	namespace sql {

$Class* XAConnection::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getXAResource", "()Ljavax/transaction/xa/XAResource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAConnection, getXAResource, $XAResource*), "java.sql.SQLException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.XAConnection",
		nullptr,
		"javax.sql.PooledConnection",
		nullptr,
		methodInfos$$
	};
	$loadClass(XAConnection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XAConnection);
	});
	return class$;
}

$Class* XAConnection::class$ = nullptr;

	} // sql
} // javax
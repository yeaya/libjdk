#include <javax/sql/XAConnection.h>

#include <javax/transaction/xa/XAResource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XAResource = ::javax::transaction::xa::XAResource;

namespace javax {
	namespace sql {

$MethodInfo _XAConnection_MethodInfo_[] = {
	{"getXAResource", "()Ljavax/transaction/xa/XAResource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XAConnection, getXAResource, $XAResource*), "java.sql.SQLException"},
	{}
};

$ClassInfo _XAConnection_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.XAConnection",
	nullptr,
	"javax.sql.PooledConnection",
	nullptr,
	_XAConnection_MethodInfo_
};

$Object* allocate$XAConnection($Class* clazz) {
	return $of($alloc(XAConnection));
}

$Class* XAConnection::load$($String* name, bool initialize) {
	$loadClass(XAConnection, name, initialize, &_XAConnection_ClassInfo_, allocate$XAConnection);
	return class$;
}

$Class* XAConnection::class$ = nullptr;

	} // sql
} // javax
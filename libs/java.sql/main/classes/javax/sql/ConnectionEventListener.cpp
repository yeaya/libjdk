#include <javax/sql/ConnectionEventListener.h>

#include <javax/sql/ConnectionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sql {

$MethodInfo _ConnectionEventListener_MethodInfo_[] = {
	{"connectionClosed", "(Ljavax/sql/ConnectionEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"connectionErrorOccurred", "(Ljavax/sql/ConnectionEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ConnectionEventListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.ConnectionEventListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_ConnectionEventListener_MethodInfo_
};

$Object* allocate$ConnectionEventListener($Class* clazz) {
	return $of($alloc(ConnectionEventListener));
}

$Class* ConnectionEventListener::load$($String* name, bool initialize) {
	$loadClass(ConnectionEventListener, name, initialize, &_ConnectionEventListener_ClassInfo_, allocate$ConnectionEventListener);
	return class$;
}

$Class* ConnectionEventListener::class$ = nullptr;

	} // sql
} // javax
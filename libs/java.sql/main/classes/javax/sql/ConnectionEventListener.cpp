#include <javax/sql/ConnectionEventListener.h>
#include <javax/sql/ConnectionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ConnectionEvent = ::javax::sql::ConnectionEvent;

namespace javax {
	namespace sql {

$Class* ConnectionEventListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"connectionClosed", "(Ljavax/sql/ConnectionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionEventListener, connectionClosed, void, $ConnectionEvent*)},
		{"connectionErrorOccurred", "(Ljavax/sql/ConnectionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ConnectionEventListener, connectionErrorOccurred, void, $ConnectionEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.ConnectionEventListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ConnectionEventListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConnectionEventListener);
	});
	return class$;
}

$Class* ConnectionEventListener::class$ = nullptr;

	} // sql
} // javax
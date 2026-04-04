#include <javax/sql/StatementEventListener.h>
#include <javax/sql/StatementEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StatementEvent = ::javax::sql::StatementEvent;

namespace javax {
	namespace sql {

$Class* StatementEventListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"statementClosed", "(Ljavax/sql/StatementEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StatementEventListener, statementClosed, void, $StatementEvent*)},
		{"statementErrorOccurred", "(Ljavax/sql/StatementEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StatementEventListener, statementErrorOccurred, void, $StatementEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.StatementEventListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(StatementEventListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StatementEventListener);
	});
	return class$;
}

$Class* StatementEventListener::class$ = nullptr;

	} // sql
} // javax
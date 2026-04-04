#include <javax/sql/RowSetListener.h>
#include <javax/sql/RowSetEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RowSetEvent = ::javax::sql::RowSetEvent;

namespace javax {
	namespace sql {

$Class* RowSetListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"cursorMoved", "(Ljavax/sql/RowSetEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetListener, cursorMoved, void, $RowSetEvent*)},
		{"rowChanged", "(Ljavax/sql/RowSetEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetListener, rowChanged, void, $RowSetEvent*)},
		{"rowSetChanged", "(Ljavax/sql/RowSetEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RowSetListener, rowSetChanged, void, $RowSetEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sql.RowSetListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(RowSetListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowSetListener);
	});
	return class$;
}

$Class* RowSetListener::class$ = nullptr;

	} // sql
} // javax
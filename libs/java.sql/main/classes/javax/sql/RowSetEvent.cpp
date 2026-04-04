#include <javax/sql/RowSetEvent.h>
#include <java/util/EventObject.h>
#include <javax/sql/RowSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $RowSet = ::javax::sql::RowSet;

namespace javax {
	namespace sql {

void RowSetEvent::init$($RowSet* source) {
	$EventObject::init$(source);
}

RowSetEvent::RowSetEvent() {
}

$Class* RowSetEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(RowSetEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sql/RowSet;)V", nullptr, $PUBLIC, $method(RowSetEvent, init$, void, $RowSet*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sql.RowSetEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RowSetEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RowSetEvent);
	});
	return class$;
}

$Class* RowSetEvent::class$ = nullptr;

	} // sql
} // javax
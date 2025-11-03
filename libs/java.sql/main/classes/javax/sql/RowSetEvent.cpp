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

$FieldInfo _RowSetEvent_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(RowSetEvent, serialVersionUID)},
	{}
};

$MethodInfo _RowSetEvent_MethodInfo_[] = {
	{"<init>", "(Ljavax/sql/RowSet;)V", nullptr, $PUBLIC, $method(static_cast<void(RowSetEvent::*)($RowSet*)>(&RowSetEvent::init$))},
	{}
};

$ClassInfo _RowSetEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.sql.RowSetEvent",
	"java.util.EventObject",
	nullptr,
	_RowSetEvent_FieldInfo_,
	_RowSetEvent_MethodInfo_
};

$Object* allocate$RowSetEvent($Class* clazz) {
	return $of($alloc(RowSetEvent));
}

void RowSetEvent::init$($RowSet* source) {
	$EventObject::init$(source);
}

RowSetEvent::RowSetEvent() {
}

$Class* RowSetEvent::load$($String* name, bool initialize) {
	$loadClass(RowSetEvent, name, initialize, &_RowSetEvent_ClassInfo_, allocate$RowSetEvent);
	return class$;
}

$Class* RowSetEvent::class$ = nullptr;

	} // sql
} // javax
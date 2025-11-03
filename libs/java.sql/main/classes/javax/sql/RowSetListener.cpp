#include <javax/sql/RowSetListener.h>

#include <javax/sql/RowSetEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $RowSetEvent = ::javax::sql::RowSetEvent;

namespace javax {
	namespace sql {

$MethodInfo _RowSetListener_MethodInfo_[] = {
	{"cursorMoved", "(Ljavax/sql/RowSetEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"rowChanged", "(Ljavax/sql/RowSetEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"rowSetChanged", "(Ljavax/sql/RowSetEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _RowSetListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sql.RowSetListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_RowSetListener_MethodInfo_
};

$Object* allocate$RowSetListener($Class* clazz) {
	return $of($alloc(RowSetListener));
}

$Class* RowSetListener::load$($String* name, bool initialize) {
	$loadClass(RowSetListener, name, initialize, &_RowSetListener_ClassInfo_, allocate$RowSetListener);
	return class$;
}

$Class* RowSetListener::class$ = nullptr;

	} // sql
} // javax
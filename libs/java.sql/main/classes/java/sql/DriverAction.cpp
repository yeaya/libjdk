#include <java/sql/DriverAction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace sql {

$MethodInfo _DriverAction_MethodInfo_[] = {
	{"deregister", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DriverAction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.sql.DriverAction",
	nullptr,
	nullptr,
	nullptr,
	_DriverAction_MethodInfo_
};

$Object* allocate$DriverAction($Class* clazz) {
	return $of($alloc(DriverAction));
}

$Class* DriverAction::load$($String* name, bool initialize) {
	$loadClass(DriverAction, name, initialize, &_DriverAction_ClassInfo_, allocate$DriverAction);
	return class$;
}

$Class* DriverAction::class$ = nullptr;

	} // sql
} // java
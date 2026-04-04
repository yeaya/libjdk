#include <javax/management/QueryExp.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {

$Class* QueryExp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljavax/management/ObjectName;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QueryExp, apply, bool, $ObjectName*), "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
		{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QueryExp, setMBeanServer, void, $MBeanServer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.QueryExp",
		nullptr,
		"java.io.Serializable",
		nullptr,
		methodInfos$$
	};
	$loadClass(QueryExp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(QueryExp);
	});
	return class$;
}

$Class* QueryExp::class$ = nullptr;

	} // management
} // javax
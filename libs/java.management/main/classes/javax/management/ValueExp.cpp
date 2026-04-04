#include <javax/management/ValueExp.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServer = ::javax::management::MBeanServer;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {

$Class* ValueExp::load$($String* name, bool initialize) {
	$CompoundAttribute setMBeanServermethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljavax/management/ObjectName;)Ljavax/management/ValueExp;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ValueExp, apply, ValueExp*, $ObjectName*), "javax.management.BadStringOperationException,javax.management.BadBinaryOpValueExpException,javax.management.BadAttributeValueExpException,javax.management.InvalidApplicationException"},
		{"setMBeanServer", "(Ljavax/management/MBeanServer;)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, $virtualMethod(ValueExp, setMBeanServer, void, $MBeanServer*), nullptr, nullptr, setMBeanServermethodAnnotations$$},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.ValueExp",
		nullptr,
		"java.io.Serializable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ValueExp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ValueExp);
	});
	return class$;
}

$Class* ValueExp::class$ = nullptr;

	} // management
} // javax
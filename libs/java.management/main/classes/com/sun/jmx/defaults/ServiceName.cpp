#include <com/sun/jmx/defaults/ServiceName.h>
#include <jcpp.h>

#undef DELEGATE
#undef DOMAIN
#undef JMX_IMPL_NAME
#undef JMX_IMPL_VENDOR
#undef JMX_SPEC_NAME
#undef JMX_SPEC_VENDOR
#undef JMX_SPEC_VERSION
#undef MLET

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jmx {
			namespace defaults {

$String* ServiceName::DELEGATE = nullptr;
$String* ServiceName::MLET = nullptr;
$String* ServiceName::DOMAIN = nullptr;
$String* ServiceName::JMX_SPEC_NAME = nullptr;
$String* ServiceName::JMX_SPEC_VERSION = nullptr;
$String* ServiceName::JMX_SPEC_VENDOR = nullptr;
$String* ServiceName::JMX_IMPL_NAME = nullptr;
$String* ServiceName::JMX_IMPL_VENDOR = nullptr;

void ServiceName::init$() {
}

ServiceName::ServiceName() {
}

void ServiceName::clinit$($Class* clazz) {
	$assignStatic(ServiceName::DELEGATE, "JMImplementation:type=MBeanServerDelegate"_s);
	$assignStatic(ServiceName::MLET, "type=MLet"_s);
	$assignStatic(ServiceName::DOMAIN, "DefaultDomain"_s);
	$assignStatic(ServiceName::JMX_SPEC_NAME, "Java Management Extensions"_s);
	$assignStatic(ServiceName::JMX_SPEC_VERSION, "1.4"_s);
	$assignStatic(ServiceName::JMX_SPEC_VENDOR, "Oracle Corporation"_s);
	$assignStatic(ServiceName::JMX_IMPL_NAME, "JMX"_s);
	$assignStatic(ServiceName::JMX_IMPL_VENDOR, "Oracle Corporation"_s);
}

$Class* ServiceName::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DELEGATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceName, DELEGATE)},
		{"MLET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceName, MLET)},
		{"DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceName, DOMAIN)},
		{"JMX_SPEC_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceName, JMX_SPEC_NAME)},
		{"JMX_SPEC_VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceName, JMX_SPEC_VERSION)},
		{"JMX_SPEC_VENDOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceName, JMX_SPEC_VENDOR)},
		{"JMX_IMPL_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceName, JMX_IMPL_NAME)},
		{"JMX_IMPL_VENDOR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ServiceName, JMX_IMPL_VENDOR)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ServiceName, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jmx.defaults.ServiceName",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ServiceName, name, initialize, &classInfo$$, ServiceName::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ServiceName);
	});
	return class$;
}

$Class* ServiceName::class$ = nullptr;

			} // defaults
		} // jmx
	} // sun
} // com
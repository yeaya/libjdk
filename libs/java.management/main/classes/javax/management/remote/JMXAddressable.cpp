#include <javax/management/remote/JMXAddressable.h>
#include <javax/management/remote/JMXServiceURL.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMXServiceURL = ::javax::management::remote::JMXServiceURL;

namespace javax {
	namespace management {
		namespace remote {

$Class* JMXAddressable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getAddress", "()Ljavax/management/remote/JMXServiceURL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(JMXAddressable, getAddress, $JMXServiceURL*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.remote.JMXAddressable",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JMXAddressable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JMXAddressable);
	});
	return class$;
}

$Class* JMXAddressable::class$ = nullptr;

		} // remote
	} // management
} // javax
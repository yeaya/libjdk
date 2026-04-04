#include <java/beans/ParameterDescriptor.h>
#include <java/beans/FeatureDescriptor.h>
#include <jcpp.h>

using $FeatureDescriptor = ::java::beans::FeatureDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

void ParameterDescriptor::init$() {
	$FeatureDescriptor::init$();
}

void ParameterDescriptor::init$(ParameterDescriptor* old) {
	$FeatureDescriptor::init$(old);
}

ParameterDescriptor::ParameterDescriptor() {
}

$Class* ParameterDescriptor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ParameterDescriptor, init$, void)},
		{"<init>", "(Ljava/beans/ParameterDescriptor;)V", nullptr, 0, $method(ParameterDescriptor, init$, void, ParameterDescriptor*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.beans.ParameterDescriptor",
		"java.beans.FeatureDescriptor",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ParameterDescriptor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParameterDescriptor);
	});
	return class$;
}

$Class* ParameterDescriptor::class$ = nullptr;

	} // beans
} // java
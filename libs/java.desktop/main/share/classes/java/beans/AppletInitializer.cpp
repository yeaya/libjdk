#include <java/beans/AppletInitializer.h>
#include <java/applet/Applet.h>
#include <java/beans/beancontext/BeanContext.h>
#include <jcpp.h>

using $Applet = ::java::applet::Applet;
using $BeanContext = ::java::beans::beancontext::BeanContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace java {
	namespace beans {

$Class* AppletInitializer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"activate", "(Ljava/applet/Applet;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletInitializer, activate, void, $Applet*)},
		{"initialize", "(Ljava/applet/Applet;Ljava/beans/beancontext/BeanContext;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletInitializer, initialize, void, $Applet*, $BeanContext*)},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "9"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.AppletInitializer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AppletInitializer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppletInitializer);
	});
	return class$;
}

$Class* AppletInitializer::class$ = nullptr;

	} // beans
} // java
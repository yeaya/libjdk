#include <java/applet/AppletStub.h>
#include <java/applet/AppletContext.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $AppletContext = ::java::applet::AppletContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $URL = ::java::net::URL;

namespace java {
	namespace applet {

$Class* AppletStub::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"appletResize", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletStub, appletResize, void, int32_t, int32_t)},
		{"getAppletContext", "()Ljava/applet/AppletContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletStub, getAppletContext, $AppletContext*)},
		{"getCodeBase", "()Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletStub, getCodeBase, $URL*)},
		{"getDocumentBase", "()Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletStub, getDocumentBase, $URL*)},
		{"getParameter", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletStub, getParameter, $String*, $String*)},
		{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletStub, isActive, bool)},
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
		"java.applet.AppletStub",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(AppletStub, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AppletStub);
	});
	return class$;
}

$Class* AppletStub::class$ = nullptr;

	} // applet
} // java
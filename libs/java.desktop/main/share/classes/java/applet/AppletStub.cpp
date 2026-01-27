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

$NamedAttribute AppletStub_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _AppletStub_Annotations_[] = {
	{"Ljava/lang/Deprecated;", AppletStub_Attribute_var$0},
	{}
};

$MethodInfo _AppletStub_MethodInfo_[] = {
	{"appletResize", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletStub, appletResize, void, int32_t, int32_t)},
	{"getAppletContext", "()Ljava/applet/AppletContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletStub, getAppletContext, $AppletContext*)},
	{"getCodeBase", "()Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletStub, getCodeBase, $URL*)},
	{"getDocumentBase", "()Ljava/net/URL;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletStub, getDocumentBase, $URL*)},
	{"getParameter", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletStub, getParameter, $String*, $String*)},
	{"isActive", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AppletStub, isActive, bool)},
	{}
};

$ClassInfo _AppletStub_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.applet.AppletStub",
	nullptr,
	nullptr,
	nullptr,
	_AppletStub_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_AppletStub_Annotations_
};

$Object* allocate$AppletStub($Class* clazz) {
	return $of($alloc(AppletStub));
}

$Class* AppletStub::load$($String* name, bool initialize) {
	$loadClass(AppletStub, name, initialize, &_AppletStub_ClassInfo_, allocate$AppletStub);
	return class$;
}

$Class* AppletStub::class$ = nullptr;

	} // applet
} // java
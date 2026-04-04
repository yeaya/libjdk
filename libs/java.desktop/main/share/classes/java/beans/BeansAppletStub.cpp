#include <java/beans/BeansAppletStub.h>
#include <java/applet/Applet.h>
#include <java/applet/AppletContext.h>
#include <java/net/URL.h>
#include <jcpp.h>

using $Applet = ::java::applet::Applet;
using $AppletContext = ::java::applet::AppletContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $URL = ::java::net::URL;

namespace java {
	namespace beans {

void BeansAppletStub::init$($Applet* target, $AppletContext* context, $URL* codeBase, $URL* docBase) {
	$set(this, target, target);
	$set(this, context, context);
	$set(this, codeBase, codeBase);
	$set(this, docBase, docBase);
}

bool BeansAppletStub::isActive() {
	return this->active;
}

$URL* BeansAppletStub::getDocumentBase() {
	return this->docBase;
}

$URL* BeansAppletStub::getCodeBase() {
	return this->codeBase;
}

$String* BeansAppletStub::getParameter($String* name) {
	return nullptr;
}

$AppletContext* BeansAppletStub::getAppletContext() {
	return this->context;
}

void BeansAppletStub::appletResize(int32_t width, int32_t height) {
}

BeansAppletStub::BeansAppletStub() {
}

$Class* BeansAppletStub::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"active", "Z", nullptr, $TRANSIENT, $field(BeansAppletStub, active)},
		{"target", "Ljava/applet/Applet;", nullptr, $TRANSIENT, $field(BeansAppletStub, target)},
		{"context", "Ljava/applet/AppletContext;", nullptr, $TRANSIENT, $field(BeansAppletStub, context)},
		{"codeBase", "Ljava/net/URL;", nullptr, $TRANSIENT, $field(BeansAppletStub, codeBase)},
		{"docBase", "Ljava/net/URL;", nullptr, $TRANSIENT, $field(BeansAppletStub, docBase)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/applet/Applet;Ljava/applet/AppletContext;Ljava/net/URL;Ljava/net/URL;)V", nullptr, 0, $method(BeansAppletStub, init$, void, $Applet*, $AppletContext*, $URL*, $URL*)},
		{"appletResize", "(II)V", nullptr, $PUBLIC, $virtualMethod(BeansAppletStub, appletResize, void, int32_t, int32_t)},
		{"getAppletContext", "()Ljava/applet/AppletContext;", nullptr, $PUBLIC, $virtualMethod(BeansAppletStub, getAppletContext, $AppletContext*)},
		{"getCodeBase", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(BeansAppletStub, getCodeBase, $URL*)},
		{"getDocumentBase", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(BeansAppletStub, getDocumentBase, $URL*)},
		{"getParameter", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BeansAppletStub, getParameter, $String*, $String*)},
		{"isActive", "()Z", nullptr, $PUBLIC, $virtualMethod(BeansAppletStub, isActive, bool)},
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
		$ACC_SUPER,
		"java.beans.BeansAppletStub",
		"java.lang.Object",
		"java.applet.AppletStub",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(BeansAppletStub, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeansAppletStub);
	});
	return class$;
}

$Class* BeansAppletStub::class$ = nullptr;

	} // beans
} // java
#include <javax/accessibility/AccessibilityProvider.h>

#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/security/BasicPermission.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $BasicPermission = ::java::security::BasicPermission;
using $Permission = ::java::security::Permission;

namespace javax {
	namespace accessibility {

$MethodInfo _AccessibilityProvider_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(AccessibilityProvider, init$, void)},
	{"<init>", "(Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(AccessibilityProvider, init$, void, $Void*)},
	{"activate", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibilityProvider, activate, void)},
	{"checkPermission", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $staticMethod(AccessibilityProvider, checkPermission, $Void*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AccessibilityProvider, getName, $String*)},
	{}
};

$ClassInfo _AccessibilityProvider_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.accessibility.AccessibilityProvider",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AccessibilityProvider_MethodInfo_
};

$Object* allocate$AccessibilityProvider($Class* clazz) {
	return $of($alloc(AccessibilityProvider));
}

void AccessibilityProvider::init$() {
	AccessibilityProvider::init$($(checkPermission()));
}

void AccessibilityProvider::init$($Void* ignore) {
}

$Void* AccessibilityProvider::checkPermission() {
	$useLocalCurrentObjectStackCache();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission($$new($RuntimePermission, "accessibilityProvider"_s));
	}
	return nullptr;
}

AccessibilityProvider::AccessibilityProvider() {
}

$Class* AccessibilityProvider::load$($String* name, bool initialize) {
	$loadClass(AccessibilityProvider, name, initialize, &_AccessibilityProvider_ClassInfo_, allocate$AccessibilityProvider);
	return class$;
}

$Class* AccessibilityProvider::class$ = nullptr;

	} // accessibility
} // javax
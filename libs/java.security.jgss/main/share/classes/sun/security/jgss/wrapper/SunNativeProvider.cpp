#include <sun/security/jgss/wrapper/SunNativeProvider.h>
#include <java/security/AccessController.h>
#include <java/security/Provider.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/security/action/PutAllAction.h>
#include <sun/security/jgss/wrapper/SunNativeProvider$1.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef DEBUG
#undef INFO
#undef INSTANCE
#undef MECH_MAP
#undef MF_CLASS
#undef NAME
#undef PROVIDER_VER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AccessController = ::java::security::AccessController;
using $Provider = ::java::security::Provider;
using $HashMap = ::java::util::HashMap;
using $PutAllAction = ::sun::security::action::PutAllAction;
using $SunNativeProvider$1 = ::sun::security::jgss::wrapper::SunNativeProvider$1;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace sun {
	namespace security {
		namespace jgss {
			namespace wrapper {

$String* SunNativeProvider::NAME = nullptr;
$String* SunNativeProvider::INFO = nullptr;
$String* SunNativeProvider::MF_CLASS = nullptr;
bool SunNativeProvider::DEBUG = false;
$HashMap* SunNativeProvider::MECH_MAP = nullptr;
$Provider* SunNativeProvider::INSTANCE = nullptr;

void SunNativeProvider::debug($String* message) {
	$init(SunNativeProvider);
	if (SunNativeProvider::DEBUG) {
		if (message == nullptr) {
			$throwNew($NullPointerException);
		}
		$nc($System::out)->println($$str({SunNativeProvider::NAME, ": "_s, message}));
	}
}

void SunNativeProvider::init$() {
	$beforeCallerSensitive();
	$init($SecurityConstants);
	$Provider::init$(SunNativeProvider::NAME, $SecurityConstants::PROVIDER_VER, SunNativeProvider::INFO);
	if (SunNativeProvider::MECH_MAP != nullptr) {
		$AccessController::doPrivileged($$new($PutAllAction, this, SunNativeProvider::MECH_MAP));
	}
}

void SunNativeProvider::clinit$($Class* clazz) {
	$assignStatic(SunNativeProvider::NAME, "SunNativeGSS"_s);
	$assignStatic(SunNativeProvider::INFO, "Sun Native GSS provider"_s);
	$assignStatic(SunNativeProvider::MF_CLASS, "sun.security.jgss.wrapper.NativeGSSFactory"_s);
	$beforeCallerSensitive();
	$assignStatic(SunNativeProvider::MECH_MAP, $cast($HashMap, $AccessController::doPrivileged($$new($SunNativeProvider$1))));
	$assignStatic(SunNativeProvider::INSTANCE, $new(SunNativeProvider));
}

SunNativeProvider::SunNativeProvider() {
}

$Class* SunNativeProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunNativeProvider, serialVersionUID)},
		{"NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunNativeProvider, NAME)},
		{"INFO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunNativeProvider, INFO)},
		{"MF_CLASS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunNativeProvider, MF_CLASS)},
		{"DEBUG", "Z", nullptr, $STATIC, $staticField(SunNativeProvider, DEBUG)},
		{"MECH_MAP", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(SunNativeProvider, MECH_MAP)},
		{"INSTANCE", "Ljava/security/Provider;", nullptr, $STATIC | $FINAL, $staticField(SunNativeProvider, INSTANCE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SunNativeProvider, init$, void)},
		{"debug", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(SunNativeProvider, debug, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jgss.wrapper.SunNativeProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.jgss.wrapper.SunNativeProvider",
		"java.security.Provider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.jgss.wrapper.SunNativeProvider$1"
	};
	$loadClass(SunNativeProvider, name, initialize, &classInfo$$, SunNativeProvider::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SunNativeProvider));
	});
	return class$;
}

$Class* SunNativeProvider::class$ = nullptr;

			} // wrapper
		} // jgss
	} // security
} // sun
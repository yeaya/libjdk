#include <sun/security/jgss/SunProvider.h>
#include <java/security/AccessController.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <sun/security/jgss/SunProvider$1.h>
#include <sun/security/util/SecurityConstants.h>
#include <jcpp.h>

#undef INFO
#undef PROVIDER_VER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $SunProvider$1 = ::sun::security::jgss::SunProvider$1;
using $SecurityConstants = ::sun::security::util::SecurityConstants;

namespace sun {
	namespace security {
		namespace jgss {

$String* SunProvider::INFO = nullptr;

void SunProvider::access$100(SunProvider* x0, $Provider$Service* x1) {
	$init(SunProvider);
	$nc(x0)->putService(x1);
}

void SunProvider::access$000(SunProvider* x0, $Provider$Service* x1) {
	$init(SunProvider);
	$nc(x0)->putService(x1);
}

void SunProvider::init$() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$init($SecurityConstants);
	$Provider::init$("SunJGSS"_s, $SecurityConstants::PROVIDER_VER, SunProvider::INFO);
	$var($Provider, p, this);
	$AccessController::doPrivileged($$new($SunProvider$1, this, p));
}

SunProvider::SunProvider() {
}

void SunProvider::clinit$($Class* clazz) {
	$assignStatic(SunProvider::INFO, "Sun (Kerberos v5, SPNEGO)"_s);
}

$Class* SunProvider::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SunProvider, serialVersionUID)},
		{"INFO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SunProvider, INFO)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SunProvider, init$, void)},
		{"access$000", "(Lsun/security/jgss/SunProvider;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $staticMethod(SunProvider, access$000, void, SunProvider*, $Provider$Service*)},
		{"access$100", "(Lsun/security/jgss/SunProvider;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $staticMethod(SunProvider, access$100, void, SunProvider*, $Provider$Service*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.security.jgss.SunProvider$ProviderService", "sun.security.jgss.SunProvider", "ProviderService", $PRIVATE | $STATIC | $FINAL},
		{"sun.security.jgss.SunProvider$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.security.jgss.SunProvider",
		"java.security.Provider",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.security.jgss.SunProvider$ProviderService,sun.security.jgss.SunProvider$1"
	};
	$loadClass(SunProvider, name, initialize, &classInfo$$, SunProvider::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SunProvider));
	});
	return class$;
}

$Class* SunProvider::class$ = nullptr;

		} // jgss
	} // security
} // sun
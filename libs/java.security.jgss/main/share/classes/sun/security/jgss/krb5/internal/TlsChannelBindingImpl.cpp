#include <sun/security/jgss/krb5/internal/TlsChannelBindingImpl.h>
#include <org/ietf/jgss/ChannelBinding.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChannelBinding = ::org::ietf::jgss::ChannelBinding;

namespace sun {
	namespace security {
		namespace jgss {
			namespace krb5 {
				namespace internal {

void TlsChannelBindingImpl::init$($bytes* appData) {
	$ChannelBinding::init$(appData);
}

TlsChannelBindingImpl::TlsChannelBindingImpl() {
}

$Class* TlsChannelBindingImpl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, $PUBLIC, $method(TlsChannelBindingImpl, init$, void, $bytes*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.security.jgss.krb5.internal.TlsChannelBindingImpl",
		"org.ietf.jgss.ChannelBinding",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TlsChannelBindingImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TlsChannelBindingImpl);
	});
	return class$;
}

$Class* TlsChannelBindingImpl::class$ = nullptr;

				} // internal
			} // krb5
		} // jgss
	} // security
} // sun
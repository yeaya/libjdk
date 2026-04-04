#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfoFactory$UnmarshalContext.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfoFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

void DOMKeyInfoFactory$UnmarshalContext::init$() {
	$DOMCryptoContext::init$();
}

DOMKeyInfoFactory$UnmarshalContext::DOMKeyInfoFactory$UnmarshalContext() {
}

$Class* DOMKeyInfoFactory$UnmarshalContext::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DOMKeyInfoFactory$UnmarshalContext, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory$UnmarshalContext", "org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory", "UnmarshalContext", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory$UnmarshalContext",
		"javax.xml.crypto.dom.DOMCryptoContext",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory"
	};
	$loadClass(DOMKeyInfoFactory$UnmarshalContext, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DOMKeyInfoFactory$UnmarshalContext);
	});
	return class$;
}

$Class* DOMKeyInfoFactory$UnmarshalContext::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org
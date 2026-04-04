#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer11_OmitComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315.h>
#include <jcpp.h>

using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $Canonicalizer20010315 = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {

void Canonicalizer11_OmitComments::init$() {
	$Canonicalizer20010315::init$(false, true);
}

$String* Canonicalizer11_OmitComments::engineGetURI() {
	$init($Canonicalizer);
	return $Canonicalizer::ALGO_ID_C14N11_OMIT_COMMENTS;
}

Canonicalizer11_OmitComments::Canonicalizer11_OmitComments() {
}

$Class* Canonicalizer11_OmitComments::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Canonicalizer11_OmitComments, init$, void)},
		{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Canonicalizer11_OmitComments, engineGetURI, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer11_OmitComments",
		"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Canonicalizer11_OmitComments, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Canonicalizer11_OmitComments);
	});
	return class$;
}

$Class* Canonicalizer11_OmitComments::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
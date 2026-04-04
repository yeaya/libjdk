#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315OmitComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315.h>
#include <jcpp.h>

#undef ALGO_ID_C14N_OMIT_COMMENTS

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

void Canonicalizer20010315OmitComments::init$() {
	$Canonicalizer20010315::init$(false);
}

$String* Canonicalizer20010315OmitComments::engineGetURI() {
	$init($Canonicalizer);
	return $Canonicalizer::ALGO_ID_C14N_OMIT_COMMENTS;
}

Canonicalizer20010315OmitComments::Canonicalizer20010315OmitComments() {
}

$Class* Canonicalizer20010315OmitComments::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Canonicalizer20010315OmitComments, init$, void)},
		{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Canonicalizer20010315OmitComments, engineGetURI, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315OmitComments",
		"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Canonicalizer20010315OmitComments, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Canonicalizer20010315OmitComments);
	});
	return class$;
}

$Class* Canonicalizer20010315OmitComments::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
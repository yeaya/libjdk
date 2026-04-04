#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315WithComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315.h>
#include <jcpp.h>

#undef ALGO_ID_C14N_WITH_COMMENTS

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

void Canonicalizer20010315WithComments::init$() {
	$Canonicalizer20010315::init$(true);
}

$String* Canonicalizer20010315WithComments::engineGetURI() {
	$init($Canonicalizer);
	return $Canonicalizer::ALGO_ID_C14N_WITH_COMMENTS;
}

Canonicalizer20010315WithComments::Canonicalizer20010315WithComments() {
}

$Class* Canonicalizer20010315WithComments::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Canonicalizer20010315WithComments, init$, void)},
		{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Canonicalizer20010315WithComments, engineGetURI, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315WithComments",
		"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Canonicalizer20010315WithComments, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Canonicalizer20010315WithComments);
	});
	return class$;
}

$Class* Canonicalizer20010315WithComments::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
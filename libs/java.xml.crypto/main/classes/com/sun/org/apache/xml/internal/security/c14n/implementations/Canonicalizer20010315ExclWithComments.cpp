#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315ExclWithComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315Excl.h>
#include <jcpp.h>

#undef ALGO_ID_C14N_EXCL_WITH_COMMENTS

using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $Canonicalizer20010315Excl = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315Excl;
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

void Canonicalizer20010315ExclWithComments::init$() {
	$Canonicalizer20010315Excl::init$(true);
}

$String* Canonicalizer20010315ExclWithComments::engineGetURI() {
	$init($Canonicalizer);
	return $Canonicalizer::ALGO_ID_C14N_EXCL_WITH_COMMENTS;
}

Canonicalizer20010315ExclWithComments::Canonicalizer20010315ExclWithComments() {
}

$Class* Canonicalizer20010315ExclWithComments::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Canonicalizer20010315ExclWithComments, init$, void)},
		{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Canonicalizer20010315ExclWithComments, engineGetURI, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315ExclWithComments",
		"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315Excl",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Canonicalizer20010315ExclWithComments, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Canonicalizer20010315ExclWithComments);
	});
	return class$;
}

$Class* Canonicalizer20010315ExclWithComments::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
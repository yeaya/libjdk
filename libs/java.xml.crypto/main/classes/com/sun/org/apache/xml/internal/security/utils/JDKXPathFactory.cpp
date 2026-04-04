#include <com/sun/org/apache/xml/internal/security/utils/JDKXPathFactory.h>
#include <com/sun/org/apache/xml/internal/security/utils/JDKXPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathFactory.h>
#include <jcpp.h>

using $JDKXPathAPI = ::com::sun::org::apache::xml::internal::security::utils::JDKXPathAPI;
using $XPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XPathAPI;
using $XPathFactory = ::com::sun::org::apache::xml::internal::security::utils::XPathFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

void JDKXPathFactory::init$() {
	$XPathFactory::init$();
}

$XPathAPI* JDKXPathFactory::newXPathAPI() {
	return $new($JDKXPathAPI);
}

JDKXPathFactory::JDKXPathFactory() {
}

$Class* JDKXPathFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JDKXPathFactory, init$, void)},
		{"newXPathAPI", "()Lcom/sun/org/apache/xml/internal/security/utils/XPathAPI;", nullptr, $PUBLIC, $virtualMethod(JDKXPathFactory, newXPathAPI, $XPathAPI*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.utils.JDKXPathFactory",
		"com.sun.org.apache.xml.internal.security.utils.XPathFactory",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JDKXPathFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JDKXPathFactory);
	});
	return class$;
}

$Class* JDKXPathFactory::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
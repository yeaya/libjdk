#include <com/sun/org/apache/xpath/internal/XPathFactory.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xpath/internal/XPath.h>
#include <javax/xml/transform/SourceLocator.h>
#include <jcpp.h>

using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $XPath = ::com::sun::org::apache::xpath::internal::XPath;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SourceLocator = ::javax::xml::transform::SourceLocator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$Class* XPathFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"create", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;I)Lcom/sun/org/apache/xpath/internal/XPath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathFactory, create, $XPath*, $String*, $SourceLocator*, $PrefixResolver*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.org.apache.xpath.internal.XPathFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XPathFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactory);
	});
	return class$;
}

$Class* XPathFactory::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com
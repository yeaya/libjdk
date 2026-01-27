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

$MethodInfo _XPathFactory_MethodInfo_[] = {
	{"create", "(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;I)Lcom/sun/org/apache/xpath/internal/XPath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathFactory, create, $XPath*, $String*, $SourceLocator*, $PrefixResolver*, int32_t)},
	{}
};

$ClassInfo _XPathFactory_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xpath.internal.XPathFactory",
	nullptr,
	nullptr,
	nullptr,
	_XPathFactory_MethodInfo_
};

$Object* allocate$XPathFactory($Class* clazz) {
	return $of($alloc(XPathFactory));
}

$Class* XPathFactory::load$($String* name, bool initialize) {
	$loadClass(XPathFactory, name, initialize, &_XPathFactory_ClassInfo_, allocate$XPathFactory);
	return class$;
}

$Class* XPathFactory::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com
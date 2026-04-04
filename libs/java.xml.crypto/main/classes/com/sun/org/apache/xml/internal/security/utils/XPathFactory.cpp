#include <com/sun/org/apache/xml/internal/security/utils/XPathFactory.h>
#include <com/sun/org/apache/xml/internal/security/utils/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/JDKXPathFactory.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XalanXPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XalanXPathFactory.h>
#include <jcpp.h>

using $ClassLoaderUtils = ::com::sun::org::apache::xml::internal::security::utils::ClassLoaderUtils;
using $JDKXPathFactory = ::com::sun::org::apache::xml::internal::security::utils::JDKXPathFactory;
using $XPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XPathAPI;
using $XalanXPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XalanXPathAPI;
using $XalanXPathFactory = ::com::sun::org::apache::xml::internal::security::utils::XalanXPathFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

bool XPathFactory::xalanInstalled = false;

void XPathFactory::init$() {
}

XPathFactory* XPathFactory::newInstance() {
	$init(XPathFactory);
	if (XPathFactory::xalanInstalled && $XalanXPathAPI::isInstalled()) {
		return $new($XalanXPathFactory);
	}
	return $new($JDKXPathFactory);
}

void XPathFactory::clinit$($Class* clazz) {
	{
		bool installed = false;
		try {
			$Class* funcTableClass = $ClassLoaderUtils::loadClass("com.sun.org.apache.xpath.internal.compiler.FunctionTable"_s, XPathFactory::class$);
			if (funcTableClass != nullptr) {
				installed = true;
			}
		} catch ($Exception& e) {
		}
		XPathFactory::xalanInstalled = installed;
	}
}

XPathFactory::XPathFactory() {
}

$Class* XPathFactory::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xalanInstalled", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPathFactory, xalanInstalled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XPathFactory, init$, void)},
		{"newInstance", "()Lcom/sun/org/apache/xml/internal/security/utils/XPathFactory;", nullptr, $PUBLIC | $STATIC, $staticMethod(XPathFactory, newInstance, XPathFactory*)},
		{"newXPathAPI", "()Lcom/sun/org/apache/xml/internal/security/utils/XPathAPI;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XPathFactory, newXPathAPI, $XPathAPI*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xml.internal.security.utils.XPathFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPathFactory, name, initialize, &classInfo$$, XPathFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XPathFactory);
	});
	return class$;
}

$Class* XPathFactory::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
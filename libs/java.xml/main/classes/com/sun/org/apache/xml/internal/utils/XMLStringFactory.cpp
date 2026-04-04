#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <com/sun/org/apache/xml/internal/utils/FastStringBuffer.h>
#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <jcpp.h>

using $FastStringBuffer = ::com::sun::org::apache::xml::internal::utils::FastStringBuffer;
using $XMLString = ::com::sun::org::apache::xml::internal::utils::XMLString;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {

void XMLStringFactory::init$() {
}

XMLStringFactory::XMLStringFactory() {
}

$Class* XMLStringFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XMLStringFactory, init$, void)},
		{"emptystr", "()Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStringFactory, emptystr, $XMLString*)},
		{"newstr", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStringFactory, newstr, $XMLString*, $String*)},
		{"newstr", "(Lcom/sun/org/apache/xml/internal/utils/FastStringBuffer;II)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStringFactory, newstr, $XMLString*, $FastStringBuffer*, int32_t, int32_t)},
		{"newstr", "([CII)Lcom/sun/org/apache/xml/internal/utils/XMLString;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLStringFactory, newstr, $XMLString*, $chars*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.org.apache.xml.internal.utils.XMLStringFactory",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XMLStringFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLStringFactory);
	});
	return class$;
}

$Class* XMLStringFactory::class$ = nullptr;

						} // utils
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
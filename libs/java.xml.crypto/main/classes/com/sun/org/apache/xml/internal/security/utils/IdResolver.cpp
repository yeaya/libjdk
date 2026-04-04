#include <com/sun/org/apache/xml/internal/security/utils/IdResolver.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

void IdResolver::init$() {
}

void IdResolver::registerElementById($Element* element, $Attr* id) {
	$nc(element)->setIdAttributeNode(id, true);
}

$Element* IdResolver::getElementById($Document* doc, $String* id) {
	return $nc(doc)->getElementById(id);
}

IdResolver::IdResolver() {
}

$Class* IdResolver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(IdResolver, init$, void)},
		{"getElementById", "(Lorg/w3c/dom/Document;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $staticMethod(IdResolver, getElementById, $Element*, $Document*, $String*)},
		{"registerElementById", "(Lorg/w3c/dom/Element;Lorg/w3c/dom/Attr;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(IdResolver, registerElementById, void, $Element*, $Attr*)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.utils.IdResolver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(IdResolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IdResolver);
	});
	return class$;
}

$Class* IdResolver::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
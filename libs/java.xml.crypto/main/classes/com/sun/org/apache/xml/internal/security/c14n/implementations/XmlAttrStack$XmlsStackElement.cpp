#include <com/sun/org/apache/xml/internal/security/c14n/implementations/XmlAttrStack$XmlsStackElement.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/XmlAttrStack.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {

void XmlAttrStack$XmlsStackElement::init$() {
	this->rendered = false;
	$set(this, nodes, $new($ArrayList));
}

XmlAttrStack$XmlsStackElement::XmlAttrStack$XmlsStackElement() {
}

$Class* XmlAttrStack$XmlsStackElement::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"level", "I", nullptr, 0, $field(XmlAttrStack$XmlsStackElement, level)},
		{"rendered", "Z", nullptr, 0, $field(XmlAttrStack$XmlsStackElement, rendered)},
		{"nodes", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/Attr;>;", $FINAL, $field(XmlAttrStack$XmlsStackElement, nodes)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(XmlAttrStack$XmlsStackElement, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack$XmlsStackElement", "com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack", "XmlsStackElement", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack$XmlsStackElement",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack"
	};
	$loadClass(XmlAttrStack$XmlsStackElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XmlAttrStack$XmlsStackElement);
	});
	return class$;
}

$Class* XmlAttrStack$XmlsStackElement::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
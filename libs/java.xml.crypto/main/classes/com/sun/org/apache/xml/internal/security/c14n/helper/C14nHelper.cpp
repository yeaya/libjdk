#include <com/sun/org/apache/xml/internal/security/c14n/helper/C14nHelper.h>
#include <org/w3c/dom/Attr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace helper {

void C14nHelper::init$() {
}

bool C14nHelper::namespaceIsRelative($Attr* namespace$) {
	return !namespaceIsAbsolute(namespace$);
}

bool C14nHelper::namespaceIsRelative($String* namespaceValue) {
	return !namespaceIsAbsolute(namespaceValue);
}

bool C14nHelper::namespaceIsAbsolute($Attr* namespace$) {
	return namespaceIsAbsolute($($nc(namespace$)->getValue()));
}

bool C14nHelper::namespaceIsAbsolute($String* namespaceValue) {
	if ($nc(namespaceValue)->length() == 0) {
		return true;
	}
	return namespaceValue->indexOf(u':') > 0;
}

C14nHelper::C14nHelper() {
}

$Class* C14nHelper::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(C14nHelper, init$, void)},
		{"namespaceIsAbsolute", "(Lorg/w3c/dom/Attr;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(C14nHelper, namespaceIsAbsolute, bool, $Attr*)},
		{"namespaceIsAbsolute", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(C14nHelper, namespaceIsAbsolute, bool, $String*)},
		{"namespaceIsRelative", "(Lorg/w3c/dom/Attr;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(C14nHelper, namespaceIsRelative, bool, $Attr*)},
		{"namespaceIsRelative", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(C14nHelper, namespaceIsRelative, bool, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.c14n.helper.C14nHelper",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(C14nHelper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(C14nHelper);
	});
	return class$;
}

$Class* C14nHelper::class$ = nullptr;

								} // helper
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
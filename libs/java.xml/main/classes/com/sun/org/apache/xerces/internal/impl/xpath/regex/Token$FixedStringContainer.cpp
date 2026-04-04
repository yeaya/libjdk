#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$FixedStringContainer.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

void Token$FixedStringContainer::init$() {
	$set(this, token, nullptr);
	this->options = 0;
}

Token$FixedStringContainer::Token$FixedStringContainer() {
}

$Class* Token$FixedStringContainer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"token", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $field(Token$FixedStringContainer, token)},
		{"options", "I", nullptr, 0, $field(Token$FixedStringContainer, options)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Token$FixedStringContainer, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$FixedStringContainer", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "FixedStringContainer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$FixedStringContainer",
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
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token"
	};
	$loadClass(Token$FixedStringContainer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Token$FixedStringContainer);
	});
	return class$;
}

$Class* Token$FixedStringContainer::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
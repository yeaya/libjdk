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

$FieldInfo _Token$FixedStringContainer_FieldInfo_[] = {
	{"token", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $field(Token$FixedStringContainer, token)},
	{"options", "I", nullptr, 0, $field(Token$FixedStringContainer, options)},
	{}
};

$MethodInfo _Token$FixedStringContainer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Token$FixedStringContainer, init$, void)},
	{}
};

$InnerClassInfo _Token$FixedStringContainer_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$FixedStringContainer", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "FixedStringContainer", $STATIC},
	{}
};

$ClassInfo _Token$FixedStringContainer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$FixedStringContainer",
	"java.lang.Object",
	nullptr,
	_Token$FixedStringContainer_FieldInfo_,
	_Token$FixedStringContainer_MethodInfo_,
	nullptr,
	nullptr,
	_Token$FixedStringContainer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token"
};

$Object* allocate$Token$FixedStringContainer($Class* clazz) {
	return $of($alloc(Token$FixedStringContainer));
}

void Token$FixedStringContainer::init$() {
	$set(this, token, nullptr);
	this->options = 0;
}

Token$FixedStringContainer::Token$FixedStringContainer() {
}

$Class* Token$FixedStringContainer::load$($String* name, bool initialize) {
	$loadClass(Token$FixedStringContainer, name, initialize, &_Token$FixedStringContainer_ClassInfo_, allocate$Token$FixedStringContainer);
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
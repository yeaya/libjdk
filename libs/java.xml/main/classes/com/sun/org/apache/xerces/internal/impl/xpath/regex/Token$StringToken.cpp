#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$StringToken.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/REUtil.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <jcpp.h>

#undef BACKREFERENCE

using $REUtil = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::REUtil;
using $Token = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token;
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

$FieldInfo _Token$StringToken_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$StringToken, serialVersionUID)},
	{"string", "Ljava/lang/String;", nullptr, 0, $field(Token$StringToken, string)},
	{"refNumber", "I", nullptr, $FINAL, $field(Token$StringToken, refNumber)},
	{}
};

$MethodInfo _Token$StringToken_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;I)V", nullptr, 0, $method(Token$StringToken, init$, void, int32_t, $String*, int32_t)},
	{"getReferenceNumber", "()I", nullptr, 0, $virtualMethod(Token$StringToken, getReferenceNumber, int32_t)},
	{"getString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Token$StringToken, getString, $String*)},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token$StringToken, toString, $String*, int32_t)},
	{}
};

$InnerClassInfo _Token$StringToken_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$StringToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "StringToken", $STATIC},
	{}
};

$ClassInfo _Token$StringToken_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$StringToken",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token",
	nullptr,
	_Token$StringToken_FieldInfo_,
	_Token$StringToken_MethodInfo_,
	nullptr,
	nullptr,
	_Token$StringToken_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token"
};

$Object* allocate$Token$StringToken($Class* clazz) {
	return $of($alloc(Token$StringToken));
}

void Token$StringToken::init$(int32_t type, $String* str, int32_t n) {
	$Token::init$(type);
	$set(this, string, str);
	this->refNumber = n;
}

int32_t Token$StringToken::getReferenceNumber() {
	return this->refNumber;
}

$String* Token$StringToken::getString() {
	return this->string;
}

$String* Token$StringToken::toString(int32_t options) {
	if (this->type == $Token::BACKREFERENCE) {
		return $str({"\\"_s, $$str(this->refNumber)});
	} else {
		return $REUtil::quoteMeta(this->string);
	}
}

Token$StringToken::Token$StringToken() {
}

$Class* Token$StringToken::load$($String* name, bool initialize) {
	$loadClass(Token$StringToken, name, initialize, &_Token$StringToken_ClassInfo_, allocate$Token$StringToken);
	return class$;
}

$Class* Token$StringToken::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
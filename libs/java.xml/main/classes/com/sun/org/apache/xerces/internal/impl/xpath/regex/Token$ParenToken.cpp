#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ParenToken.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <jcpp.h>

#undef INDEPENDENT
#undef LOOKAHEAD
#undef LOOKBEHIND
#undef NEGATIVELOOKAHEAD
#undef NEGATIVELOOKBEHIND
#undef PAREN

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

$FieldInfo _Token$ParenToken_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$ParenToken, serialVersionUID)},
	{"child", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Token$ParenToken, child)},
	{"parennumber", "I", nullptr, $FINAL, $field(Token$ParenToken, parennumber)},
	{}
};

$MethodInfo _Token$ParenToken_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;I)V", nullptr, 0, $method(Token$ParenToken, init$, void, int32_t, $Token*, int32_t)},
	{"getChild", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(Token$ParenToken, getChild, $Token*, int32_t)},
	{"getParenNumber", "()I", nullptr, 0, $virtualMethod(Token$ParenToken, getParenNumber, int32_t)},
	{"size", "()I", nullptr, 0, $virtualMethod(Token$ParenToken, size, int32_t)},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token$ParenToken, toString, $String*, int32_t)},
	{}
};

$InnerClassInfo _Token$ParenToken_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ParenToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ParenToken", $STATIC},
	{}
};

$ClassInfo _Token$ParenToken_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ParenToken",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token",
	nullptr,
	_Token$ParenToken_FieldInfo_,
	_Token$ParenToken_MethodInfo_,
	nullptr,
	nullptr,
	_Token$ParenToken_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token"
};

$Object* allocate$Token$ParenToken($Class* clazz) {
	return $of($alloc(Token$ParenToken));
}

void Token$ParenToken::init$(int32_t type, $Token* tok, int32_t paren) {
	$Token::init$(type);
	$set(this, child, tok);
	this->parennumber = paren;
}

int32_t Token$ParenToken::size() {
	return 1;
}

$Token* Token$ParenToken::getChild(int32_t index) {
	return this->child;
}

int32_t Token$ParenToken::getParenNumber() {
	return this->parennumber;
}

$String* Token$ParenToken::toString(int32_t options) {
	$useLocalCurrentObjectStackCache();
	$var($String, ret, nullptr);
	switch (this->type) {
	case $Token::PAREN:
		{
			if (this->parennumber == 0) {
				$assign(ret, $str({"(?:"_s, $($nc(this->child)->toString(options)), ")"_s}));
			} else {
				$assign(ret, $str({"("_s, $($nc(this->child)->toString(options)), ")"_s}));
			}
			break;
		}
	case $Token::LOOKAHEAD:
		{
			$assign(ret, $str({"(?="_s, $($nc(this->child)->toString(options)), ")"_s}));
			break;
		}
	case $Token::NEGATIVELOOKAHEAD:
		{
			$assign(ret, $str({"(?!"_s, $($nc(this->child)->toString(options)), ")"_s}));
			break;
		}
	case $Token::LOOKBEHIND:
		{
			$assign(ret, $str({"(?<="_s, $($nc(this->child)->toString(options)), ")"_s}));
			break;
		}
	case $Token::NEGATIVELOOKBEHIND:
		{
			$assign(ret, $str({"(?<!"_s, $($nc(this->child)->toString(options)), ")"_s}));
			break;
		}
	case $Token::INDEPENDENT:
		{
			$assign(ret, $str({"(?>"_s, $($nc(this->child)->toString(options)), ")"_s}));
			break;
		}
	}
	return ret;
}

Token$ParenToken::Token$ParenToken() {
}

$Class* Token$ParenToken::load$($String* name, bool initialize) {
	$loadClass(Token$ParenToken, name, initialize, &_Token$ParenToken_ClassInfo_, allocate$Token$ParenToken);
	return class$;
}

$Class* Token$ParenToken::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
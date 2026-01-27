#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$CharToken.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <jcpp.h>

#undef ANCHOR
#undef CHAR

using $Token = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _Token$CharToken_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$CharToken, serialVersionUID)},
	{"chardata", "I", nullptr, $FINAL, $field(Token$CharToken, chardata)},
	{}
};

$MethodInfo _Token$CharToken_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(Token$CharToken, init$, void, int32_t, int32_t)},
	{"getChar", "()I", nullptr, 0, $virtualMethod(Token$CharToken, getChar, int32_t)},
	{"match", "(I)Z", nullptr, 0, $virtualMethod(Token$CharToken, match, bool, int32_t)},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token$CharToken, toString, $String*, int32_t)},
	{}
};

$InnerClassInfo _Token$CharToken_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$CharToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "CharToken", $STATIC},
	{}
};

$ClassInfo _Token$CharToken_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$CharToken",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token",
	nullptr,
	_Token$CharToken_FieldInfo_,
	_Token$CharToken_MethodInfo_,
	nullptr,
	nullptr,
	_Token$CharToken_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token"
};

$Object* allocate$Token$CharToken($Class* clazz) {
	return $of($alloc(Token$CharToken));
}

void Token$CharToken::init$(int32_t type, int32_t ch) {
	$Token::init$(type);
	this->chardata = ch;
}

int32_t Token$CharToken::getChar() {
	return this->chardata;
}

$String* Token$CharToken::toString(int32_t options) {
	$useLocalCurrentObjectStackCache();
	$var($String, ret, nullptr);
	switch (this->type) {
	case $Token::CHAR:
		{
			switch (this->chardata) {
			case u'|':
				{}
			case u'*':
				{}
			case u'+':
				{}
			case u'?':
				{}
			case u'(':
				{}
			case u')':
				{}
			case u'.':
				{}
			case u'[':
				{}
			case u'{':
				{}
			case u'\\':
				{
					$assign(ret, $str({"\\"_s, $$str((char16_t)this->chardata)}));
					break;
				}
			case u'\f':
				{
					$assign(ret, "\\f"_s);
					break;
				}
			case u'\n':
				{
					$assign(ret, "\\n"_s);
					break;
				}
			case u'\r':
				{
					$assign(ret, "\\r"_s);
					break;
				}
			case u'\t':
				{
					$assign(ret, "\\t"_s);
					break;
				}
			case 27:
				{
					$assign(ret, "\\e"_s);
					break;
				}
			default:
				{
					if (this->chardata >= 0x00010000) {
						$var($String, pre, $str({"0"_s, $($Integer::toHexString(this->chardata))}));
						$var($String, var$0, "\\v"_s);
						int32_t var$1 = pre->length() - 6;
						$assign(ret, $concat(var$0, $($nc(pre)->substring(var$1, pre->length()))));
					} else {
						$assign(ret, $str({""_s, $$str((char16_t)this->chardata)}));
					}
				}
			}
			break;
		}
	case $Token::ANCHOR:
		{
			$init($Token);
			if ($equals(this, $Token::token_linebeginning) || $equals(this, $Token::token_lineend)) {
				$assign(ret, $str({""_s, $$str((char16_t)this->chardata)}));
			} else {
				$assign(ret, $str({"\\"_s, $$str((char16_t)this->chardata)}));
			}
			break;
		}
	default:
		{
			$assign(ret, nullptr);
		}
	}
	return ret;
}

bool Token$CharToken::match(int32_t ch) {
	$useLocalCurrentObjectStackCache();
	if (this->type == $Token::CHAR) {
		return ch == this->chardata;
	} else {
		$throwNew($RuntimeException, $$str({"NFAArrow#match(): Internal error: "_s, $$str(this->type)}));
	}
}

Token$CharToken::Token$CharToken() {
}

$Class* Token$CharToken::load$($String* name, bool initialize) {
	$loadClass(Token$CharToken, name, initialize, &_Token$CharToken_ClassInfo_, allocate$Token$CharToken);
	return class$;
}

$Class* Token$CharToken::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
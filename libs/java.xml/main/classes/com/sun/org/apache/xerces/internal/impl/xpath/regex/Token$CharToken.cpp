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

void Token$CharToken::init$(int32_t type, int32_t ch) {
	$Token::init$(type);
	this->chardata = ch;
}

int32_t Token$CharToken::getChar() {
	return this->chardata;
}

$String* Token$CharToken::toString(int32_t options) {
	$useLocalObjectStack();
	$var($String, ret, nullptr);
	switch (this->type) {
	case $Token::CHAR:
		switch (this->chardata) {
		case u'|':
		case u'*':
		case u'+':
		case u'?':
		case u'(':
		case u')':
		case u'.':
		case u'[':
		case u'{':
		case u'\\':
			$assign(ret, $str({"\\"_s, $$str((char16_t)this->chardata)}));
			break;
		case u'\f':
			$assign(ret, "\\f"_s);
			break;
		case u'\n':
			$assign(ret, "\\n"_s);
			break;
		case u'\r':
			$assign(ret, "\\r"_s);
			break;
		case u'\t':
			$assign(ret, "\\t"_s);
			break;
		case 27:
			$assign(ret, "\\e"_s);
			break;
		default:
			if (this->chardata >= 0x00010000) {
				$var($String, pre, $str({"0"_s, $($Integer::toHexString(this->chardata))}));
				$var($StringBuilder, var$0, $new($StringBuilder));
				var$0->append("\\v"_s);
				int32_t var$1 = pre->length() - 6;
				var$0->append($(pre->substring(var$1, pre->length())));
				$assign(ret, $str(var$0));
			} else {
				$assign(ret, $str({""_s, $$str((char16_t)this->chardata)}));
			}
		}
		break;
	case $Token::ANCHOR:
		$init($Token);
		if ($equals(this, $Token::token_linebeginning) || $equals(this, $Token::token_lineend)) {
			$assign(ret, $str({""_s, $$str((char16_t)this->chardata)}));
		} else {
			$assign(ret, $str({"\\"_s, $$str((char16_t)this->chardata)}));
		}
		break;
	default:
		$assign(ret, nullptr);
	}
	return ret;
}

bool Token$CharToken::match(int32_t ch) {
	$useLocalObjectStack();
	if (this->type == $Token::CHAR) {
		return ch == this->chardata;
	} else {
		$throwNew($RuntimeException, $$str({"NFAArrow#match(): Internal error: "_s, $$str(this->type)}));
	}
}

Token$CharToken::Token$CharToken() {
}

$Class* Token$CharToken::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$CharToken, serialVersionUID)},
		{"chardata", "I", nullptr, $FINAL, $field(Token$CharToken, chardata)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, 0, $method(Token$CharToken, init$, void, int32_t, int32_t)},
		{"getChar", "()I", nullptr, 0, $virtualMethod(Token$CharToken, getChar, int32_t)},
		{"match", "(I)Z", nullptr, 0, $virtualMethod(Token$CharToken, match, bool, int32_t)},
		{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token$CharToken, toString, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$CharToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "CharToken", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$CharToken",
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token",
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
	$loadClass(Token$CharToken, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Token$CharToken);
	});
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
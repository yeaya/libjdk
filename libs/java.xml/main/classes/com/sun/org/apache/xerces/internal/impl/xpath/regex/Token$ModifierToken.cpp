#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ModifierToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/REUtil.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <jcpp.h>

#undef MODIFIERGROUP

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

void Token$ModifierToken::init$($Token* tok, int32_t add, int32_t mask) {
	$Token::init$($Token::MODIFIERGROUP);
	$set(this, child, tok);
	this->add = add;
	this->mask = mask;
}

int32_t Token$ModifierToken::size() {
	return 1;
}

$Token* Token$ModifierToken::getChild(int32_t index) {
	return this->child;
}

int32_t Token$ModifierToken::getOptions() {
	return this->add;
}

int32_t Token$ModifierToken::getOptionsMask() {
	return this->mask;
}

$String* Token$ModifierToken::toString(int32_t options) {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("(?"_s);
	var$0->append(this->add == 0 ? ""_s : $($REUtil::createOptionString(this->add)));
	var$0->append(this->mask == 0 ? ""_s : $($REUtil::createOptionString(this->mask)));
	var$0->append(":"_s);
	var$0->append($($nc(this->child)->toString(options)));
	var$0->append(")"_s);
	return $str(var$0);
}

Token$ModifierToken::Token$ModifierToken() {
}

$Class* Token$ModifierToken::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$ModifierToken, serialVersionUID)},
		{"child", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Token$ModifierToken, child)},
		{"add", "I", nullptr, $FINAL, $field(Token$ModifierToken, add)},
		{"mask", "I", nullptr, $FINAL, $field(Token$ModifierToken, mask)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;II)V", nullptr, 0, $method(Token$ModifierToken, init$, void, $Token*, int32_t, int32_t)},
		{"getChild", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(Token$ModifierToken, getChild, $Token*, int32_t)},
		{"getOptions", "()I", nullptr, 0, $virtualMethod(Token$ModifierToken, getOptions, int32_t)},
		{"getOptionsMask", "()I", nullptr, 0, $virtualMethod(Token$ModifierToken, getOptionsMask, int32_t)},
		{"size", "()I", nullptr, 0, $virtualMethod(Token$ModifierToken, size, int32_t)},
		{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token$ModifierToken, toString, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ModifierToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ModifierToken", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ModifierToken",
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
	$loadClass(Token$ModifierToken, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Token$ModifierToken);
	});
	return class$;
}

$Class* Token$ModifierToken::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
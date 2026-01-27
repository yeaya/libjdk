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

$FieldInfo _Token$ModifierToken_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$ModifierToken, serialVersionUID)},
	{"child", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Token$ModifierToken, child)},
	{"add", "I", nullptr, $FINAL, $field(Token$ModifierToken, add)},
	{"mask", "I", nullptr, $FINAL, $field(Token$ModifierToken, mask)},
	{}
};

$MethodInfo _Token$ModifierToken_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;II)V", nullptr, 0, $method(Token$ModifierToken, init$, void, $Token*, int32_t, int32_t)},
	{"getChild", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(Token$ModifierToken, getChild, $Token*, int32_t)},
	{"getOptions", "()I", nullptr, 0, $virtualMethod(Token$ModifierToken, getOptions, int32_t)},
	{"getOptionsMask", "()I", nullptr, 0, $virtualMethod(Token$ModifierToken, getOptionsMask, int32_t)},
	{"size", "()I", nullptr, 0, $virtualMethod(Token$ModifierToken, size, int32_t)},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token$ModifierToken, toString, $String*, int32_t)},
	{}
};

$InnerClassInfo _Token$ModifierToken_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ModifierToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ModifierToken", $STATIC},
	{}
};

$ClassInfo _Token$ModifierToken_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ModifierToken",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token",
	nullptr,
	_Token$ModifierToken_FieldInfo_,
	_Token$ModifierToken_MethodInfo_,
	nullptr,
	nullptr,
	_Token$ModifierToken_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token"
};

$Object* allocate$Token$ModifierToken($Class* clazz) {
	return $of($alloc(Token$ModifierToken));
}

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
	$useLocalCurrentObjectStackCache();
	$var($String, var$3, $$str({"(?"_s, (this->add == 0 ? ""_s : $($REUtil::createOptionString(this->add)))}));
	$var($String, var$2, $$concat(var$3, (this->mask == 0 ? ""_s : $($REUtil::createOptionString(this->mask)))));
	$var($String, var$1, $$concat(var$2, ":"_s));
	$var($String, var$0, $$concat(var$1, $($nc(this->child)->toString(options))));
	return $concat(var$0, ")"_s);
}

Token$ModifierToken::Token$ModifierToken() {
}

$Class* Token$ModifierToken::load$($String* name, bool initialize) {
	$loadClass(Token$ModifierToken, name, initialize, &_Token$ModifierToken_ClassInfo_, allocate$Token$ModifierToken);
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
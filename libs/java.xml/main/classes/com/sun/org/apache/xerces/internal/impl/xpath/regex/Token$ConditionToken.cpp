#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ConditionToken.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <jcpp.h>

#undef ANCHOR
#undef CONDITION

using $Token = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Token;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
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

$FieldInfo _Token$ConditionToken_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$ConditionToken, serialVersionUID)},
	{"refNumber", "I", nullptr, $FINAL, $field(Token$ConditionToken, refNumber)},
	{"condition", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Token$ConditionToken, condition)},
	{"yes", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Token$ConditionToken, yes)},
	{"no", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Token$ConditionToken, no)},
	{}
};

$MethodInfo _Token$ConditionToken_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, 0, $method(Token$ConditionToken, init$, void, int32_t, $Token*, $Token*, $Token*)},
	{"getChild", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(Token$ConditionToken, getChild, $Token*, int32_t)},
	{"size", "()I", nullptr, 0, $virtualMethod(Token$ConditionToken, size, int32_t)},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token$ConditionToken, toString, $String*, int32_t)},
	{}
};

$InnerClassInfo _Token$ConditionToken_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ConditionToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ConditionToken", $STATIC},
	{}
};

$ClassInfo _Token$ConditionToken_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ConditionToken",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token",
	nullptr,
	_Token$ConditionToken_FieldInfo_,
	_Token$ConditionToken_MethodInfo_,
	nullptr,
	nullptr,
	_Token$ConditionToken_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token"
};

$Object* allocate$Token$ConditionToken($Class* clazz) {
	return $of($alloc(Token$ConditionToken));
}

void Token$ConditionToken::init$(int32_t refno, $Token* cond, $Token* yespat, $Token* nopat) {
	$Token::init$($Token::CONDITION);
	this->refNumber = refno;
	$set(this, condition, cond);
	$set(this, yes, yespat);
	$set(this, no, nopat);
}

int32_t Token$ConditionToken::size() {
	return this->no == nullptr ? 1 : 2;
}

$Token* Token$ConditionToken::getChild(int32_t index) {
	$useLocalCurrentObjectStackCache();
	if (index == 0) {
		return this->yes;
	}
	if (index == 1) {
		return this->no;
	}
	$throwNew($RuntimeException, $$str({"Internal Error: "_s, $$str(index)}));
}

$String* Token$ConditionToken::toString(int32_t options) {
	$useLocalCurrentObjectStackCache();
	$var($String, ret, nullptr);
	if (this->refNumber > 0) {
		$assign(ret, $str({"(?("_s, $$str(this->refNumber), ")"_s}));
	} else if ($nc(this->condition)->type == $Token::ANCHOR) {
		$assign(ret, $str({"(?("_s, this->condition, ")"_s}));
	} else {
		$assign(ret, $str({"(?"_s, this->condition}));
	}
	if (this->no == nullptr) {
		$plusAssign(ret, $$str({this->yes, ")"_s}));
	} else {
		$plusAssign(ret, $$str({this->yes, "|"_s, this->no, ")"_s}));
	}
	return ret;
}

Token$ConditionToken::Token$ConditionToken() {
}

$Class* Token$ConditionToken::load$($String* name, bool initialize) {
	$loadClass(Token$ConditionToken, name, initialize, &_Token$ConditionToken_ClassInfo_, allocate$Token$ConditionToken);
	return class$;
}

$Class* Token$ConditionToken::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
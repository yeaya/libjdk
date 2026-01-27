#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ClosureToken.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <jcpp.h>

#undef CLOSURE

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

$FieldInfo _Token$ClosureToken_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$ClosureToken, serialVersionUID)},
	{"min", "I", nullptr, 0, $field(Token$ClosureToken, min)},
	{"max", "I", nullptr, 0, $field(Token$ClosureToken, max)},
	{"child", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Token$ClosureToken, child)},
	{}
};

$MethodInfo _Token$ClosureToken_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, 0, $method(Token$ClosureToken, init$, void, int32_t, $Token*)},
	{"getChild", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(Token$ClosureToken, getChild, $Token*, int32_t)},
	{"getMax", "()I", nullptr, $FINAL, $virtualMethod(Token$ClosureToken, getMax, int32_t)},
	{"getMin", "()I", nullptr, $FINAL, $virtualMethod(Token$ClosureToken, getMin, int32_t)},
	{"setMax", "(I)V", nullptr, $FINAL, $virtualMethod(Token$ClosureToken, setMax, void, int32_t)},
	{"setMin", "(I)V", nullptr, $FINAL, $virtualMethod(Token$ClosureToken, setMin, void, int32_t)},
	{"size", "()I", nullptr, 0, $virtualMethod(Token$ClosureToken, size, int32_t)},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token$ClosureToken, toString, $String*, int32_t)},
	{}
};

$InnerClassInfo _Token$ClosureToken_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ClosureToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ClosureToken", $STATIC},
	{}
};

$ClassInfo _Token$ClosureToken_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ClosureToken",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token",
	nullptr,
	_Token$ClosureToken_FieldInfo_,
	_Token$ClosureToken_MethodInfo_,
	nullptr,
	nullptr,
	_Token$ClosureToken_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token"
};

$Object* allocate$Token$ClosureToken($Class* clazz) {
	return $of($alloc(Token$ClosureToken));
}

void Token$ClosureToken::init$(int32_t type, $Token* tok) {
	$Token::init$(type);
	$set(this, child, tok);
	this->setMin(-1);
	this->setMax(-1);
}

int32_t Token$ClosureToken::size() {
	return 1;
}

$Token* Token$ClosureToken::getChild(int32_t index) {
	return this->child;
}

void Token$ClosureToken::setMin(int32_t min) {
	this->min = min;
}

void Token$ClosureToken::setMax(int32_t max) {
	this->max = max;
}

int32_t Token$ClosureToken::getMin() {
	return this->min;
}

int32_t Token$ClosureToken::getMax() {
	return this->max;
}

$String* Token$ClosureToken::toString(int32_t options) {
	$useLocalCurrentObjectStackCache();
	$var($String, ret, nullptr);
	if (this->type == $Token::CLOSURE) {
		bool var$0 = this->getMin() < 0;
		if (var$0 && this->getMax() < 0) {
			$assign(ret, $str({$($nc(this->child)->toString(options)), "*"_s}));
		} else {
			int32_t var$2 = this->getMin();
			if (var$2 == this->getMax()) {
				$var($String, var$4, $$str({$($nc(this->child)->toString(options)), "{"_s}));
				$var($String, var$3, $$concat(var$4, $$str(this->getMin())));
				$assign(ret, $concat(var$3, "}"_s));
			} else {
				bool var$6 = this->getMin() >= 0;
				if (var$6 && this->getMax() >= 0) {
					$var($String, var$10, $$str({$($nc(this->child)->toString(options)), "{"_s}));
					$var($String, var$9, $$concat(var$10, $$str(this->getMin())));
					$var($String, var$8, $$concat(var$9, ","_s));
					$var($String, var$7, $$concat(var$8, $$str(this->getMax())));
					$assign(ret, $concat(var$7, "}"_s));
				} else {
					bool var$12 = this->getMin() >= 0;
					if (var$12 && this->getMax() < 0) {
						$var($String, var$14, $$str({$($nc(this->child)->toString(options)), "{"_s}));
						$var($String, var$13, $$concat(var$14, $$str(this->getMin())));
						$assign(ret, $concat(var$13, ",}"_s));
					} else {
						$var($String, var$15, $$str({"Token#toString(): CLOSURE "_s, $$str(this->getMin()), ", "_s}));
						$throwNew($RuntimeException, $$concat(var$15, $$str(this->getMax())));
					}
				}
			}
		}
	} else {
		bool var$17 = this->getMin() < 0;
		if (var$17 && this->getMax() < 0) {
			$assign(ret, $str({$($nc(this->child)->toString(options)), "*?"_s}));
		} else {
			int32_t var$19 = this->getMin();
			if (var$19 == this->getMax()) {
				$var($String, var$21, $$str({$($nc(this->child)->toString(options)), "{"_s}));
				$var($String, var$20, $$concat(var$21, $$str(this->getMin())));
				$assign(ret, $concat(var$20, "}?"_s));
			} else {
				bool var$23 = this->getMin() >= 0;
				if (var$23 && this->getMax() >= 0) {
					$var($String, var$27, $$str({$($nc(this->child)->toString(options)), "{"_s}));
					$var($String, var$26, $$concat(var$27, $$str(this->getMin())));
					$var($String, var$25, $$concat(var$26, ","_s));
					$var($String, var$24, $$concat(var$25, $$str(this->getMax())));
					$assign(ret, $concat(var$24, "}?"_s));
				} else {
					bool var$29 = this->getMin() >= 0;
					if (var$29 && this->getMax() < 0) {
						$var($String, var$31, $$str({$($nc(this->child)->toString(options)), "{"_s}));
						$var($String, var$30, $$concat(var$31, $$str(this->getMin())));
						$assign(ret, $concat(var$30, ",}?"_s));
					} else {
						$var($String, var$32, $$str({"Token#toString(): NONGREEDYCLOSURE "_s, $$str(this->getMin()), ", "_s}));
						$throwNew($RuntimeException, $$concat(var$32, $$str(this->getMax())));
					}
				}
			}
		}
	}
	return ret;
}

Token$ClosureToken::Token$ClosureToken() {
}

$Class* Token$ClosureToken::load$($String* name, bool initialize) {
	$loadClass(Token$ClosureToken, name, initialize, &_Token$ClosureToken_ClassInfo_, allocate$Token$ClosureToken);
	return class$;
}

$Class* Token$ClosureToken::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
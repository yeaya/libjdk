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
	$useLocalObjectStack();
	$var($String, ret, nullptr);
	if (this->type == $Token::CLOSURE) {
		bool var$0 = this->getMin() < 0;
		if (var$0 && this->getMax() < 0) {
			$assign(ret, $str({$($nc(this->child)->toString(options)), "*"_s}));
		} else {
			int32_t var$1 = this->getMin();
			if (var$1 == this->getMax()) {
				$var($StringBuilder, var$2, $new($StringBuilder));
				var$2->append($($nc(this->child)->toString(options)));
				var$2->append("{"_s);
				var$2->append(this->getMin());
				var$2->append("}"_s);
				$assign(ret, $str(var$2));
			} else {
				bool var$3 = this->getMin() >= 0;
				if (var$3 && this->getMax() >= 0) {
					$var($StringBuilder, var$4, $new($StringBuilder));
					var$4->append($($nc(this->child)->toString(options)));
					var$4->append("{"_s);
					var$4->append(this->getMin());
					var$4->append(","_s);
					var$4->append(this->getMax());
					var$4->append("}"_s);
					$assign(ret, $str(var$4));
				} else {
					bool var$5 = this->getMin() >= 0;
					if (var$5 && this->getMax() < 0) {
						$var($StringBuilder, var$6, $new($StringBuilder));
						var$6->append($($nc(this->child)->toString(options)));
						var$6->append("{"_s);
						var$6->append(this->getMin());
						var$6->append(",}"_s);
						$assign(ret, $str(var$6));
					} else {
						$var($StringBuilder, var$7, $new($StringBuilder));
						var$7->append("Token#toString(): CLOSURE "_s);
						var$7->append(this->getMin());
						var$7->append(", "_s);
						var$7->append(this->getMax());
						$throwNew($RuntimeException, $$str(var$7));
					}
				}
			}
		}
	} else {
		bool var$8 = this->getMin() < 0;
		if (var$8 && this->getMax() < 0) {
			$assign(ret, $str({$($nc(this->child)->toString(options)), "*?"_s}));
		} else {
			int32_t var$9 = this->getMin();
			if (var$9 == this->getMax()) {
				$var($StringBuilder, var$10, $new($StringBuilder));
				var$10->append($($nc(this->child)->toString(options)));
				var$10->append("{"_s);
				var$10->append(this->getMin());
				var$10->append("}?"_s);
				$assign(ret, $str(var$10));
			} else {
				bool var$11 = this->getMin() >= 0;
				if (var$11 && this->getMax() >= 0) {
					$var($StringBuilder, var$12, $new($StringBuilder));
					var$12->append($($nc(this->child)->toString(options)));
					var$12->append("{"_s);
					var$12->append(this->getMin());
					var$12->append(","_s);
					var$12->append(this->getMax());
					var$12->append("}?"_s);
					$assign(ret, $str(var$12));
				} else {
					bool var$13 = this->getMin() >= 0;
					if (var$13 && this->getMax() < 0) {
						$var($StringBuilder, var$14, $new($StringBuilder));
						var$14->append($($nc(this->child)->toString(options)));
						var$14->append("{"_s);
						var$14->append(this->getMin());
						var$14->append(",}?"_s);
						$assign(ret, $str(var$14));
					} else {
						$var($StringBuilder, var$15, $new($StringBuilder));
						var$15->append("Token#toString(): NONGREEDYCLOSURE "_s);
						var$15->append(this->getMin());
						var$15->append(", "_s);
						var$15->append(this->getMax());
						$throwNew($RuntimeException, $$str(var$15));
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
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$ClosureToken, serialVersionUID)},
		{"min", "I", nullptr, 0, $field(Token$ClosureToken, min)},
		{"max", "I", nullptr, 0, $field(Token$ClosureToken, max)},
		{"child", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Token$ClosureToken, child)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
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
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ClosureToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ClosureToken", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ClosureToken",
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
	$loadClass(Token$ClosureToken, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Token$ClosureToken);
	});
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
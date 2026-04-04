#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token$ConcatToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <jcpp.h>

#undef CLOSURE
#undef CONCAT
#undef NONGREEDYCLOSURE

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

void Token$ConcatToken::init$($Token* t1, $Token* t2) {
	$Token::init$($Token::CONCAT);
	$set(this, child, t1);
	$set(this, child2, t2);
}

int32_t Token$ConcatToken::size() {
	return 2;
}

$Token* Token$ConcatToken::getChild(int32_t index) {
	return index == 0 ? this->child : this->child2;
}

$String* Token$ConcatToken::toString(int32_t options) {
	$useLocalObjectStack();
	$var($String, ret, nullptr);
	if ($nc(this->child2)->type == $Token::CLOSURE && this->child2->getChild(0) == this->child) {
		$assign(ret, $str({$($nc(this->child)->toString(options)), "+"_s}));
	} else if (this->child2->type == $Token::NONGREEDYCLOSURE && this->child2->getChild(0) == this->child) {
		$assign(ret, $str({$($nc(this->child)->toString(options)), "+?"_s}));
	} else {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($($nc(this->child)->toString(options)));
		var$0->append($(this->child2->toString(options)));
		$assign(ret, $str(var$0));
	}
	return ret;
}

Token$ConcatToken::Token$ConcatToken() {
}

$Class* Token$ConcatToken::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$ConcatToken, serialVersionUID)},
		{"child", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Token$ConcatToken, child)},
		{"child2", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Token$ConcatToken, child2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, 0, $method(Token$ConcatToken, init$, void, $Token*, $Token*)},
		{"getChild", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(Token$ConcatToken, getChild, $Token*, int32_t)},
		{"size", "()I", nullptr, 0, $virtualMethod(Token$ConcatToken, size, int32_t)},
		{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token$ConcatToken, toString, $String*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ConcatToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ConcatToken", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ConcatToken",
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
	$loadClass(Token$ConcatToken, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Token$ConcatToken);
	});
	return class$;
}

$Class* Token$ConcatToken::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
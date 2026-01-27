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

$FieldInfo _Token$ConcatToken_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Token$ConcatToken, serialVersionUID)},
	{"child", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Token$ConcatToken, child)},
	{"child2", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Token$ConcatToken, child2)},
	{}
};

$MethodInfo _Token$ConcatToken_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, 0, $method(Token$ConcatToken, init$, void, $Token*, $Token*)},
	{"getChild", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, 0, $virtualMethod(Token$ConcatToken, getChild, $Token*, int32_t)},
	{"size", "()I", nullptr, 0, $virtualMethod(Token$ConcatToken, size, int32_t)},
	{"toString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Token$ConcatToken, toString, $String*, int32_t)},
	{}
};

$InnerClassInfo _Token$ConcatToken_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ConcatToken", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Token", "ConcatToken", $STATIC},
	{}
};

$ClassInfo _Token$ConcatToken_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token$ConcatToken",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token",
	nullptr,
	_Token$ConcatToken_FieldInfo_,
	_Token$ConcatToken_MethodInfo_,
	nullptr,
	nullptr,
	_Token$ConcatToken_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Token"
};

$Object* allocate$Token$ConcatToken($Class* clazz) {
	return $of($alloc(Token$ConcatToken));
}

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
	$useLocalCurrentObjectStackCache();
	$var($String, ret, nullptr);
	if ($nc(this->child2)->type == $Token::CLOSURE && $nc(this->child2)->getChild(0) == this->child) {
		$assign(ret, $str({$($nc(this->child)->toString(options)), "+"_s}));
	} else if ($nc(this->child2)->type == $Token::NONGREEDYCLOSURE && $nc(this->child2)->getChild(0) == this->child) {
		$assign(ret, $str({$($nc(this->child)->toString(options)), "+?"_s}));
	} else {
		$var($String, var$0, $($nc(this->child)->toString(options)));
		$assign(ret, $concat(var$0, $($nc(this->child2)->toString(options))));
	}
	return ret;
}

Token$ConcatToken::Token$ConcatToken() {
}

$Class* Token$ConcatToken::load$($String* name, bool initialize) {
	$loadClass(Token$ConcatToken, name, initialize, &_Token$ConcatToken_ClassInfo_, allocate$Token$ConcatToken);
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
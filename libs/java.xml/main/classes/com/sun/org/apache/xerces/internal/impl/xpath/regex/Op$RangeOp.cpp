#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$RangeOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Token.h>
#include <jcpp.h>

using $Op = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op;
using $RangeToken = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::RangeToken;
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

void Op$RangeOp::init$(int32_t type, $Token* tok) {
	$Op::init$(type);
	$set(this, tok, tok);
}

$RangeToken* Op$RangeOp::getToken() {
	return $cast($RangeToken, this->tok);
}

Op$RangeOp::Op$RangeOp() {
}

$Class* Op$RangeOp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tok", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Op$RangeOp, tok)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, 0, $method(Op$RangeOp, init$, void, int32_t, $Token*)},
		{"getToken", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, 0, $virtualMethod(Op$RangeOp, getToken, $RangeToken*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$RangeOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "RangeOp", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$RangeOp",
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op"
	};
	$loadClass(Op$RangeOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Op$RangeOp);
	});
	return class$;
}

$Class* Op$RangeOp::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
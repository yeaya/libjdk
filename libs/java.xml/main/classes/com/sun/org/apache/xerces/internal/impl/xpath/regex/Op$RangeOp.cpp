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

$FieldInfo _Op$RangeOp_FieldInfo_[] = {
	{"tok", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;", nullptr, $FINAL, $field(Op$RangeOp, tok)},
	{}
};

$MethodInfo _Op$RangeOp_MethodInfo_[] = {
	{"<init>", "(ILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Token;)V", nullptr, 0, $method(Op$RangeOp, init$, void, int32_t, $Token*)},
	{"getToken", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/RangeToken;", nullptr, 0, $virtualMethod(Op$RangeOp, getToken, $RangeToken*)},
	{}
};

$InnerClassInfo _Op$RangeOp_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$RangeOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "RangeOp", $STATIC},
	{}
};

$ClassInfo _Op$RangeOp_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$RangeOp",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op",
	nullptr,
	_Op$RangeOp_FieldInfo_,
	_Op$RangeOp_MethodInfo_,
	nullptr,
	nullptr,
	_Op$RangeOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op"
};

$Object* allocate$Op$RangeOp($Class* clazz) {
	return $of($alloc(Op$RangeOp));
}

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
	$loadClass(Op$RangeOp, name, initialize, &_Op$RangeOp_ClassInfo_, allocate$Op$RangeOp);
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
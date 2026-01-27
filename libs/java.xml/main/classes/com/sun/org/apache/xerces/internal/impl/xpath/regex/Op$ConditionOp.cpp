#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ConditionOp.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op.h>
#include <jcpp.h>

using $Op = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op;
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

$FieldInfo _Op$ConditionOp_FieldInfo_[] = {
	{"refNumber", "I", nullptr, $FINAL, $field(Op$ConditionOp, refNumber)},
	{"condition", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, $FINAL, $field(Op$ConditionOp, condition)},
	{"yes", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, $FINAL, $field(Op$ConditionOp, yes)},
	{"no", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, $FINAL, $field(Op$ConditionOp, no)},
	{}
};

$MethodInfo _Op$ConditionOp_MethodInfo_[] = {
	{"<init>", "(IILcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)V", nullptr, 0, $method(Op$ConditionOp, init$, void, int32_t, int32_t, $Op*, $Op*, $Op*)},
	{}
};

$InnerClassInfo _Op$ConditionOp_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ConditionOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "ConditionOp", $STATIC},
	{}
};

$ClassInfo _Op$ConditionOp_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ConditionOp",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op",
	nullptr,
	_Op$ConditionOp_FieldInfo_,
	_Op$ConditionOp_MethodInfo_,
	nullptr,
	nullptr,
	_Op$ConditionOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op"
};

$Object* allocate$Op$ConditionOp($Class* clazz) {
	return $of($alloc(Op$ConditionOp));
}

void Op$ConditionOp::init$(int32_t type, int32_t refno, $Op* conditionflow, $Op* yesflow, $Op* noflow) {
	$Op::init$(type);
	this->refNumber = refno;
	$set(this, condition, conditionflow);
	$set(this, yes, yesflow);
	$set(this, no, noflow);
}

Op$ConditionOp::Op$ConditionOp() {
}

$Class* Op$ConditionOp::load$($String* name, bool initialize) {
	$loadClass(Op$ConditionOp, name, initialize, &_Op$ConditionOp_ClassInfo_, allocate$Op$ConditionOp);
	return class$;
}

$Class* Op$ConditionOp::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
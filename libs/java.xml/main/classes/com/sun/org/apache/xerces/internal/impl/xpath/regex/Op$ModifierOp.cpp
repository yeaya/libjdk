#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ModifierOp.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op.h>
#include <jcpp.h>

using $Op$ChildOp = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op$ChildOp;
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

$FieldInfo _Op$ModifierOp_FieldInfo_[] = {
	{"v1", "I", nullptr, $FINAL, $field(Op$ModifierOp, v1)},
	{"v2", "I", nullptr, $FINAL, $field(Op$ModifierOp, v2)},
	{}
};

$MethodInfo _Op$ModifierOp_MethodInfo_[] = {
	{"<init>", "(III)V", nullptr, 0, $method(Op$ModifierOp, init$, void, int32_t, int32_t, int32_t)},
	{"getData", "()I", nullptr, 0, $virtualMethod(Op$ModifierOp, getData, int32_t)},
	{"getData2", "()I", nullptr, 0, $virtualMethod(Op$ModifierOp, getData2, int32_t)},
	{}
};

$InnerClassInfo _Op$ModifierOp_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ModifierOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "ModifierOp", $STATIC},
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ChildOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "ChildOp", $STATIC},
	{}
};

$ClassInfo _Op$ModifierOp_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ModifierOp",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ChildOp",
	nullptr,
	_Op$ModifierOp_FieldInfo_,
	_Op$ModifierOp_MethodInfo_,
	nullptr,
	nullptr,
	_Op$ModifierOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op"
};

$Object* allocate$Op$ModifierOp($Class* clazz) {
	return $of($alloc(Op$ModifierOp));
}

void Op$ModifierOp::init$(int32_t type, int32_t v1, int32_t v2) {
	$Op$ChildOp::init$(type);
	this->v1 = v1;
	this->v2 = v2;
}

int32_t Op$ModifierOp::getData() {
	return this->v1;
}

int32_t Op$ModifierOp::getData2() {
	return this->v2;
}

Op$ModifierOp::Op$ModifierOp() {
}

$Class* Op$ModifierOp::load$($String* name, bool initialize) {
	$loadClass(Op$ModifierOp, name, initialize, &_Op$ModifierOp_ClassInfo_, allocate$Op$ModifierOp);
	return class$;
}

$Class* Op$ModifierOp::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
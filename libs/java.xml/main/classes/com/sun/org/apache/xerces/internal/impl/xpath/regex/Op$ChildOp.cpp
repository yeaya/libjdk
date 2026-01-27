#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$ChildOp.h>

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

$FieldInfo _Op$ChildOp_FieldInfo_[] = {
	{"child", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, 0, $field(Op$ChildOp, child)},
	{}
};

$MethodInfo _Op$ChildOp_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, 0, $method(Op$ChildOp, init$, void, int32_t)},
	{"getChild", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, 0, $virtualMethod(Op$ChildOp, getChild, $Op*)},
	{"setChild", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)V", nullptr, 0, $virtualMethod(Op$ChildOp, setChild, void, $Op*)},
	{}
};

$InnerClassInfo _Op$ChildOp_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ChildOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "ChildOp", $STATIC},
	{}
};

$ClassInfo _Op$ChildOp_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ChildOp",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op",
	nullptr,
	_Op$ChildOp_FieldInfo_,
	_Op$ChildOp_MethodInfo_,
	nullptr,
	nullptr,
	_Op$ChildOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op"
};

$Object* allocate$Op$ChildOp($Class* clazz) {
	return $of($alloc(Op$ChildOp));
}

void Op$ChildOp::init$(int32_t type) {
	$Op::init$(type);
}

void Op$ChildOp::setChild($Op* child) {
	$set(this, child, child);
}

$Op* Op$ChildOp::getChild() {
	return this->child;
}

Op$ChildOp::Op$ChildOp() {
}

$Class* Op$ChildOp::load$($String* name, bool initialize) {
	$loadClass(Op$ChildOp, name, initialize, &_Op$ChildOp_ClassInfo_, allocate$Op$ChildOp);
	return class$;
}

$Class* Op$ChildOp::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
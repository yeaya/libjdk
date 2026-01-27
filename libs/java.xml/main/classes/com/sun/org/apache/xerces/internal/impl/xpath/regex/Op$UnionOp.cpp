#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$UnionOp.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op.h>
#include <java/util/ArrayList.h>
#include <jcpp.h>

using $Op = ::com::sun::org::apache::xerces::internal::impl::xpath::regex::Op;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {
								namespace regex {

$FieldInfo _Op$UnionOp_FieldInfo_[] = {
	{"branches", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;>;", $FINAL, $field(Op$UnionOp, branches)},
	{}
};

$MethodInfo _Op$UnionOp_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(Op$UnionOp, init$, void, int32_t, int32_t)},
	{"addElement", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)V", nullptr, 0, $virtualMethod(Op$UnionOp, addElement, void, $Op*)},
	{"elementAt", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, 0, $virtualMethod(Op$UnionOp, elementAt, $Op*, int32_t)},
	{"size", "()I", nullptr, 0, $virtualMethod(Op$UnionOp, size, int32_t)},
	{}
};

$InnerClassInfo _Op$UnionOp_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$UnionOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "UnionOp", $STATIC},
	{}
};

$ClassInfo _Op$UnionOp_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$UnionOp",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op",
	nullptr,
	_Op$UnionOp_FieldInfo_,
	_Op$UnionOp_MethodInfo_,
	nullptr,
	nullptr,
	_Op$UnionOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op"
};

$Object* allocate$Op$UnionOp($Class* clazz) {
	return $of($alloc(Op$UnionOp));
}

void Op$UnionOp::init$(int32_t type, int32_t size) {
	$Op::init$(type);
	$set(this, branches, $new($ArrayList, size));
}

void Op$UnionOp::addElement($Op* op) {
	$nc(this->branches)->add(op);
}

int32_t Op$UnionOp::size() {
	return $nc(this->branches)->size();
}

$Op* Op$UnionOp::elementAt(int32_t index) {
	return $cast($Op, $nc(this->branches)->get(index));
}

Op$UnionOp::Op$UnionOp() {
}

$Class* Op$UnionOp::load$($String* name, bool initialize) {
	$loadClass(Op$UnionOp, name, initialize, &_Op$UnionOp_ClassInfo_, allocate$Op$UnionOp);
	return class$;
}

$Class* Op$UnionOp::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
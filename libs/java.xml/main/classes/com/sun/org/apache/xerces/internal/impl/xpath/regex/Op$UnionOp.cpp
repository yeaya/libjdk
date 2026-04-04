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

void Op$UnionOp::init$(int32_t type, int32_t size) {
	$Op::init$(type);
	$set(this, branches, $new($ArrayList, size));
}

void Op$UnionOp::addElement($Op* op) {
	this->branches->add(op);
}

int32_t Op$UnionOp::size() {
	return this->branches->size();
}

$Op* Op$UnionOp::elementAt(int32_t index) {
	return $cast($Op, this->branches->get(index));
}

Op$UnionOp::Op$UnionOp() {
}

$Class* Op$UnionOp::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"branches", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;>;", $FINAL, $field(Op$UnionOp, branches)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(II)V", nullptr, 0, $method(Op$UnionOp, init$, void, int32_t, int32_t)},
		{"addElement", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)V", nullptr, 0, $virtualMethod(Op$UnionOp, addElement, void, $Op*)},
		{"elementAt", "(I)Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, 0, $virtualMethod(Op$UnionOp, elementAt, $Op*, int32_t)},
		{"size", "()I", nullptr, 0, $virtualMethod(Op$UnionOp, size, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$UnionOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "UnionOp", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$UnionOp",
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
	$loadClass(Op$UnionOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Op$UnionOp);
	});
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
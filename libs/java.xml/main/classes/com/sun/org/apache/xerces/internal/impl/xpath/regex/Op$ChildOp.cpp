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
	$FieldInfo fieldInfos$$[] = {
		{"child", "Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, 0, $field(Op$ChildOp, child)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(Op$ChildOp, init$, void, int32_t)},
		{"getChild", "()Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;", nullptr, 0, $virtualMethod(Op$ChildOp, getChild, $Op*)},
		{"setChild", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/regex/Op;)V", nullptr, 0, $virtualMethod(Op$ChildOp, setChild, void, $Op*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ChildOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "ChildOp", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$ChildOp",
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
	$loadClass(Op$ChildOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Op$ChildOp);
	});
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
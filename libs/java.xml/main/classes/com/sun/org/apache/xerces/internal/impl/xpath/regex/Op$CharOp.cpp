#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$CharOp.h>

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

$FieldInfo _Op$CharOp_FieldInfo_[] = {
	{"charData", "I", nullptr, $FINAL, $field(Op$CharOp, charData)},
	{}
};

$MethodInfo _Op$CharOp_MethodInfo_[] = {
	{"<init>", "(II)V", nullptr, 0, $method(Op$CharOp, init$, void, int32_t, int32_t)},
	{"getData", "()I", nullptr, 0, $virtualMethod(Op$CharOp, getData, int32_t)},
	{}
};

$InnerClassInfo _Op$CharOp_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$CharOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "CharOp", $STATIC},
	{}
};

$ClassInfo _Op$CharOp_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$CharOp",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op",
	nullptr,
	_Op$CharOp_FieldInfo_,
	_Op$CharOp_MethodInfo_,
	nullptr,
	nullptr,
	_Op$CharOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op"
};

$Object* allocate$Op$CharOp($Class* clazz) {
	return $of($alloc(Op$CharOp));
}

void Op$CharOp::init$(int32_t type, int32_t data) {
	$Op::init$(type);
	this->charData = data;
}

int32_t Op$CharOp::getData() {
	return this->charData;
}

Op$CharOp::Op$CharOp() {
}

$Class* Op$CharOp::load$($String* name, bool initialize) {
	$loadClass(Op$CharOp, name, initialize, &_Op$CharOp_ClassInfo_, allocate$Op$CharOp);
	return class$;
}

$Class* Op$CharOp::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
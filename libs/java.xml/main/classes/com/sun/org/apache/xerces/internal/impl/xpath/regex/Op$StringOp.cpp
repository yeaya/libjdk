#include <com/sun/org/apache/xerces/internal/impl/xpath/regex/Op$StringOp.h>

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

$FieldInfo _Op$StringOp_FieldInfo_[] = {
	{"string", "Ljava/lang/String;", nullptr, $FINAL, $field(Op$StringOp, string)},
	{}
};

$MethodInfo _Op$StringOp_MethodInfo_[] = {
	{"<init>", "(ILjava/lang/String;)V", nullptr, 0, $method(Op$StringOp, init$, void, int32_t, $String*)},
	{"getString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Op$StringOp, getString, $String*)},
	{}
};

$InnerClassInfo _Op$StringOp_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$StringOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "StringOp", $STATIC},
	{}
};

$ClassInfo _Op$StringOp_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$StringOp",
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op",
	nullptr,
	_Op$StringOp_FieldInfo_,
	_Op$StringOp_MethodInfo_,
	nullptr,
	nullptr,
	_Op$StringOp_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op"
};

$Object* allocate$Op$StringOp($Class* clazz) {
	return $of($alloc(Op$StringOp));
}

void Op$StringOp::init$(int32_t type, $String* literal) {
	$Op::init$(type);
	$set(this, string, literal);
}

$String* Op$StringOp::getString() {
	return this->string;
}

Op$StringOp::Op$StringOp() {
}

$Class* Op$StringOp::load$($String* name, bool initialize) {
	$loadClass(Op$StringOp, name, initialize, &_Op$StringOp_ClassInfo_, allocate$Op$StringOp);
	return class$;
}

$Class* Op$StringOp::class$ = nullptr;

								} // regex
							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
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
	$FieldInfo fieldInfos$$[] = {
		{"string", "Ljava/lang/String;", nullptr, $FINAL, $field(Op$StringOp, string)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/String;)V", nullptr, 0, $method(Op$StringOp, init$, void, int32_t, $String*)},
		{"getString", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Op$StringOp, getString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$StringOp", "com.sun.org.apache.xerces.internal.impl.xpath.regex.Op", "StringOp", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xpath.regex.Op$StringOp",
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
	$loadClass(Op$StringOp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Op$StringOp);
	});
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
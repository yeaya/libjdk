#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen$Index.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace generic {

void ConstantPoolGen$Index::init$(int32_t i) {
	this->index = i;
}

ConstantPoolGen$Index::ConstantPoolGen$Index() {
}

$Class* ConstantPoolGen$Index::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"index", "I", nullptr, $FINAL, $field(ConstantPoolGen$Index, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(ConstantPoolGen$Index, init$, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.bcel.internal.generic.ConstantPoolGen$Index", "com.sun.org.apache.bcel.internal.generic.ConstantPoolGen", "Index", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.bcel.internal.generic.ConstantPoolGen$Index",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.bcel.internal.generic.ConstantPoolGen"
	};
	$loadClass(ConstantPoolGen$Index, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ConstantPoolGen$Index);
	});
	return class$;
}

$Class* ConstantPoolGen$Index::class$ = nullptr;

						} // generic
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com
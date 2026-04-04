#include <com/sun/org/apache/xerces/internal/impl/xs/traversers/OneAttr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

void OneAttr::init$($String* name, int32_t dvIndex, int32_t valueIndex, Object$* dfltValue) {
	$set(this, name, name);
	this->dvIndex = dvIndex;
	this->valueIndex = valueIndex;
	$set(this, dfltValue, dfltValue);
}

OneAttr::OneAttr() {
}

$Class* OneAttr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(OneAttr, name)},
		{"dvIndex", "I", nullptr, $PUBLIC, $field(OneAttr, dvIndex)},
		{"valueIndex", "I", nullptr, $PUBLIC, $field(OneAttr, valueIndex)},
		{"dfltValue", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(OneAttr, dfltValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;IILjava/lang/Object;)V", nullptr, $PUBLIC, $method(OneAttr, init$, void, $String*, int32_t, int32_t, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.traversers.OneAttr",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OneAttr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OneAttr);
	});
	return class$;
}

$Class* OneAttr::class$ = nullptr;

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
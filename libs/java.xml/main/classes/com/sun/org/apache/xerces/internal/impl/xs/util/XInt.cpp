#include <com/sun/org/apache/xerces/internal/impl/xs/util/XInt.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace util {

void XInt::init$(int32_t value) {
	this->fValue = value;
}

int32_t XInt::intValue() {
	return this->fValue;
}

int16_t XInt::shortValue() {
	return (int16_t)this->fValue;
}

bool XInt::equals(XInt* compareVal) {
	return (this->fValue == $nc(compareVal)->fValue);
}

$String* XInt::toString() {
	return $Integer::toString(this->fValue);
}

XInt::XInt() {
}

$Class* XInt::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fValue", "I", nullptr, $PRIVATE, $field(XInt, fValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(XInt, init$, void, int32_t)},
		{"equals", "(Lcom/sun/org/apache/xerces/internal/impl/xs/util/XInt;)Z", nullptr, $PUBLIC | $FINAL, $method(XInt, equals, bool, XInt*)},
		{"intValue", "()I", nullptr, $PUBLIC | $FINAL, $method(XInt, intValue, int32_t)},
		{"shortValue", "()S", nullptr, $PUBLIC | $FINAL, $method(XInt, shortValue, int16_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XInt, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.xs.util.XInt",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XInt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XInt);
	});
	return class$;
}

$Class* XInt::class$ = nullptr;

								} // util
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
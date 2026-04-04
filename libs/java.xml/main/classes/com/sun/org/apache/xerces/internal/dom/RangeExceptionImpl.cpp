#include <com/sun/org/apache/xerces/internal/dom/RangeExceptionImpl.h>
#include <org/w3c/dom/ranges/RangeException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RangeException = ::org::w3c::dom::ranges::RangeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

void RangeExceptionImpl::init$(int16_t code, $String* message) {
	$RangeException::init$(code, message);
}

RangeExceptionImpl::RangeExceptionImpl() {
}

RangeExceptionImpl::RangeExceptionImpl(const RangeExceptionImpl& e) : $RangeException(e) {
}

void RangeExceptionImpl::throw$() {
	throw *this;
}

$Class* RangeExceptionImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(RangeExceptionImpl, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(RangeExceptionImpl, init$, void, int16_t, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.RangeExceptionImpl",
		"org.w3c.dom.ranges.RangeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RangeExceptionImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RangeExceptionImpl);
	});
	return class$;
}

$Class* RangeExceptionImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
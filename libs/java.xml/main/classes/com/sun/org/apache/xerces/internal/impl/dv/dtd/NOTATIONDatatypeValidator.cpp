#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/NOTATIONDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <jcpp.h>

using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace dtd {

void NOTATIONDatatypeValidator::init$() {
}

void NOTATIONDatatypeValidator::validate($String* content, $ValidationContext* context) {
}

NOTATIONDatatypeValidator::NOTATIONDatatypeValidator() {
}

$Class* NOTATIONDatatypeValidator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(NOTATIONDatatypeValidator, init$, void)},
		{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(NOTATIONDatatypeValidator, validate, void, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.dtd.NOTATIONDatatypeValidator",
		"java.lang.Object",
		"com.sun.org.apache.xerces.internal.impl.dv.DatatypeValidator",
		nullptr,
		methodInfos$$
	};
	$loadClass(NOTATIONDatatypeValidator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NOTATIONDatatypeValidator);
	});
	return class$;
}

$Class* NOTATIONDatatypeValidator::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
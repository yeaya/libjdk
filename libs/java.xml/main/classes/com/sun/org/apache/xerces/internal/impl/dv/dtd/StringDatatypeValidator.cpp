#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/StringDatatypeValidator.h>

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

$MethodInfo _StringDatatypeValidator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(StringDatatypeValidator, init$, void)},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(StringDatatypeValidator, validate, void, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _StringDatatypeValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.StringDatatypeValidator",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.DatatypeValidator",
	nullptr,
	_StringDatatypeValidator_MethodInfo_
};

$Object* allocate$StringDatatypeValidator($Class* clazz) {
	return $of($alloc(StringDatatypeValidator));
}

void StringDatatypeValidator::init$() {
}

void StringDatatypeValidator::validate($String* content, $ValidationContext* context) {
}

StringDatatypeValidator::StringDatatypeValidator() {
}

$Class* StringDatatypeValidator::load$($String* name, bool initialize) {
	$loadClass(StringDatatypeValidator, name, initialize, &_StringDatatypeValidator_ClassInfo_, allocate$StringDatatypeValidator);
	return class$;
}

$Class* StringDatatypeValidator::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
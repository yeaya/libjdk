#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/IDREFDatatypeValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <jcpp.h>

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
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

$MethodInfo _IDREFDatatypeValidator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IDREFDatatypeValidator, init$, void)},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(IDREFDatatypeValidator, validate, void, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _IDREFDatatypeValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.IDREFDatatypeValidator",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.DatatypeValidator",
	nullptr,
	_IDREFDatatypeValidator_MethodInfo_
};

$Object* allocate$IDREFDatatypeValidator($Class* clazz) {
	return $of($alloc(IDREFDatatypeValidator));
}

void IDREFDatatypeValidator::init$() {
}

void IDREFDatatypeValidator::validate($String* content, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	if ($nc(context)->useNamespaces()) {
		if (!$XMLChar::isValidNCName(content)) {
			$throwNew($InvalidDatatypeValueException, "IDREFInvalidWithNamespaces"_s, $$new($ObjectArray, {$of(content)}));
		}
	} else if (!$XMLChar::isValidName(content)) {
		$throwNew($InvalidDatatypeValueException, "IDREFInvalid"_s, $$new($ObjectArray, {$of(content)}));
	}
	$nc(context)->addIdRef(content);
}

IDREFDatatypeValidator::IDREFDatatypeValidator() {
}

$Class* IDREFDatatypeValidator::load$($String* name, bool initialize) {
	$loadClass(IDREFDatatypeValidator, name, initialize, &_IDREFDatatypeValidator_ClassInfo_, allocate$IDREFDatatypeValidator);
	return class$;
}

$Class* IDREFDatatypeValidator::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/IDDatatypeValidator.h>

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

$MethodInfo _IDDatatypeValidator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IDDatatypeValidator, init$, void)},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(IDDatatypeValidator, validate, void, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _IDDatatypeValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.IDDatatypeValidator",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.impl.dv.DatatypeValidator",
	nullptr,
	_IDDatatypeValidator_MethodInfo_
};

$Object* allocate$IDDatatypeValidator($Class* clazz) {
	return $of($alloc(IDDatatypeValidator));
}

void IDDatatypeValidator::init$() {
}

void IDDatatypeValidator::validate($String* content, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	if ($nc(context)->useNamespaces()) {
		if (!$XMLChar::isValidNCName(content)) {
			$throwNew($InvalidDatatypeValueException, "IDInvalidWithNamespaces"_s, $$new($ObjectArray, {$of(content)}));
		}
	} else if (!$XMLChar::isValidName(content)) {
		$throwNew($InvalidDatatypeValueException, "IDInvalid"_s, $$new($ObjectArray, {$of(content)}));
	}
	if ($nc(context)->isIdDeclared(content)) {
		$throwNew($InvalidDatatypeValueException, "IDNotUnique"_s, $$new($ObjectArray, {$of(content)}));
	}
	$nc(context)->addId(content);
}

IDDatatypeValidator::IDDatatypeValidator() {
}

$Class* IDDatatypeValidator::load$($String* name, bool initialize) {
	$loadClass(IDDatatypeValidator, name, initialize, &_IDDatatypeValidator_ClassInfo_, allocate$IDDatatypeValidator);
	return class$;
}

$Class* IDDatatypeValidator::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
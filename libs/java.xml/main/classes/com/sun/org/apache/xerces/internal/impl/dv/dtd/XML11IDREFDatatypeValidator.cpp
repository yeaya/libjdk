#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/XML11IDREFDatatypeValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/IDREFDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <jcpp.h>

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $IDREFDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::IDREFDatatypeValidator;
using $XML11Char = ::com::sun::org::apache::xerces::internal::util::XML11Char;
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

$MethodInfo _XML11IDREFDatatypeValidator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11IDREFDatatypeValidator, init$, void)},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(XML11IDREFDatatypeValidator, validate, void, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _XML11IDREFDatatypeValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11IDREFDatatypeValidator",
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.IDREFDatatypeValidator",
	nullptr,
	nullptr,
	_XML11IDREFDatatypeValidator_MethodInfo_
};

$Object* allocate$XML11IDREFDatatypeValidator($Class* clazz) {
	return $of($alloc(XML11IDREFDatatypeValidator));
}

void XML11IDREFDatatypeValidator::init$() {
	$IDREFDatatypeValidator::init$();
}

void XML11IDREFDatatypeValidator::validate($String* content, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	if ($nc(context)->useNamespaces()) {
		if (!$XML11Char::isXML11ValidNCName(content)) {
			$throwNew($InvalidDatatypeValueException, "IDREFInvalidWithNamespaces"_s, $$new($ObjectArray, {$of(content)}));
		}
	} else if (!$XML11Char::isXML11ValidName(content)) {
		$throwNew($InvalidDatatypeValueException, "IDREFInvalid"_s, $$new($ObjectArray, {$of(content)}));
	}
	$nc(context)->addIdRef(content);
}

XML11IDREFDatatypeValidator::XML11IDREFDatatypeValidator() {
}

$Class* XML11IDREFDatatypeValidator::load$($String* name, bool initialize) {
	$loadClass(XML11IDREFDatatypeValidator, name, initialize, &_XML11IDREFDatatypeValidator_ClassInfo_, allocate$XML11IDREFDatatypeValidator);
	return class$;
}

$Class* XML11IDREFDatatypeValidator::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
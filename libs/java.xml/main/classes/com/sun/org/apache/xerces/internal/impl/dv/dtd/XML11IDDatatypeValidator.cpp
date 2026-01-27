#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/XML11IDDatatypeValidator.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/dtd/IDDatatypeValidator.h>
#include <com/sun/org/apache/xerces/internal/util/XML11Char.h>
#include <jcpp.h>

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $IDDatatypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::dtd::IDDatatypeValidator;
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

$MethodInfo _XML11IDDatatypeValidator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XML11IDDatatypeValidator, init$, void)},
	{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(XML11IDDatatypeValidator, validate, void, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{}
};

$ClassInfo _XML11IDDatatypeValidator_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11IDDatatypeValidator",
	"com.sun.org.apache.xerces.internal.impl.dv.dtd.IDDatatypeValidator",
	nullptr,
	nullptr,
	_XML11IDDatatypeValidator_MethodInfo_
};

$Object* allocate$XML11IDDatatypeValidator($Class* clazz) {
	return $of($alloc(XML11IDDatatypeValidator));
}

void XML11IDDatatypeValidator::init$() {
	$IDDatatypeValidator::init$();
}

void XML11IDDatatypeValidator::validate($String* content, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	if ($nc(context)->useNamespaces()) {
		if (!$XML11Char::isXML11ValidNCName(content)) {
			$throwNew($InvalidDatatypeValueException, "IDInvalidWithNamespaces"_s, $$new($ObjectArray, {$of(content)}));
		}
	} else if (!$XML11Char::isXML11ValidName(content)) {
		$throwNew($InvalidDatatypeValueException, "IDInvalid"_s, $$new($ObjectArray, {$of(content)}));
	}
	if ($nc(context)->isIdDeclared(content)) {
		$throwNew($InvalidDatatypeValueException, "IDNotUnique"_s, $$new($ObjectArray, {$of(content)}));
	}
	$nc(context)->addId(content);
}

XML11IDDatatypeValidator::XML11IDDatatypeValidator() {
}

$Class* XML11IDDatatypeValidator::load$($String* name, bool initialize) {
	$loadClass(XML11IDDatatypeValidator, name, initialize, &_XML11IDDatatypeValidator_ClassInfo_, allocate$XML11IDDatatypeValidator);
	return class$;
}

$Class* XML11IDDatatypeValidator::class$ = nullptr;

								} // dtd
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
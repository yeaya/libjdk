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

void XML11IDDatatypeValidator::init$() {
	$IDDatatypeValidator::init$();
}

void XML11IDDatatypeValidator::validate($String* content, $ValidationContext* context) {
	$useLocalObjectStack();
	if ($nc(context)->useNamespaces()) {
		if (!$XML11Char::isXML11ValidNCName(content)) {
			$throwNew($InvalidDatatypeValueException, "IDInvalidWithNamespaces"_s, $$new($ObjectArray, {content}));
		}
	} else if (!$XML11Char::isXML11ValidName(content)) {
		$throwNew($InvalidDatatypeValueException, "IDInvalid"_s, $$new($ObjectArray, {content}));
	}
	if (context->isIdDeclared(content)) {
		$throwNew($InvalidDatatypeValueException, "IDNotUnique"_s, $$new($ObjectArray, {content}));
	}
	context->addId(content);
}

XML11IDDatatypeValidator::XML11IDDatatypeValidator() {
}

$Class* XML11IDDatatypeValidator::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XML11IDDatatypeValidator, init$, void)},
		{"validate", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)V", nullptr, $PUBLIC, $virtualMethod(XML11IDDatatypeValidator, validate, void, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.dtd.XML11IDDatatypeValidator",
		"com.sun.org.apache.xerces.internal.impl.dv.dtd.IDDatatypeValidator",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(XML11IDDatatypeValidator, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XML11IDDatatypeValidator);
	});
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
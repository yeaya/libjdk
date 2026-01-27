#include <com/sun/org/apache/xerces/internal/impl/dv/xs/QNameDV.h>

#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/QNameDV$XQName.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <jcpp.h>

#undef EMPTY_STRING
#undef FACET_ENUMERATION
#undef FACET_LENGTH
#undef FACET_MAXLENGTH
#undef FACET_MINLENGTH
#undef FACET_PATTERN
#undef FACET_WHITESPACE

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $QNameDV$XQName = ::com::sun::org::apache::xerces::internal::impl::dv::xs::QNameDV$XQName;
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$FieldInfo _QNameDV_FieldInfo_[] = {
	{"EMPTY_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(QNameDV, EMPTY_STRING)},
	{}
};

$MethodInfo _QNameDV_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(QNameDV, init$, void)},
	{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(QNameDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
	{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(QNameDV, getAllowedFacets, int16_t)},
	{"getDataLength", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(QNameDV, getDataLength, int32_t, Object$*)},
	{}
};

$InnerClassInfo _QNameDV_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV$XQName", "com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV", "XQName", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _QNameDV_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV",
	"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
	nullptr,
	_QNameDV_FieldInfo_,
	_QNameDV_MethodInfo_,
	nullptr,
	nullptr,
	_QNameDV_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV$XQName"
};

$Object* allocate$QNameDV($Class* clazz) {
	return $of($alloc(QNameDV));
}

$String* QNameDV::EMPTY_STRING = nullptr;

void QNameDV::init$() {
	$TypeValidator::init$();
}

int16_t QNameDV::getAllowedFacets() {
	return ((int16_t)((((($XSSimpleTypeDecl::FACET_LENGTH | $XSSimpleTypeDecl::FACET_MINLENGTH) | $XSSimpleTypeDecl::FACET_MAXLENGTH) | $XSSimpleTypeDecl::FACET_PATTERN) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_WHITESPACE));
}

$Object* QNameDV::getActualValue($String* content, $ValidationContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, nullptr);
	$var($String, localpart, nullptr);
	int32_t colonptr = $nc(content)->indexOf(":"_s);
	if (colonptr > 0) {
		$assign(prefix, $nc(context)->getSymbol($(content->substring(0, colonptr))));
		$assign(localpart, content->substring(colonptr + 1));
	} else {
		$assign(prefix, QNameDV::EMPTY_STRING);
		$assign(localpart, content);
	}
	bool var$0 = $nc(prefix)->length() > 0;
	if (var$0 && !$XMLChar::isValidNCName(prefix)) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("QName"_s)
		}));
	}
	if (!$XMLChar::isValidNCName(localpart)) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			$of(content),
			$of("QName"_s)
		}));
	}
	$var($String, uri, $nc(context)->getURI(prefix));
	if ($nc(prefix)->length() > 0 && uri == nullptr) {
		$throwNew($InvalidDatatypeValueException, "UndeclaredPrefix"_s, $$new($ObjectArray, {
			$of(content),
			$of(prefix)
		}));
	}
	$var($String, var$1, prefix);
	$var($String, var$2, context->getSymbol(localpart));
	return $of($new($QNameDV$XQName, var$1, var$2, $(context->getSymbol(content)), uri));
}

int32_t QNameDV::getDataLength(Object$* value) {
	return $nc($nc(($cast($QNameDV$XQName, value)))->rawname)->length();
}

void clinit$QNameDV($Class* class$) {
	$assignStatic(QNameDV::EMPTY_STRING, ""_s->intern());
}

QNameDV::QNameDV() {
}

$Class* QNameDV::load$($String* name, bool initialize) {
	$loadClass(QNameDV, name, initialize, &_QNameDV_ClassInfo_, clinit$QNameDV, allocate$QNameDV);
	return class$;
}

$Class* QNameDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
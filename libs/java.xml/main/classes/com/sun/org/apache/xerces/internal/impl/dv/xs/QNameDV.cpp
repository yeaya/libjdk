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

$String* QNameDV::EMPTY_STRING = nullptr;

void QNameDV::init$() {
	$TypeValidator::init$();
}

int16_t QNameDV::getAllowedFacets() {
	return ((int16_t)((((($XSSimpleTypeDecl::FACET_LENGTH | $XSSimpleTypeDecl::FACET_MINLENGTH) | $XSSimpleTypeDecl::FACET_MAXLENGTH) | $XSSimpleTypeDecl::FACET_PATTERN) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_WHITESPACE));
}

$Object* QNameDV::getActualValue($String* content, $ValidationContext* context) {
	$useLocalObjectStack();
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
			content,
			"QName"_s
		}));
	}
	if (!$XMLChar::isValidNCName(localpart)) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			content,
			"QName"_s
		}));
	}
	$var($String, uri, $nc(context)->getURI(prefix));
	if (prefix->length() > 0 && uri == nullptr) {
		$throwNew($InvalidDatatypeValueException, "UndeclaredPrefix"_s, $$new($ObjectArray, {
			content,
			prefix
		}));
	}
	$var($String, var$1, context->getSymbol(localpart));
	return $of($new($QNameDV$XQName, prefix, var$1, $(context->getSymbol(content)), uri));
}

int32_t QNameDV::getDataLength(Object$* value) {
	return $nc($nc($cast($QNameDV$XQName, value))->rawname)->length();
}

void QNameDV::clinit$($Class* clazz) {
	$assignStatic(QNameDV::EMPTY_STRING, ""_s->intern());
}

QNameDV::QNameDV() {
}

$Class* QNameDV::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"EMPTY_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(QNameDV, EMPTY_STRING)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(QNameDV, init$, void)},
		{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(QNameDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
		{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(QNameDV, getAllowedFacets, int16_t)},
		{"getDataLength", "(Ljava/lang/Object;)I", nullptr, $PUBLIC, $virtualMethod(QNameDV, getDataLength, int32_t, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV$XQName", "com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV", "XQName", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV",
		"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.QNameDV$XQName"
	};
	$loadClass(QNameDV, name, initialize, &classInfo$$, QNameDV::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(QNameDV);
	});
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
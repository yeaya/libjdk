#include <com/sun/org/apache/xerces/internal/impl/dv/xs/AnyURIDV.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/InvalidDatatypeValueException.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/TypeValidator.h>
#include <com/sun/org/apache/xerces/internal/impl/dv/xs/XSSimpleTypeDecl.h>
#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>
#include <com/sun/org/apache/xerces/internal/util/URI.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef BASE_URI
#undef FACET_ENUMERATION
#undef FACET_LENGTH
#undef FACET_MAXLENGTH
#undef FACET_MINLENGTH
#undef FACET_PATTERN
#undef FACET_WHITESPACE

using $InvalidDatatypeValueException = ::com::sun::org::apache::xerces::internal::impl::dv::InvalidDatatypeValueException;
using $ValidationContext = ::com::sun::org::apache::xerces::internal::impl::dv::ValidationContext;
using $TypeValidator = ::com::sun::org::apache::xerces::internal::impl::dv::xs::TypeValidator;
using $XSSimpleTypeDecl = ::com::sun::org::apache::xerces::internal::impl::dv::xs::XSSimpleTypeDecl;
using $URI = ::com::sun::org::apache::xerces::internal::util::URI;
using $URI$MalformedURIException = ::com::sun::org::apache::xerces::internal::util::URI$MalformedURIException;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {
								namespace xs {

$URI* AnyURIDV::BASE_URI = nullptr;
$booleans* AnyURIDV::gNeedEscaping = nullptr;
$chars* AnyURIDV::gAfterEscaping1 = nullptr;
$chars* AnyURIDV::gAfterEscaping2 = nullptr;
$chars* AnyURIDV::gHexChs = nullptr;

void AnyURIDV::init$() {
	$TypeValidator::init$();
}

int16_t AnyURIDV::getAllowedFacets() {
	return ((int16_t)((((($XSSimpleTypeDecl::FACET_LENGTH | $XSSimpleTypeDecl::FACET_MINLENGTH) | $XSSimpleTypeDecl::FACET_MAXLENGTH) | $XSSimpleTypeDecl::FACET_PATTERN) | $XSSimpleTypeDecl::FACET_ENUMERATION) | $XSSimpleTypeDecl::FACET_WHITESPACE));
}

$Object* AnyURIDV::getActualValue($String* content, $ValidationContext* context) {
	$useLocalObjectStack();
	try {
		if ($nc(content)->length() != 0) {
			$var($String, encoded, encode(content));
			$new($URI, AnyURIDV::BASE_URI, encoded);
		}
	} catch ($URI$MalformedURIException& ex) {
		$throwNew($InvalidDatatypeValueException, "cvc-datatype-valid.1.2.1"_s, $$new($ObjectArray, {
			content,
			"anyURI"_s
		}));
	}
	return $of(content);
}

$String* AnyURIDV::encode($String* anyURI) {
	$init(AnyURIDV);
	$useLocalObjectStack();
	int32_t len = $nc(anyURI)->length();
	int32_t ch = 0;
	$var($StringBuffer, buffer, $new($StringBuffer, len * 3));
	int32_t i = 0;
	for (; i < len; ++i) {
		ch = anyURI->charAt(i);
		if (ch >= 128) {
			break;
		}
		if ($nc(AnyURIDV::gNeedEscaping)->get(ch)) {
			buffer->append(u'%');
			buffer->append($nc(AnyURIDV::gAfterEscaping1)->get(ch));
			buffer->append($nc(AnyURIDV::gAfterEscaping2)->get(ch));
		} else {
			buffer->append((char16_t)ch);
		}
	}
	if (i < len) {
		$var($bytes, bytes, nullptr);
		int8_t b = 0;
		try {
			$assign(bytes, $(anyURI->substring(i))->getBytes("UTF-8"_s));
		} catch ($UnsupportedEncodingException& e) {
			return anyURI;
		}
		len = $nc(bytes)->length;
		for (i = 0; i < len; ++i) {
			b = bytes->get(i);
			if (b < 0) {
				ch = b + 256;
				buffer->append(u'%');
				buffer->append($nc(AnyURIDV::gHexChs)->get(ch >> 4));
				buffer->append(AnyURIDV::gHexChs->get(ch & 0x0f));
			} else if ($nc(AnyURIDV::gNeedEscaping)->get(b)) {
				buffer->append(u'%');
				buffer->append($nc(AnyURIDV::gAfterEscaping1)->get(b));
				buffer->append($nc(AnyURIDV::gAfterEscaping2)->get(b));
			} else {
				buffer->append((char16_t)b);
			}
		}
	}
	if (buffer->length() != len) {
		return buffer->toString();
	} else {
		return anyURI;
	}
}

void AnyURIDV::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($URI, uri, nullptr);
		try {
			$assign(uri, $new($URI, "abc://def.ghi.jkl"_s));
		} catch ($URI$MalformedURIException& ex) {
		}
		$assignStatic(AnyURIDV::BASE_URI, uri);
	}
	$assignStatic(AnyURIDV::gNeedEscaping, $new($booleans, 128));
	$assignStatic(AnyURIDV::gAfterEscaping1, $new($chars, 128));
	$assignStatic(AnyURIDV::gAfterEscaping2, $new($chars, 128));
	$assignStatic(AnyURIDV::gHexChs, $new($chars, {
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'A',
		u'B',
		u'C',
		u'D',
		u'E',
		u'F'
	}));
	{
		for (int32_t i = 0; i <= 31; ++i) {
			AnyURIDV::gNeedEscaping->set(i, true);
			AnyURIDV::gAfterEscaping1->set(i, AnyURIDV::gHexChs->get(i >> 4));
			AnyURIDV::gAfterEscaping2->set(i, AnyURIDV::gHexChs->get(i & 0x0f));
		}
		AnyURIDV::gNeedEscaping->set(127, true);
		AnyURIDV::gAfterEscaping1->set(127, u'7');
		AnyURIDV::gAfterEscaping2->set(127, u'F');
		$var($chars, escChs, $new($chars, {
			u' ',
			u'<',
			u'>',
			u'\"',
			u'{',
			u'}',
			u'|',
			u'\\',
			u'^',
			u'~',
			u'`'
		}));
		int32_t len = escChs->length;
		char16_t ch = 0;
		for (int32_t i = 0; i < len; ++i) {
			ch = escChs->get(i);
			AnyURIDV::gNeedEscaping->set(ch, true);
			AnyURIDV::gAfterEscaping1->set(ch, AnyURIDV::gHexChs->get(ch >> 4));
			AnyURIDV::gAfterEscaping2->set(ch, AnyURIDV::gHexChs->get(ch & 0x0f));
		}
	}
}

AnyURIDV::AnyURIDV() {
}

$Class* AnyURIDV::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"BASE_URI", "Lcom/sun/org/apache/xerces/internal/util/URI;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AnyURIDV, BASE_URI)},
		{"gNeedEscaping", "[Z", nullptr, $PRIVATE | $STATIC, $staticField(AnyURIDV, gNeedEscaping)},
		{"gAfterEscaping1", "[C", nullptr, $PRIVATE | $STATIC, $staticField(AnyURIDV, gAfterEscaping1)},
		{"gAfterEscaping2", "[C", nullptr, $PRIVATE | $STATIC, $staticField(AnyURIDV, gAfterEscaping2)},
		{"gHexChs", "[C", nullptr, $PRIVATE | $STATIC, $staticField(AnyURIDV, gHexChs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(AnyURIDV, init$, void)},
		{"encode", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(AnyURIDV, encode, $String*, $String*)},
		{"getActualValue", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/impl/dv/ValidationContext;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(AnyURIDV, getActualValue, $Object*, $String*, $ValidationContext*), "com.sun.org.apache.xerces.internal.impl.dv.InvalidDatatypeValueException"},
		{"getAllowedFacets", "()S", nullptr, $PUBLIC, $virtualMethod(AnyURIDV, getAllowedFacets, int16_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.xs.AnyURIDV",
		"com.sun.org.apache.xerces.internal.impl.dv.xs.TypeValidator",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AnyURIDV, name, initialize, &classInfo$$, AnyURIDV::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(AnyURIDV);
	});
	return class$;
}

$Class* AnyURIDV::class$ = nullptr;

								} // xs
							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
#include <javax/naming/ldap/PagedResultsResponseControl.h>
#include <com/sun/jndi/ldap/Ber.h>
#include <com/sun/jndi/ldap/BerDecoder.h>
#include <javax/naming/ldap/BasicControl.h>
#include <jcpp.h>

#undef ASN_OCTET_STR
#undef OID

using $Ber = ::com::sun::jndi::ldap::Ber;
using $BerDecoder = ::com::sun::jndi::ldap::BerDecoder;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicControl = ::javax::naming::ldap::BasicControl;

namespace javax {
	namespace naming {
		namespace ldap {

$String* PagedResultsResponseControl::OID = nullptr;

void PagedResultsResponseControl::init$($String* id, bool criticality, $bytes* value) {
	$BasicControl::init$(id, criticality, value);
	$var($BerDecoder, ber, $new($BerDecoder, value, 0, $nc(value)->length));
	ber->parseSeq(nullptr);
	this->resultSize = ber->parseInt();
	$set(this, cookie, ber->parseOctetString($Ber::ASN_OCTET_STR, nullptr));
}

int32_t PagedResultsResponseControl::getResultSize() {
	return this->resultSize;
}

$bytes* PagedResultsResponseControl::getCookie() {
	if ($nc(this->cookie)->length == 0) {
		return nullptr;
	} else {
		return this->cookie;
	}
}

PagedResultsResponseControl::PagedResultsResponseControl() {
}

void PagedResultsResponseControl::clinit$($Class* clazz) {
	$assignStatic(PagedResultsResponseControl::OID, "1.2.840.113556.1.4.319"_s);
}

$Class* PagedResultsResponseControl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PagedResultsResponseControl, OID)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PagedResultsResponseControl, serialVersionUID)},
		{"resultSize", "I", nullptr, $PRIVATE, $field(PagedResultsResponseControl, resultSize)},
		{"cookie", "[B", nullptr, $PRIVATE, $field(PagedResultsResponseControl, cookie)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Z[B)V", nullptr, $PUBLIC, $method(PagedResultsResponseControl, init$, void, $String*, bool, $bytes*), "java.io.IOException"},
		{"getCookie", "()[B", nullptr, $PUBLIC, $method(PagedResultsResponseControl, getCookie, $bytes*)},
		{"getResultSize", "()I", nullptr, $PUBLIC, $method(PagedResultsResponseControl, getResultSize, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.naming.ldap.PagedResultsResponseControl",
		"javax.naming.ldap.BasicControl",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PagedResultsResponseControl, name, initialize, &classInfo$$, PagedResultsResponseControl::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PagedResultsResponseControl);
	});
	return class$;
}

$Class* PagedResultsResponseControl::class$ = nullptr;

		} // ldap
	} // naming
} // javax
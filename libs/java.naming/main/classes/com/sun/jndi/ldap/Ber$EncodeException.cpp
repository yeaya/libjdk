#include <com/sun/jndi/ldap/Ber$EncodeException.h>
#include <com/sun/jndi/ldap/Ber.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void Ber$EncodeException::init$($String* msg) {
	$IOException::init$(msg);
}

Ber$EncodeException::Ber$EncodeException() {
}

Ber$EncodeException::Ber$EncodeException(const Ber$EncodeException& e) : $IOException(e) {
}

void Ber$EncodeException::throw$() {
	throw *this;
}

$Class* Ber$EncodeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Ber$EncodeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(Ber$EncodeException, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.ldap.Ber$EncodeException", "com.sun.jndi.ldap.Ber", "EncodeException", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.Ber$EncodeException",
		"java.io.IOException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.ldap.Ber"
	};
	$loadClass(Ber$EncodeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Ber$EncodeException);
	});
	return class$;
}

$Class* Ber$EncodeException::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com
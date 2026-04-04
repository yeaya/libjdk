#include <com/sun/jndi/ldap/Ber$DecodeException.h>
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

void Ber$DecodeException::init$($String* msg) {
	$IOException::init$(msg);
}

Ber$DecodeException::Ber$DecodeException() {
}

Ber$DecodeException::Ber$DecodeException(const Ber$DecodeException& e) : $IOException(e) {
}

void Ber$DecodeException::throw$() {
	throw *this;
}

$Class* Ber$DecodeException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Ber$DecodeException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(Ber$DecodeException, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.ldap.Ber$DecodeException", "com.sun.jndi.ldap.Ber", "DecodeException", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.Ber$DecodeException",
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
	$loadClass(Ber$DecodeException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Ber$DecodeException);
	});
	return class$;
}

$Class* Ber$DecodeException::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com
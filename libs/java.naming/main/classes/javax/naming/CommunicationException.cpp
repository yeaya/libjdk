#include <javax/naming/CommunicationException.h>
#include <javax/naming/NamingException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingException = ::javax::naming::NamingException;

namespace javax {
	namespace naming {

void CommunicationException::init$($String* explanation) {
	$NamingException::init$(explanation);
}

void CommunicationException::init$() {
	$NamingException::init$();
}

CommunicationException::CommunicationException() {
}

CommunicationException::CommunicationException(const CommunicationException& e) : $NamingException(e) {
}

void CommunicationException::throw$() {
	throw *this;
}

$Class* CommunicationException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CommunicationException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(CommunicationException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(CommunicationException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.CommunicationException",
		"javax.naming.NamingException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CommunicationException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CommunicationException);
	});
	return class$;
}

$Class* CommunicationException::class$ = nullptr;

	} // naming
} // javax
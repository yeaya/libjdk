#include <javax/naming/MalformedLinkException.h>
#include <javax/naming/LinkException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkException = ::javax::naming::LinkException;

namespace javax {
	namespace naming {

void MalformedLinkException::init$($String* explanation) {
	$LinkException::init$(explanation);
}

void MalformedLinkException::init$() {
	$LinkException::init$();
}

MalformedLinkException::MalformedLinkException() {
}

MalformedLinkException::MalformedLinkException(const MalformedLinkException& e) : $LinkException(e) {
}

void MalformedLinkException::throw$() {
	throw *this;
}

$Class* MalformedLinkException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MalformedLinkException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(MalformedLinkException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(MalformedLinkException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.MalformedLinkException",
		"javax.naming.LinkException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MalformedLinkException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MalformedLinkException);
	});
	return class$;
}

$Class* MalformedLinkException::class$ = nullptr;

	} // naming
} // javax
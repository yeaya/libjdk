#include <javax/naming/LinkLoopException.h>
#include <javax/naming/LinkException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkException = ::javax::naming::LinkException;

namespace javax {
	namespace naming {

void LinkLoopException::init$($String* explanation) {
	$LinkException::init$(explanation);
}

void LinkLoopException::init$() {
	$LinkException::init$();
}

LinkLoopException::LinkLoopException() {
}

LinkLoopException::LinkLoopException(const LinkLoopException& e) : $LinkException(e) {
}

void LinkLoopException::throw$() {
	throw *this;
}

$Class* LinkLoopException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinkLoopException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LinkLoopException, init$, void, $String*)},
		{"<init>", "()V", nullptr, $PUBLIC, $method(LinkLoopException, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.LinkLoopException",
		"javax.naming.LinkException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LinkLoopException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LinkLoopException);
	});
	return class$;
}

$Class* LinkLoopException::class$ = nullptr;

	} // naming
} // javax
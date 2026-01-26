#include <javax/naming/LinkLoopException.h>

#include <javax/naming/LinkException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LinkException = ::javax::naming::LinkException;

namespace javax {
	namespace naming {

$FieldInfo _LinkLoopException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LinkLoopException, serialVersionUID)},
	{}
};

$MethodInfo _LinkLoopException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LinkLoopException, init$, void, $String*)},
	{"<init>", "()V", nullptr, $PUBLIC, $method(LinkLoopException, init$, void)},
	{}
};

$ClassInfo _LinkLoopException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.naming.LinkLoopException",
	"javax.naming.LinkException",
	nullptr,
	_LinkLoopException_FieldInfo_,
	_LinkLoopException_MethodInfo_
};

$Object* allocate$LinkLoopException($Class* clazz) {
	return $of($alloc(LinkLoopException));
}

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
	$loadClass(LinkLoopException, name, initialize, &_LinkLoopException_ClassInfo_, allocate$LinkLoopException);
	return class$;
}

$Class* LinkLoopException::class$ = nullptr;

	} // naming
} // javax
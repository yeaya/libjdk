#include <java/awt/HeadlessException.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/lang/UnsupportedOperationException.h>
#include <jcpp.h>

using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;

namespace java {
	namespace awt {

void HeadlessException::init$() {
	$UnsupportedOperationException::init$();
}

void HeadlessException::init$($String* msg) {
	$UnsupportedOperationException::init$(msg);
}

$String* HeadlessException::getMessage() {
	$useLocalObjectStack();
	$var($String, superMessage, $UnsupportedOperationException::getMessage());
	$var($String, headlessMessage, $GraphicsEnvironment::getHeadlessMessage());
	if (superMessage == nullptr) {
		return headlessMessage;
	} else if (headlessMessage == nullptr) {
		return superMessage;
	} else {
		return $str({superMessage, headlessMessage});
	}
}

HeadlessException::HeadlessException() {
}

HeadlessException::HeadlessException(const HeadlessException& e) : $UnsupportedOperationException(e) {
}

void HeadlessException::throw$() {
	throw *this;
}

$Class* HeadlessException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(HeadlessException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HeadlessException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HeadlessException, init$, void, $String*)},
		{"getMessage", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HeadlessException, getMessage, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.HeadlessException",
		"java.lang.UnsupportedOperationException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HeadlessException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HeadlessException);
	});
	return class$;
}

$Class* HeadlessException::class$ = nullptr;

	} // awt
} // java
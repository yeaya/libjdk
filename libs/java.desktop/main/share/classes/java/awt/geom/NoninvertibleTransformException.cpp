#include <java/awt/geom/NoninvertibleTransformException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace geom {

void NoninvertibleTransformException::init$($String* s) {
	$Exception::init$(s);
}

NoninvertibleTransformException::NoninvertibleTransformException() {
}

NoninvertibleTransformException::NoninvertibleTransformException(const NoninvertibleTransformException& e) : $Exception(e) {
}

void NoninvertibleTransformException::throw$() {
	throw *this;
}

$Class* NoninvertibleTransformException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoninvertibleTransformException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NoninvertibleTransformException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.geom.NoninvertibleTransformException",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NoninvertibleTransformException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NoninvertibleTransformException);
	});
	return class$;
}

$Class* NoninvertibleTransformException::class$ = nullptr;

		} // geom
	} // awt
} // java
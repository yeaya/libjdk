#include <com/sun/org/apache/xerces/internal/impl/dv/DVFactoryException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dv {

void DVFactoryException::init$() {
	$RuntimeException::init$();
}

void DVFactoryException::init$($String* msg) {
	$RuntimeException::init$(msg);
}

DVFactoryException::DVFactoryException() {
}

DVFactoryException::DVFactoryException(const DVFactoryException& e) : $RuntimeException(e) {
}

void DVFactoryException::throw$() {
	throw *this;
}

$Class* DVFactoryException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DVFactoryException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DVFactoryException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DVFactoryException, init$, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.dv.DVFactoryException",
		"java.lang.RuntimeException",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DVFactoryException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DVFactoryException);
	});
	return class$;
}

$Class* DVFactoryException::class$ = nullptr;

							} // dv
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
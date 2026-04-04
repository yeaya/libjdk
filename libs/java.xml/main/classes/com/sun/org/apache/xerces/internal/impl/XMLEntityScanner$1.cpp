#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner$1.h>
#include <java/io/EOFException.h>
#include <jcpp.h>

using $EOFException = ::java::io::EOFException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

void XMLEntityScanner$1::init$() {
	$EOFException::init$();
}

$Throwable* XMLEntityScanner$1::fillInStackTrace() {
	return this;
}

XMLEntityScanner$1::XMLEntityScanner$1() {
}

XMLEntityScanner$1::XMLEntityScanner$1(const XMLEntityScanner$1& e) : $EOFException(e) {
}

void XMLEntityScanner$1::throw$() {
	throw *this;
}

$Class* XMLEntityScanner$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLEntityScanner$1, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XMLEntityScanner$1, init$, void)},
		{"fillInStackTrace", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner$1, fillInStackTrace, $Throwable*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.org.apache.xerces.internal.impl.XMLEntityScanner",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.impl.XMLEntityScanner$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.impl.XMLEntityScanner$1",
		"java.io.EOFException",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.impl.XMLEntityScanner"
	};
	$loadClass(XMLEntityScanner$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(XMLEntityScanner$1);
	});
	return class$;
}

$Class* XMLEntityScanner$1::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
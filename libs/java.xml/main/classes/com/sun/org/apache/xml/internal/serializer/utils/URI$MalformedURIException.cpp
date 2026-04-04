#include <com/sun/org/apache/xml/internal/serializer/utils/URI$MalformedURIException.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/URI.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

void URI$MalformedURIException::init$() {
	$IOException::init$();
}

void URI$MalformedURIException::init$($String* p_msg) {
	$IOException::init$(p_msg);
}

URI$MalformedURIException::URI$MalformedURIException() {
}

URI$MalformedURIException::URI$MalformedURIException(const URI$MalformedURIException& e) : $IOException(e) {
}

void URI$MalformedURIException::throw$() {
	throw *this;
}

$Class* URI$MalformedURIException::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URI$MalformedURIException, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(URI$MalformedURIException, init$, void)},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(URI$MalformedURIException, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException", "com.sun.org.apache.xml.internal.serializer.utils.URI", "MalformedURIException", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.utils.URI$MalformedURIException",
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
		"com.sun.org.apache.xml.internal.serializer.utils.URI"
	};
	$loadClass(URI$MalformedURIException, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(URI$MalformedURIException);
	});
	return class$;
}

$Class* URI$MalformedURIException::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
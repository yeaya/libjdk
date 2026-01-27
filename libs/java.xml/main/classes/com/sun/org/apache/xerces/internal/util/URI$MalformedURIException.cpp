#include <com/sun/org/apache/xerces/internal/util/URI$MalformedURIException.h>

#include <com/sun/org/apache/xerces/internal/util/URI.h>
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
				namespace xerces {
					namespace internal {
						namespace util {

$FieldInfo _URI$MalformedURIException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(URI$MalformedURIException, serialVersionUID)},
	{}
};

$MethodInfo _URI$MalformedURIException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(URI$MalformedURIException, init$, void)},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(URI$MalformedURIException, init$, void, $String*)},
	{}
};

$InnerClassInfo _URI$MalformedURIException_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.util.URI$MalformedURIException", "com.sun.org.apache.xerces.internal.util.URI", "MalformedURIException", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _URI$MalformedURIException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.URI$MalformedURIException",
	"java.io.IOException",
	nullptr,
	_URI$MalformedURIException_FieldInfo_,
	_URI$MalformedURIException_MethodInfo_,
	nullptr,
	nullptr,
	_URI$MalformedURIException_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.util.URI"
};

$Object* allocate$URI$MalformedURIException($Class* clazz) {
	return $of($alloc(URI$MalformedURIException));
}

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
	$loadClass(URI$MalformedURIException, name, initialize, &_URI$MalformedURIException_ClassInfo_, allocate$URI$MalformedURIException);
	return class$;
}

$Class* URI$MalformedURIException::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
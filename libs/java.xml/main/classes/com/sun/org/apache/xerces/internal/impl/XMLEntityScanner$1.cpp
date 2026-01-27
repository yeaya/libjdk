#include <com/sun/org/apache/xerces/internal/impl/XMLEntityScanner$1.h>

#include <java/io/EOFException.h>
#include <java/io/IOException.h>
#include <jcpp.h>

using $EOFException = ::java::io::EOFException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
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

$FieldInfo _XMLEntityScanner$1_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLEntityScanner$1, serialVersionUID)},
	{}
};

$MethodInfo _XMLEntityScanner$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(XMLEntityScanner$1, init$, void)},
	{"fillInStackTrace", "()Ljava/lang/Throwable;", nullptr, $PUBLIC, $virtualMethod(XMLEntityScanner$1, fillInStackTrace, $Throwable*)},
	{}
};

$EnclosingMethodInfo _XMLEntityScanner$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xerces.internal.impl.XMLEntityScanner",
	nullptr,
	nullptr
};

$InnerClassInfo _XMLEntityScanner$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLEntityScanner$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLEntityScanner$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLEntityScanner$1",
	"java.io.EOFException",
	nullptr,
	_XMLEntityScanner$1_FieldInfo_,
	_XMLEntityScanner$1_MethodInfo_,
	nullptr,
	&_XMLEntityScanner$1_EnclosingMethodInfo_,
	_XMLEntityScanner$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLEntityScanner"
};

$Object* allocate$XMLEntityScanner$1($Class* clazz) {
	return $of($alloc(XMLEntityScanner$1));
}

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
	$loadClass(XMLEntityScanner$1, name, initialize, &_XMLEntityScanner$1_ClassInfo_, allocate$XMLEntityScanner$1);
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
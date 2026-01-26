#include <javax/annotation/processing/FilerException.h>

#include <java/io/IOException.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace annotation {
		namespace processing {

$FieldInfo _FilerException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(FilerException, serialVersionUID)},
	{}
};

$MethodInfo _FilerException_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(FilerException, init$, void, $String*)},
	{}
};

$ClassInfo _FilerException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.annotation.processing.FilerException",
	"java.io.IOException",
	nullptr,
	_FilerException_FieldInfo_,
	_FilerException_MethodInfo_
};

$Object* allocate$FilerException($Class* clazz) {
	return $of($alloc(FilerException));
}

void FilerException::init$($String* s) {
	$IOException::init$(s);
}

FilerException::FilerException() {
}

FilerException::FilerException(const FilerException& e) : $IOException(e) {
}

void FilerException::throw$() {
	throw *this;
}

$Class* FilerException::load$($String* name, bool initialize) {
	$loadClass(FilerException, name, initialize, &_FilerException_ClassInfo_, allocate$FilerException);
	return class$;
}

$Class* FilerException::class$ = nullptr;

		} // processing
	} // annotation
} // javax
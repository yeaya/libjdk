#include <com/sun/org/apache/bcel/internal/classfile/Signature$MyByteArrayInputStream.h>

#include <com/sun/org/apache/bcel/internal/classfile/Signature.h>
#include <java/io/ByteArrayInputStream.h>
#include <jcpp.h>

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace classfile {

$MethodInfo _Signature$MyByteArrayInputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(Signature$MyByteArrayInputStream, init$, void, $String*)},
	{"getData", "()Ljava/lang/String;", nullptr, 0, $method(Signature$MyByteArrayInputStream, getData, $String*)},
	{"unread", "()V", nullptr, 0, $method(Signature$MyByteArrayInputStream, unread, void)},
	{}
};

$InnerClassInfo _Signature$MyByteArrayInputStream_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.classfile.Signature$MyByteArrayInputStream", "com.sun.org.apache.bcel.internal.classfile.Signature", "MyByteArrayInputStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _Signature$MyByteArrayInputStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.classfile.Signature$MyByteArrayInputStream",
	"java.io.ByteArrayInputStream",
	nullptr,
	nullptr,
	_Signature$MyByteArrayInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_Signature$MyByteArrayInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.classfile.Signature"
};

$Object* allocate$Signature$MyByteArrayInputStream($Class* clazz) {
	return $of($alloc(Signature$MyByteArrayInputStream));
}

void Signature$MyByteArrayInputStream::init$($String* data) {
	$ByteArrayInputStream::init$($($nc(data)->getBytes()));
}

$String* Signature$MyByteArrayInputStream::getData() {
	return $new($String, this->buf);
}

void Signature$MyByteArrayInputStream::unread() {
	if (this->pos > 0) {
		--this->pos;
	}
}

Signature$MyByteArrayInputStream::Signature$MyByteArrayInputStream() {
}

$Class* Signature$MyByteArrayInputStream::load$($String* name, bool initialize) {
	$loadClass(Signature$MyByteArrayInputStream, name, initialize, &_Signature$MyByteArrayInputStream_ClassInfo_, allocate$Signature$MyByteArrayInputStream);
	return class$;
}

$Class* Signature$MyByteArrayInputStream::class$ = nullptr;

						} // classfile
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com
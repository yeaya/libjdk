#include <com/sun/org/apache/bcel/internal/util/ByteSequence$ByteArrayStream.h>

#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>
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
						namespace util {

$MethodInfo _ByteSequence$ByteArrayStream_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, 0, $method(ByteSequence$ByteArrayStream, init$, void, $bytes*)},
	{"getPosition", "()I", nullptr, 0, $method(ByteSequence$ByteArrayStream, getPosition, int32_t)},
	{"unreadByte", "()V", nullptr, 0, $method(ByteSequence$ByteArrayStream, unreadByte, void)},
	{}
};

$InnerClassInfo _ByteSequence$ByteArrayStream_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.util.ByteSequence$ByteArrayStream", "com.sun.org.apache.bcel.internal.util.ByteSequence", "ByteArrayStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ByteSequence$ByteArrayStream_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.ByteSequence$ByteArrayStream",
	"java.io.ByteArrayInputStream",
	nullptr,
	nullptr,
	_ByteSequence$ByteArrayStream_MethodInfo_,
	nullptr,
	nullptr,
	_ByteSequence$ByteArrayStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.util.ByteSequence"
};

$Object* allocate$ByteSequence$ByteArrayStream($Class* clazz) {
	return $of($alloc(ByteSequence$ByteArrayStream));
}

void ByteSequence$ByteArrayStream::init$($bytes* bytes) {
	$ByteArrayInputStream::init$(bytes);
}

int32_t ByteSequence$ByteArrayStream::getPosition() {
	return this->pos;
}

void ByteSequence$ByteArrayStream::unreadByte() {
	if (this->pos > 0) {
		--this->pos;
	}
}

ByteSequence$ByteArrayStream::ByteSequence$ByteArrayStream() {
}

$Class* ByteSequence$ByteArrayStream::load$($String* name, bool initialize) {
	$loadClass(ByteSequence$ByteArrayStream, name, initialize, &_ByteSequence$ByteArrayStream_ClassInfo_, allocate$ByteSequence$ByteArrayStream);
	return class$;
}

$Class* ByteSequence$ByteArrayStream::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com
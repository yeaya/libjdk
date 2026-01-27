#include <com/sun/org/apache/bcel/internal/util/ByteSequence.h>

#include <com/sun/org/apache/bcel/internal/util/ByteSequence$ByteArrayStream.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/DataInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

using $ByteSequence$ByteArrayStream = ::com::sun::org::apache::bcel::internal::util::ByteSequence$ByteArrayStream;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $DataInputStream = ::java::io::DataInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

$FieldInfo _ByteSequence_FieldInfo_[] = {
	{"byteStream", "Lcom/sun/org/apache/bcel/internal/util/ByteSequence$ByteArrayStream;", nullptr, $PRIVATE | $FINAL, $field(ByteSequence, byteStream)},
	{}
};

$MethodInfo _ByteSequence_MethodInfo_[] = {
	{"<init>", "([B)V", nullptr, $PUBLIC, $method(ByteSequence, init$, void, $bytes*)},
	{"getIndex", "()I", nullptr, $PUBLIC, $method(ByteSequence, getIndex, int32_t)},
	{"unreadByte", "()V", nullptr, 0, $method(ByteSequence, unreadByte, void)},
	{}
};

$InnerClassInfo _ByteSequence_InnerClassesInfo_[] = {
	{"com.sun.org.apache.bcel.internal.util.ByteSequence$ByteArrayStream", "com.sun.org.apache.bcel.internal.util.ByteSequence", "ByteArrayStream", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _ByteSequence_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.bcel.internal.util.ByteSequence",
	"java.io.DataInputStream",
	nullptr,
	_ByteSequence_FieldInfo_,
	_ByteSequence_MethodInfo_,
	nullptr,
	nullptr,
	_ByteSequence_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.bcel.internal.util.ByteSequence$ByteArrayStream"
};

$Object* allocate$ByteSequence($Class* clazz) {
	return $of($alloc(ByteSequence));
}

void ByteSequence::init$($bytes* bytes) {
	$DataInputStream::init$($$new($ByteSequence$ByteArrayStream, bytes));
	$set(this, byteStream, $cast($ByteSequence$ByteArrayStream, this->in));
}

int32_t ByteSequence::getIndex() {
	return $nc(this->byteStream)->getPosition();
}

void ByteSequence::unreadByte() {
	$nc(this->byteStream)->unreadByte();
}

ByteSequence::ByteSequence() {
}

$Class* ByteSequence::load$($String* name, bool initialize) {
	$loadClass(ByteSequence, name, initialize, &_ByteSequence_ClassInfo_, allocate$ByteSequence);
	return class$;
}

$Class* ByteSequence::class$ = nullptr;

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com
#include <javax/imageio/stream/IIOByteBuffer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace imageio {
		namespace stream {

$FieldInfo _IIOByteBuffer_FieldInfo_[] = {
	{"data", "[B", nullptr, $PRIVATE, $field(IIOByteBuffer, data)},
	{"offset", "I", nullptr, $PRIVATE, $field(IIOByteBuffer, offset)},
	{"length", "I", nullptr, $PRIVATE, $field(IIOByteBuffer, length)},
	{}
};

$MethodInfo _IIOByteBuffer_MethodInfo_[] = {
	{"<init>", "([BII)V", nullptr, $PUBLIC, $method(IIOByteBuffer, init$, void, $bytes*, int32_t, int32_t)},
	{"getData", "()[B", nullptr, $PUBLIC, $virtualMethod(IIOByteBuffer, getData, $bytes*)},
	{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(IIOByteBuffer, getLength, int32_t)},
	{"getOffset", "()I", nullptr, $PUBLIC, $virtualMethod(IIOByteBuffer, getOffset, int32_t)},
	{"setData", "([B)V", nullptr, $PUBLIC, $virtualMethod(IIOByteBuffer, setData, void, $bytes*)},
	{"setLength", "(I)V", nullptr, $PUBLIC, $virtualMethod(IIOByteBuffer, setLength, void, int32_t)},
	{"setOffset", "(I)V", nullptr, $PUBLIC, $virtualMethod(IIOByteBuffer, setOffset, void, int32_t)},
	{}
};

$ClassInfo _IIOByteBuffer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.imageio.stream.IIOByteBuffer",
	"java.lang.Object",
	nullptr,
	_IIOByteBuffer_FieldInfo_,
	_IIOByteBuffer_MethodInfo_
};

$Object* allocate$IIOByteBuffer($Class* clazz) {
	return $of($alloc(IIOByteBuffer));
}

void IIOByteBuffer::init$($bytes* data, int32_t offset, int32_t length) {
	$set(this, data, data);
	this->offset = offset;
	this->length = length;
}

$bytes* IIOByteBuffer::getData() {
	return this->data;
}

void IIOByteBuffer::setData($bytes* data) {
	$set(this, data, data);
}

int32_t IIOByteBuffer::getOffset() {
	return this->offset;
}

void IIOByteBuffer::setOffset(int32_t offset) {
	this->offset = offset;
}

int32_t IIOByteBuffer::getLength() {
	return this->length;
}

void IIOByteBuffer::setLength(int32_t length) {
	this->length = length;
}

IIOByteBuffer::IIOByteBuffer() {
}

$Class* IIOByteBuffer::load$($String* name, bool initialize) {
	$loadClass(IIOByteBuffer, name, initialize, &_IIOByteBuffer_ClassInfo_, allocate$IIOByteBuffer);
	return class$;
}

$Class* IIOByteBuffer::class$ = nullptr;

		} // stream
	} // imageio
} // javax
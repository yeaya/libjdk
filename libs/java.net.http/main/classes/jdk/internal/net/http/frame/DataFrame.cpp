#include <jdk/internal/net/http/frame/DataFrame.h>

#include <java/nio/ByteBuffer.h>
#include <java/util/List.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jdk/internal/net/http/frame/Http2Frame.h>
#include <jcpp.h>

#undef END_STREAM
#undef MAX_VALUE
#undef PADDED
#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $List = ::java::util::List;
using $Utils = ::jdk::internal::net::http::common::Utils;
using $Http2Frame = ::jdk::internal::net::http::frame::Http2Frame;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace frame {

$FieldInfo _DataFrame_FieldInfo_[] = {
	{"TYPE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DataFrame, TYPE)},
	{"END_STREAM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DataFrame, END_STREAM)},
	{"PADDED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DataFrame, PADDED)},
	{"padLength", "I", nullptr, $PRIVATE, $field(DataFrame, padLength)},
	{"data", "Ljava/util/List;", "Ljava/util/List<Ljava/nio/ByteBuffer;>;", $PRIVATE | $FINAL, $field(DataFrame, data)},
	{"dataLength", "I", nullptr, $PRIVATE | $FINAL, $field(DataFrame, dataLength)},
	{}
};

$MethodInfo _DataFrame_MethodInfo_[] = {
	{"<init>", "(IILjava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $method(DataFrame, init$, void, int32_t, int32_t, $ByteBuffer*)},
	{"<init>", "(IILjava/util/List;)V", "(IILjava/util/List<Ljava/nio/ByteBuffer;>;)V", $PUBLIC, $method(DataFrame, init$, void, int32_t, int32_t, $List*)},
	{"<init>", "(IILjava/util/List;I)V", "(IILjava/util/List<Ljava/nio/ByteBuffer;>;I)V", $PUBLIC, $method(DataFrame, init$, void, int32_t, int32_t, $List*, int32_t)},
	{"flagAsString", "(I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DataFrame, flagAsString, $String*, int32_t)},
	{"getData", "()Ljava/util/List;", "()Ljava/util/List<Ljava/nio/ByteBuffer;>;", $PUBLIC, $virtualMethod(DataFrame, getData, $List*)},
	{"getDataLength", "()I", nullptr, $PUBLIC, $virtualMethod(DataFrame, getDataLength, int32_t)},
	{"getPadLength", "()I", nullptr, 0, $virtualMethod(DataFrame, getPadLength, int32_t)},
	{"length", "()I", nullptr, 0, $virtualMethod(DataFrame, length, int32_t)},
	{"payloadLength", "()I", nullptr, $PUBLIC, $virtualMethod(DataFrame, payloadLength, int32_t)},
	{"setPadLength", "(I)V", nullptr, $PUBLIC, $virtualMethod(DataFrame, setPadLength, void, int32_t)},
	{"type", "()I", nullptr, $PUBLIC, $virtualMethod(DataFrame, type, int32_t)},
	{}
};

$ClassInfo _DataFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.internal.net.http.frame.DataFrame",
	"jdk.internal.net.http.frame.Http2Frame",
	nullptr,
	_DataFrame_FieldInfo_,
	_DataFrame_MethodInfo_
};

$Object* allocate$DataFrame($Class* clazz) {
	return $of($alloc(DataFrame));
}

void DataFrame::init$(int32_t streamid, int32_t flags, $ByteBuffer* data) {
	DataFrame::init$(streamid, flags, $($List::of($of(data))));
}

void DataFrame::init$(int32_t streamid, int32_t flags, $List* data) {
	$Http2Frame::init$(streamid, flags);
	$set(this, data, data);
	this->dataLength = $Utils::remaining(data, $Integer::MAX_VALUE);
}

void DataFrame::init$(int32_t streamid, int32_t flags, $List* data, int32_t padLength) {
	DataFrame::init$(streamid, flags, data);
	if (padLength > 0) {
		setPadLength(padLength);
	}
}

int32_t DataFrame::type() {
	return DataFrame::TYPE;
}

int32_t DataFrame::length() {
	return this->dataLength + ((((int32_t)(this->flags & (uint32_t)DataFrame::PADDED)) != 0) ? (this->padLength + 1) : 0);
}

$String* DataFrame::flagAsString(int32_t flag) {

	$var($String, var$0, nullptr)
	switch (flag) {
	case DataFrame::END_STREAM:
		{
			$assign(var$0, "END_STREAM"_s);
			break;
		}
	case DataFrame::PADDED:
		{
			$assign(var$0, "PADDED"_s);
			break;
		}
	default:
		{
			$assign(var$0, $Http2Frame::flagAsString(flag));
			break;
		}
	}
	return var$0;
}

$List* DataFrame::getData() {
	return this->data;
}

int32_t DataFrame::getDataLength() {
	return this->dataLength;
}

int32_t DataFrame::getPadLength() {
	return this->padLength;
}

void DataFrame::setPadLength(int32_t padLength) {
	this->padLength = padLength;
	this->flags |= DataFrame::PADDED;
}

int32_t DataFrame::payloadLength() {
	if (((int32_t)(this->flags & (uint32_t)DataFrame::PADDED)) != 0) {
		return this->dataLength + (1 + this->padLength);
	} else {
		return this->dataLength;
	}
}

DataFrame::DataFrame() {
}

$Class* DataFrame::load$($String* name, bool initialize) {
	$loadClass(DataFrame, name, initialize, &_DataFrame_ClassInfo_, allocate$DataFrame);
	return class$;
}

$Class* DataFrame::class$ = nullptr;

				} // frame
			} // http
		} // net
	} // internal
} // jdk
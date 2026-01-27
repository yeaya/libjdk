#include <javax/imageio/stream/ImageInputStream.h>

#include <java/io/DataInput.h>
#include <java/nio/ByteOrder.h>
#include <javax/imageio/stream/IIOByteBuffer.h>
#include <jcpp.h>

using $DataInput = ::java::io::DataInput;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteOrder = ::java::nio::ByteOrder;
using $IIOByteBuffer = ::javax::imageio::stream::IIOByteBuffer;

namespace javax {
	namespace imageio {
		namespace stream {

$MethodInfo _ImageInputStream_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"flush", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, flush, void), "java.io.IOException"},
	{"flushBefore", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, flushBefore, void, int64_t), "java.io.IOException"},
	{"getBitOffset", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, getBitOffset, int32_t), "java.io.IOException"},
	{"getByteOrder", "()Ljava/nio/ByteOrder;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, getByteOrder, $ByteOrder*)},
	{"getFlushedPosition", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, getFlushedPosition, int64_t)},
	{"getStreamPosition", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, getStreamPosition, int64_t), "java.io.IOException"},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"isCached", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, isCached, bool)},
	{"isCachedFile", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, isCachedFile, bool)},
	{"isCachedMemory", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, isCachedMemory, bool)},
	{"length", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, length, int64_t), "java.io.IOException"},
	{"mark", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, mark, void)},
	{"read", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, read, int32_t, $bytes*), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"readBit", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, readBit, int32_t), "java.io.IOException"},
	{"readBits", "(I)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, readBits, int64_t, int32_t), "java.io.IOException"},
	{"readBoolean", "()Z", nullptr, $PUBLIC | $ABSTRACT},
	{"readByte", "()B", nullptr, $PUBLIC | $ABSTRACT},
	{"readBytes", "(Ljavax/imageio/stream/IIOByteBuffer;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, readBytes, void, $IIOByteBuffer*, int32_t), "java.io.IOException"},
	{"readChar", "()C", nullptr, $PUBLIC | $ABSTRACT},
	{"readDouble", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"readFloat", "()F", nullptr, $PUBLIC | $ABSTRACT},
	{"readFully", "([BII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"readFully", "([B)V", nullptr, $PUBLIC | $ABSTRACT},
	{"readFully", "([SII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, readFully, void, $shorts*, int32_t, int32_t), "java.io.IOException"},
	{"readFully", "([CII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, readFully, void, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"readFully", "([III)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, readFully, void, $ints*, int32_t, int32_t), "java.io.IOException"},
	{"readFully", "([JII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, readFully, void, $longs*, int32_t, int32_t), "java.io.IOException"},
	{"readFully", "([FII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, readFully, void, $floats*, int32_t, int32_t), "java.io.IOException"},
	{"readFully", "([DII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, readFully, void, $doubles*, int32_t, int32_t), "java.io.IOException"},
	{"readInt", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"readLong", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{"readShort", "()S", nullptr, $PUBLIC | $ABSTRACT},
	{"readUTF", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"readUnsignedByte", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"readUnsignedInt", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, readUnsignedInt, int64_t), "java.io.IOException"},
	{"readUnsignedShort", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"reset", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, reset, void), "java.io.IOException"},
	{"seek", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, seek, void, int64_t), "java.io.IOException"},
	{"setBitOffset", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, setBitOffset, void, int32_t), "java.io.IOException"},
	{"setByteOrder", "(Ljava/nio/ByteOrder;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, setByteOrder, void, $ByteOrder*)},
	{"skipBytes", "(I)I", nullptr, $PUBLIC | $ABSTRACT},
	{"skipBytes", "(J)J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ImageInputStream, skipBytes, int64_t, int64_t), "java.io.IOException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ImageInputStream_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.imageio.stream.ImageInputStream",
	nullptr,
	"java.io.DataInput,java.io.Closeable",
	nullptr,
	_ImageInputStream_MethodInfo_
};

$Object* allocate$ImageInputStream($Class* clazz) {
	return $of($alloc(ImageInputStream));
}

int32_t ImageInputStream::hashCode() {
	 return this->$DataInput::hashCode();
}

bool ImageInputStream::equals(Object$* arg0) {
	 return this->$DataInput::equals(arg0);
}

$Object* ImageInputStream::clone() {
	 return this->$DataInput::clone();
}

$String* ImageInputStream::toString() {
	 return this->$DataInput::toString();
}

void ImageInputStream::finalize() {
	this->$DataInput::finalize();
}

$Class* ImageInputStream::load$($String* name, bool initialize) {
	$loadClass(ImageInputStream, name, initialize, &_ImageInputStream_ClassInfo_, allocate$ImageInputStream);
	return class$;
}

$Class* ImageInputStream::class$ = nullptr;

		} // stream
	} // imageio
} // javax
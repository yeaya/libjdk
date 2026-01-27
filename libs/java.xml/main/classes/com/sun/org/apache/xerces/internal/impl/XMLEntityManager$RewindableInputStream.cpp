#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager$RewindableInputStream.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/xml/internal/stream/Entity$ScannedEntity.h>
#include <java/io/InputStream.h>
#include <jcpp.h>

#undef DEFAULT_XMLDECL_BUFFER_SIZE

using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $Entity$ScannedEntity = ::com::sun::xml::internal::stream::Entity$ScannedEntity;
using $InputStream = ::java::io::InputStream;
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
						namespace impl {

$FieldInfo _XMLEntityManager$RewindableInputStream_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;", nullptr, $FINAL | $SYNTHETIC, $field(XMLEntityManager$RewindableInputStream, this$0)},
	{"fInputStream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(XMLEntityManager$RewindableInputStream, fInputStream)},
	{"fData", "[B", nullptr, $PRIVATE, $field(XMLEntityManager$RewindableInputStream, fData)},
	{"fStartOffset", "I", nullptr, $PRIVATE, $field(XMLEntityManager$RewindableInputStream, fStartOffset)},
	{"fEndOffset", "I", nullptr, $PRIVATE, $field(XMLEntityManager$RewindableInputStream, fEndOffset)},
	{"fOffset", "I", nullptr, $PRIVATE, $field(XMLEntityManager$RewindableInputStream, fOffset)},
	{"fLength", "I", nullptr, $PRIVATE, $field(XMLEntityManager$RewindableInputStream, fLength)},
	{"fMark", "I", nullptr, $PRIVATE, $field(XMLEntityManager$RewindableInputStream, fMark)},
	{}
};

$MethodInfo _XMLEntityManager$RewindableInputStream_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(XMLEntityManager$RewindableInputStream, init$, void, $XMLEntityManager*, $InputStream*)},
	{"available", "()I", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager$RewindableInputStream, available, int32_t), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager$RewindableInputStream, close, void), "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager$RewindableInputStream, mark, void, int32_t)},
	{"markSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager$RewindableInputStream, markSupported, bool)},
	{"read", "()I", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager$RewindableInputStream, read, int32_t), "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager$RewindableInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
	{"readAndBuffer", "()I", nullptr, $PUBLIC, $method(XMLEntityManager$RewindableInputStream, readAndBuffer, int32_t), "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager$RewindableInputStream, reset, void)},
	{"rewind", "()V", nullptr, $PUBLIC, $method(XMLEntityManager$RewindableInputStream, rewind, void)},
	{"setStartOffset", "(I)V", nullptr, $PUBLIC, $method(XMLEntityManager$RewindableInputStream, setStartOffset, void, int32_t)},
	{"skip", "(J)J", nullptr, $PUBLIC, $virtualMethod(XMLEntityManager$RewindableInputStream, skip, int64_t, int64_t), "java.io.IOException"},
	{}
};

$InnerClassInfo _XMLEntityManager$RewindableInputStream_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLEntityManager$RewindableInputStream", "com.sun.org.apache.xerces.internal.impl.XMLEntityManager", "RewindableInputStream", $PROTECTED | $FINAL},
	{}
};

$ClassInfo _XMLEntityManager$RewindableInputStream_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLEntityManager$RewindableInputStream",
	"java.io.InputStream",
	nullptr,
	_XMLEntityManager$RewindableInputStream_FieldInfo_,
	_XMLEntityManager$RewindableInputStream_MethodInfo_,
	nullptr,
	nullptr,
	_XMLEntityManager$RewindableInputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLEntityManager"
};

$Object* allocate$XMLEntityManager$RewindableInputStream($Class* clazz) {
	return $of($alloc(XMLEntityManager$RewindableInputStream));
}

void XMLEntityManager$RewindableInputStream::init$($XMLEntityManager* this$0, $InputStream* is) {
	$set(this, this$0, this$0);
	$InputStream::init$();
	$set(this, fData, $new($bytes, 64));
	$set(this, fInputStream, is);
	this->fStartOffset = 0;
	this->fEndOffset = -1;
	this->fOffset = 0;
	this->fLength = 0;
	this->fMark = 0;
}

void XMLEntityManager$RewindableInputStream::setStartOffset(int32_t offset) {
	this->fStartOffset = offset;
}

void XMLEntityManager$RewindableInputStream::rewind() {
	this->fOffset = this->fStartOffset;
}

int32_t XMLEntityManager$RewindableInputStream::readAndBuffer() {
	if (this->fOffset == $nc(this->fData)->length) {
		$var($bytes, newData, $new($bytes, this->fOffset << 1));
		$System::arraycopy(this->fData, 0, newData, 0, this->fOffset);
		$set(this, fData, newData);
	}
	int32_t b = $nc(this->fInputStream)->read();
	if (b == -1) {
		this->fEndOffset = this->fOffset;
		return -1;
	}
	$nc(this->fData)->set(this->fLength++, (int8_t)b);
	++this->fOffset;
	return (int32_t)(b & (uint32_t)255);
}

int32_t XMLEntityManager$RewindableInputStream::read() {
	if (this->fOffset < this->fLength) {
		return (int32_t)($nc(this->fData)->get(this->fOffset++) & (uint32_t)255);
	}
	if (this->fOffset == this->fEndOffset) {
		return -1;
	}
	if ($nc(this->this$0->fCurrentEntity)->mayReadChunks) {
		return $nc(this->fInputStream)->read();
	}
	return readAndBuffer();
}

int32_t XMLEntityManager$RewindableInputStream::read($bytes* b, int32_t off, int32_t len) {
	int32_t bytesLeft = this->fLength - this->fOffset;
	if (bytesLeft == 0) {
		if (this->fOffset == this->fEndOffset) {
			return -1;
		}
		if ($nc(this->this$0->fCurrentEntity)->mayReadChunks || !$nc(this->this$0->fCurrentEntity)->xmlDeclChunkRead) {
			if (!$nc(this->this$0->fCurrentEntity)->xmlDeclChunkRead) {
				$nc(this->this$0->fCurrentEntity)->xmlDeclChunkRead = true;
				len = $Entity$ScannedEntity::DEFAULT_XMLDECL_BUFFER_SIZE;
			}
			return $nc(this->fInputStream)->read(b, off, len);
		}
		int32_t returnedVal = readAndBuffer();
		if (returnedVal == -1) {
			this->fEndOffset = this->fOffset;
			return -1;
		}
		$nc(b)->set(off, (int8_t)returnedVal);
		return 1;
	}
	if (len < bytesLeft) {
		if (len <= 0) {
			return 0;
		}
	} else {
		len = bytesLeft;
	}
	if (b != nullptr) {
		$System::arraycopy(this->fData, this->fOffset, b, off, len);
	}
	this->fOffset += len;
	return len;
}

int64_t XMLEntityManager$RewindableInputStream::skip(int64_t n) {
	int32_t bytesLeft = 0;
	if (n <= 0) {
		return 0;
	}
	bytesLeft = this->fLength - this->fOffset;
	if (bytesLeft == 0) {
		if (this->fOffset == this->fEndOffset) {
			return 0;
		}
		return $nc(this->fInputStream)->skip(n);
	}
	if (n <= bytesLeft) {
		this->fOffset += n;
		return n;
	}
	this->fOffset += bytesLeft;
	if (this->fOffset == this->fEndOffset) {
		return bytesLeft;
	}
	n -= bytesLeft;
	return $nc(this->fInputStream)->skip(n) + bytesLeft;
}

int32_t XMLEntityManager$RewindableInputStream::available() {
	int32_t bytesLeft = this->fLength - this->fOffset;
	if (bytesLeft == 0) {
		if (this->fOffset == this->fEndOffset) {
			return -1;
		}
		return $nc(this->this$0->fCurrentEntity)->mayReadChunks ? $nc(this->fInputStream)->available() : 0;
	}
	return bytesLeft;
}

void XMLEntityManager$RewindableInputStream::mark(int32_t howMuch) {
	this->fMark = this->fOffset;
}

void XMLEntityManager$RewindableInputStream::reset() {
	this->fOffset = this->fMark;
}

bool XMLEntityManager$RewindableInputStream::markSupported() {
	return true;
}

void XMLEntityManager$RewindableInputStream::close() {
	if (this->fInputStream != nullptr) {
		$nc(this->fInputStream)->close();
		$set(this, fInputStream, nullptr);
	}
}

XMLEntityManager$RewindableInputStream::XMLEntityManager$RewindableInputStream() {
}

$Class* XMLEntityManager$RewindableInputStream::load$($String* name, bool initialize) {
	$loadClass(XMLEntityManager$RewindableInputStream, name, initialize, &_XMLEntityManager$RewindableInputStream_ClassInfo_, allocate$XMLEntityManager$RewindableInputStream);
	return class$;
}

$Class* XMLEntityManager$RewindableInputStream::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
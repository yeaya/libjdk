#include <jdk/nio/zipfs/ByteArrayChannel.h>

#include <java/lang/Math.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/ClosedChannelException.h>
#include <java/nio/channels/NonWritableChannelException.h>
#include <java/nio/channels/SeekableByteChannel.h>
#include <java/util/Arrays.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReadWriteLock.h>
#include <java/util/concurrent/locks/ReentrantReadWriteLock.h>
#include <jcpp.h>

#undef MAX_ARRAY_SIZE
#undef MAX_VALUE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $ClosedChannelException = ::java::nio::channels::ClosedChannelException;
using $NonWritableChannelException = ::java::nio::channels::NonWritableChannelException;
using $SeekableByteChannel = ::java::nio::channels::SeekableByteChannel;
using $Arrays = ::java::util::Arrays;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReadWriteLock = ::java::util::concurrent::locks::ReadWriteLock;
using $ReentrantReadWriteLock = ::java::util::concurrent::locks::ReentrantReadWriteLock;

namespace jdk {
	namespace nio {
		namespace zipfs {

$FieldInfo _ByteArrayChannel_FieldInfo_[] = {
	{"rwlock", "Ljava/util/concurrent/locks/ReadWriteLock;", nullptr, $PRIVATE | $FINAL, $field(ByteArrayChannel, rwlock)},
	{"buf", "[B", nullptr, $PRIVATE, $field(ByteArrayChannel, buf)},
	{"pos", "I", nullptr, $PRIVATE, $field(ByteArrayChannel, pos)},
	{"last", "I", nullptr, $PRIVATE, $field(ByteArrayChannel, last)},
	{"closed", "Z", nullptr, $PRIVATE, $field(ByteArrayChannel, closed)},
	{"readonly", "Z", nullptr, $PRIVATE, $field(ByteArrayChannel, readonly)},
	{"MAX_ARRAY_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ByteArrayChannel, MAX_ARRAY_SIZE)},
	{}
};

$MethodInfo _ByteArrayChannel_MethodInfo_[] = {
	{"<init>", "(IZ)V", nullptr, 0, $method(static_cast<void(ByteArrayChannel::*)(int32_t,bool)>(&ByteArrayChannel::init$))},
	{"<init>", "([BZ)V", nullptr, 0, $method(static_cast<void(ByteArrayChannel::*)($bytes*,bool)>(&ByteArrayChannel::init$))},
	{"beginRead", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ByteArrayChannel::*)()>(&ByteArrayChannel::beginRead))},
	{"beginWrite", "()V", nullptr, $FINAL, $method(static_cast<void(ByteArrayChannel::*)()>(&ByteArrayChannel::beginWrite))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"endRead", "()V", nullptr, $PRIVATE | $FINAL, $method(static_cast<void(ByteArrayChannel::*)()>(&ByteArrayChannel::endRead))},
	{"endWrite", "()V", nullptr, $FINAL, $method(static_cast<void(ByteArrayChannel::*)()>(&ByteArrayChannel::endWrite))},
	{"ensureCapacity", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ByteArrayChannel::*)(int32_t)>(&ByteArrayChannel::ensureCapacity))},
	{"ensureOpen", "()V", nullptr, $PRIVATE, $method(static_cast<void(ByteArrayChannel::*)()>(&ByteArrayChannel::ensureOpen)), "java.io.IOException"},
	{"grow", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(ByteArrayChannel::*)(int32_t)>(&ByteArrayChannel::grow))},
	{"hugeCapacity", "(I)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)(int32_t)>(&ByteArrayChannel::hugeCapacity))},
	{"isOpen", "()Z", nullptr, $PUBLIC},
	{"position", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"position", "(J)Ljava/nio/channels/SeekableByteChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"size", "()J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"toByteArray", "()[B", nullptr, $PUBLIC},
	{"truncate", "(J)Ljava/nio/channels/SeekableByteChannel;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ByteArrayChannel_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"jdk.nio.zipfs.ByteArrayChannel",
	"java.lang.Object",
	"java.nio.channels.SeekableByteChannel",
	_ByteArrayChannel_FieldInfo_,
	_ByteArrayChannel_MethodInfo_
};

$Object* allocate$ByteArrayChannel($Class* clazz) {
	return $of($alloc(ByteArrayChannel));
}

void ByteArrayChannel::init$(int32_t sz, bool readonly) {
	$set(this, rwlock, $new($ReentrantReadWriteLock));
	$set(this, buf, $new($bytes, sz));
	this->pos = (this->last = 0);
	this->readonly = readonly;
}

void ByteArrayChannel::init$($bytes* buf, bool readonly) {
	$set(this, rwlock, $new($ReentrantReadWriteLock));
	$set(this, buf, buf);
	this->pos = 0;
	this->last = $nc(buf)->length;
	this->readonly = readonly;
}

bool ByteArrayChannel::isOpen() {
	return !this->closed;
}

int64_t ByteArrayChannel::position() {
	beginRead();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpen();
			var$2 = this->pos;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endRead();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$SeekableByteChannel* ByteArrayChannel::position(int64_t pos) {
	$useLocalCurrentObjectStackCache();
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		$var($SeekableByteChannel, var$2, nullptr);
		bool return$1 = false;
		try {
			ensureOpen();
			if (pos < 0 || pos >= $Integer::MAX_VALUE) {
				$throwNew($IllegalArgumentException, $$str({"Illegal position "_s, $$str(pos)}));
			}
			this->pos = $Math::min((int32_t)pos, this->last);
			$assign(var$2, this);
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int32_t ByteArrayChannel::read($ByteBuffer* dst) {
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpen();
			if (this->pos == this->last) {
				var$2 = -1;
				return$1 = true;
				goto $finally;
			}
			int32_t n = $Math::min($nc(dst)->remaining(), this->last - this->pos);
			$nc(dst)->put(this->buf, this->pos, n);
			this->pos += n;
			var$2 = n;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$SeekableByteChannel* ByteArrayChannel::truncate(int64_t size) {
	if (this->readonly) {
		$throwNew($NonWritableChannelException);
	}
	ensureOpen();
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t ByteArrayChannel::write($ByteBuffer* src) {
	if (this->readonly) {
		$throwNew($NonWritableChannelException);
	}
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		int32_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpen();
			int32_t n = $nc(src)->remaining();
			ensureCapacity(this->pos + n);
			src->get(this->buf, this->pos, n);
			this->pos += n;
			if (this->pos > this->last) {
				this->last = this->pos;
			}
			var$2 = n;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

int64_t ByteArrayChannel::size() {
	beginRead();
	{
		$var($Throwable, var$0, nullptr);
		int64_t var$2 = 0;
		bool return$1 = false;
		try {
			ensureOpen();
			var$2 = this->last;
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endRead();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ByteArrayChannel::close() {
	if (this->closed) {
		return;
	}
	beginWrite();
	{
		$var($Throwable, var$0, nullptr);
		try {
			this->closed = true;
			$set(this, buf, nullptr);
			this->pos = 0;
			this->last = 0;
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			endWrite();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

$bytes* ByteArrayChannel::toByteArray() {
	$useLocalCurrentObjectStackCache();
	beginRead();
	{
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			$assign(var$2, $Arrays::copyOf(this->buf, this->last));
			return$1 = true;
			goto $finally;
		} catch ($Throwable& var$3) {
			$assign(var$0, var$3);
		} $finally: {
			endRead();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void ByteArrayChannel::ensureOpen() {
	if (this->closed) {
		$throwNew($ClosedChannelException);
	}
}

void ByteArrayChannel::beginWrite() {
	$nc($($nc(this->rwlock)->writeLock()))->lock();
}

void ByteArrayChannel::endWrite() {
	$nc($($nc(this->rwlock)->writeLock()))->unlock();
}

void ByteArrayChannel::beginRead() {
	$nc($($nc(this->rwlock)->readLock()))->lock();
}

void ByteArrayChannel::endRead() {
	$nc($($nc(this->rwlock)->readLock()))->unlock();
}

void ByteArrayChannel::ensureCapacity(int32_t minCapacity) {
	if (minCapacity - $nc(this->buf)->length > 0) {
		grow(minCapacity);
	}
}

void ByteArrayChannel::grow(int32_t minCapacity) {
	int32_t oldCapacity = $nc(this->buf)->length;
	int32_t newCapacity = oldCapacity << 1;
	if (newCapacity - minCapacity < 0) {
		newCapacity = minCapacity;
	}
	if (newCapacity - ByteArrayChannel::MAX_ARRAY_SIZE > 0) {
		newCapacity = hugeCapacity(minCapacity);
	}
	$set(this, buf, $Arrays::copyOf(this->buf, newCapacity));
}

int32_t ByteArrayChannel::hugeCapacity(int32_t minCapacity) {
	$init(ByteArrayChannel);
	if (minCapacity < 0) {
		$throwNew($OutOfMemoryError, "Required length exceeds implementation limit"_s);
	}
	return (minCapacity > ByteArrayChannel::MAX_ARRAY_SIZE) ? $Integer::MAX_VALUE : ByteArrayChannel::MAX_ARRAY_SIZE;
}

ByteArrayChannel::ByteArrayChannel() {
}

$Class* ByteArrayChannel::load$($String* name, bool initialize) {
	$loadClass(ByteArrayChannel, name, initialize, &_ByteArrayChannel_ClassInfo_, allocate$ByteArrayChannel);
	return class$;
}

$Class* ByteArrayChannel::class$ = nullptr;

		} // zipfs
	} // nio
} // jdk
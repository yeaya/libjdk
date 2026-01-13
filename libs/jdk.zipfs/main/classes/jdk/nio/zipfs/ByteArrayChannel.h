#ifndef _jdk_nio_zipfs_ByteArrayChannel_h_
#define _jdk_nio_zipfs_ByteArrayChannel_h_
//$ class jdk.nio.zipfs.ByteArrayChannel
//$ extends java.nio.channels.SeekableByteChannel

#include <java/lang/Array.h>
#include <java/nio/channels/SeekableByteChannel.h>

#pragma push_macro("MAX_ARRAY_SIZE")
#undef MAX_ARRAY_SIZE

namespace java {
	namespace nio {
		class ByteBuffer;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace locks {
				class ReadWriteLock;
			}
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ByteArrayChannel : public ::java::nio::channels::SeekableByteChannel {
	$class(ByteArrayChannel, $NO_CLASS_INIT, ::java::nio::channels::SeekableByteChannel)
public:
	ByteArrayChannel();
	void init$(int32_t sz, bool readonly);
	void init$($bytes* buf, bool readonly);
	void beginRead();
	void beginWrite();
	virtual void close() override;
	void endRead();
	void endWrite();
	void ensureCapacity(int32_t minCapacity);
	void ensureOpen();
	void grow(int32_t minCapacity);
	static int32_t hugeCapacity(int32_t minCapacity);
	virtual bool isOpen() override;
	virtual int64_t position() override;
	virtual ::java::nio::channels::SeekableByteChannel* position(int64_t pos) override;
	virtual int32_t read(::java::nio::ByteBuffer* dst) override;
	virtual int64_t size() override;
	virtual $bytes* toByteArray();
	virtual ::java::nio::channels::SeekableByteChannel* truncate(int64_t size) override;
	virtual int32_t write(::java::nio::ByteBuffer* src) override;
	::java::util::concurrent::locks::ReadWriteLock* rwlock = nullptr;
	$bytes* buf = nullptr;
	int32_t pos = 0;
	int32_t last = 0;
	bool closed = false;
	bool readonly = false;
	static const int32_t MAX_ARRAY_SIZE = 0x7FFFFFF7; // Integer.MAX_VALUE - 8
};

		} // zipfs
	} // nio
} // jdk

#pragma pop_macro("MAX_ARRAY_SIZE")

#endif // _jdk_nio_zipfs_ByteArrayChannel_h_
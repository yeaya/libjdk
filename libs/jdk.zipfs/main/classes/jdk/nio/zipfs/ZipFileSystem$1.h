#ifndef _jdk_nio_zipfs_ZipFileSystem$1_h_
#define _jdk_nio_zipfs_ZipFileSystem$1_h_
//$ class jdk.nio.zipfs.ZipFileSystem$1
//$ extends java.nio.channels.FileChannel

#include <java/lang/Array.h>
#include <java/nio/channels/FileChannel.h>

namespace java {
	namespace nio {
		class ByteBuffer;
		class MappedByteBuffer;
	}
}
namespace java {
	namespace nio {
		namespace channels {
			class FileChannel$MapMode;
			class FileLock;
			class ReadableByteChannel;
			class SeekableByteChannel;
			class WritableByteChannel;
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}
namespace jdk {
	namespace nio {
		namespace zipfs {
			class ZipFileSystem;
			class ZipFileSystem$Entry;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileSystem$1 : public ::java::nio::channels::FileChannel {
	$class(ZipFileSystem$1, $NO_CLASS_INIT, ::java::nio::channels::FileChannel)
public:
	ZipFileSystem$1();
	void init$(::jdk::nio::zipfs::ZipFileSystem* this$0, ::java::nio::channels::FileChannel* val$fch, bool val$forWrite, ::jdk::nio::zipfs::ZipFileSystem$Entry* val$u, bool val$isFCH, ::java::nio::file::Path* val$tmpfile);
	virtual void force(bool metaData) override;
	virtual void implCloseChannel() override;
	using ::java::nio::channels::FileChannel::lock;
	virtual ::java::nio::channels::FileLock* lock(int64_t position, int64_t size, bool shared) override;
	virtual ::java::nio::MappedByteBuffer* map(::java::nio::channels::FileChannel$MapMode* mode, int64_t position, int64_t size) override;
	virtual int64_t position() override;
	virtual ::java::nio::channels::SeekableByteChannel* position(int64_t newPosition) override;
	using ::java::nio::channels::FileChannel::read;
	virtual int32_t read(::java::nio::ByteBuffer* dst) override;
	virtual int32_t read(::java::nio::ByteBuffer* dst, int64_t position) override;
	virtual int64_t read($Array<::java::nio::ByteBuffer>* dsts, int32_t offset, int32_t length) override;
	virtual int64_t size() override;
	virtual int64_t transferFrom(::java::nio::channels::ReadableByteChannel* src, int64_t position, int64_t count) override;
	virtual int64_t transferTo(int64_t position, int64_t count, ::java::nio::channels::WritableByteChannel* target) override;
	virtual ::java::nio::channels::SeekableByteChannel* truncate(int64_t size) override;
	using ::java::nio::channels::FileChannel::tryLock;
	virtual ::java::nio::channels::FileLock* tryLock(int64_t position, int64_t size, bool shared) override;
	using ::java::nio::channels::FileChannel::write;
	virtual int32_t write(::java::nio::ByteBuffer* src) override;
	virtual int64_t write($Array<::java::nio::ByteBuffer>* srcs, int32_t offset, int32_t length) override;
	virtual int32_t write(::java::nio::ByteBuffer* src, int64_t position) override;
	::jdk::nio::zipfs::ZipFileSystem* this$0 = nullptr;
	::java::nio::file::Path* val$tmpfile = nullptr;
	bool val$isFCH = false;
	::jdk::nio::zipfs::ZipFileSystem$Entry* val$u = nullptr;
	bool val$forWrite = false;
	::java::nio::channels::FileChannel* val$fch = nullptr;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileSystem$1_h_
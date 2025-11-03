#ifndef _jdk_nio_zipfs_ZipFileSystem$EntryOutputChannel_h_
#define _jdk_nio_zipfs_ZipFileSystem$EntryOutputChannel_h_
//$ class jdk.nio.zipfs.ZipFileSystem$EntryOutputChannel
//$ extends jdk.nio.zipfs.ByteArrayChannel

#include <jdk/nio/zipfs/ByteArrayChannel.h>

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

class ZipFileSystem$EntryOutputChannel : public ::jdk::nio::zipfs::ByteArrayChannel {
	$class(ZipFileSystem$EntryOutputChannel, $NO_CLASS_INIT, ::jdk::nio::zipfs::ByteArrayChannel)
public:
	ZipFileSystem$EntryOutputChannel();
	void init$(::jdk::nio::zipfs::ZipFileSystem* this$0, ::jdk::nio::zipfs::ZipFileSystem$Entry* e);
	virtual void close() override;
	::jdk::nio::zipfs::ZipFileSystem* this$0 = nullptr;
	::jdk::nio::zipfs::ZipFileSystem$Entry* e = nullptr;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileSystem$EntryOutputChannel_h_
#ifndef _jdk_nio_zipfs_ZipFileSystem$ParentLookup_h_
#define _jdk_nio_zipfs_ZipFileSystem$ParentLookup_h_
//$ class jdk.nio.zipfs.ZipFileSystem$ParentLookup
//$ extends jdk.nio.zipfs.ZipFileSystem$IndexNode

#include <java/lang/Array.h>
#include <jdk/nio/zipfs/ZipFileSystem$IndexNode.h>

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileSystem$ParentLookup : public ::jdk::nio::zipfs::ZipFileSystem$IndexNode {
	$class(ZipFileSystem$ParentLookup, $NO_CLASS_INIT, ::jdk::nio::zipfs::ZipFileSystem$IndexNode)
public:
	ZipFileSystem$ParentLookup();
	using ::jdk::nio::zipfs::ZipFileSystem$IndexNode::as;
	void init$();
	::jdk::nio::zipfs::ZipFileSystem$ParentLookup* as($bytes* name, int32_t len);
	virtual bool equals(Object$* other) override;
	using ::jdk::nio::zipfs::ZipFileSystem$IndexNode::name;
	virtual void name($bytes* name, int32_t len);
	int32_t len = 0;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileSystem$ParentLookup_h_
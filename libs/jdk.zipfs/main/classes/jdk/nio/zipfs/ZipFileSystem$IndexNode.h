#ifndef _jdk_nio_zipfs_ZipFileSystem$IndexNode_h_
#define _jdk_nio_zipfs_ZipFileSystem$IndexNode_h_
//$ class jdk.nio.zipfs.ZipFileSystem$IndexNode
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class ThreadLocal;
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileSystem$IndexNode : public ::java::lang::Object {
	$class(ZipFileSystem$IndexNode, 0, ::java::lang::Object)
public:
	ZipFileSystem$IndexNode();
	void init$();
	void init$($bytes* name, bool isdir);
	void init$($bytes* name, int32_t pos);
	void init$($bytes* cen, int32_t pos, int32_t nlen);
	::jdk::nio::zipfs::ZipFileSystem$IndexNode* as($bytes* name);
	virtual bool equals(Object$* other) override;
	virtual int32_t hashCode() override;
	virtual bool isDir();
	static ::jdk::nio::zipfs::ZipFileSystem$IndexNode* keyOf($bytes* name);
	void name($bytes* name);
	$bytes* normalize($bytes* path);
	$bytes* normalize($bytes* path, int32_t off);
	virtual $String* toString() override;
	$bytes* name$ = nullptr;
	int32_t hashcode = 0;
	bool isdir = false;
	int32_t pos = 0;
	::jdk::nio::zipfs::ZipFileSystem$IndexNode* child = nullptr;
	::jdk::nio::zipfs::ZipFileSystem$IndexNode* sibling = nullptr;
	static ::java::lang::ThreadLocal* cachedKey;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileSystem$IndexNode_h_
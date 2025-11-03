#ifndef _jdk_nio_zipfs_ZipFileAttributeView_h_
#define _jdk_nio_zipfs_ZipFileAttributeView_h_
//$ class jdk.nio.zipfs.ZipFileAttributeView
//$ extends java.nio.file.attribute.BasicFileAttributeView

#include <java/nio/file/attribute/BasicFileAttributeView.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
				class FileTime;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace jdk {
	namespace nio {
		namespace zipfs {
			class ZipFileAttributeView$AttrID;
			class ZipFileAttributes;
			class ZipPath;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipFileAttributeView : public ::java::nio::file::attribute::BasicFileAttributeView {
	$class(ZipFileAttributeView, $NO_CLASS_INIT, ::java::nio::file::attribute::BasicFileAttributeView)
public:
	ZipFileAttributeView();
	void init$(::jdk::nio::zipfs::ZipPath* path, bool isZipView);
	virtual $Object* attribute(::jdk::nio::zipfs::ZipFileAttributeView$AttrID* id, ::jdk::nio::zipfs::ZipFileAttributes* zfas);
	virtual $String* name() override;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() override;
	virtual ::java::util::Map* readAttributes($String* attributes);
	virtual void setAttribute($String* attribute, Object$* value);
	virtual void setPermissions(::java::util::Set* perms);
	virtual void setTimes(::java::nio::file::attribute::FileTime* lastModifiedTime, ::java::nio::file::attribute::FileTime* lastAccessTime, ::java::nio::file::attribute::FileTime* createTime) override;
	::jdk::nio::zipfs::ZipPath* path = nullptr;
	bool isZipView = false;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipFileAttributeView_h_
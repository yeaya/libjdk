#ifndef _jdk_nio_zipfs_ZipPosixFileAttributeView_h_
#define _jdk_nio_zipfs_ZipPosixFileAttributeView_h_
//$ class jdk.nio.zipfs.ZipPosixFileAttributeView
//$ extends jdk.nio.zipfs.ZipFileAttributeView
//$ implements java.nio.file.attribute.PosixFileAttributeView

#include <java/nio/file/attribute/PosixFileAttributeView.h>
#include <jdk/nio/zipfs/ZipFileAttributeView.h>

namespace java {
	namespace nio {
		namespace file {
			namespace attribute {
				class BasicFileAttributes;
				class GroupPrincipal;
				class UserPrincipal;
			}
		}
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

class ZipPosixFileAttributeView : public ::jdk::nio::zipfs::ZipFileAttributeView, public ::java::nio::file::attribute::PosixFileAttributeView {
	$class(ZipPosixFileAttributeView, $NO_CLASS_INIT, ::jdk::nio::zipfs::ZipFileAttributeView, ::java::nio::file::attribute::PosixFileAttributeView)
public:
	ZipPosixFileAttributeView();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::jdk::nio::zipfs::ZipPath* path, bool owner);
	virtual $Object* attribute(::jdk::nio::zipfs::ZipFileAttributeView$AttrID* id, ::jdk::nio::zipfs::ZipFileAttributes* zfas) override;
	virtual ::java::nio::file::attribute::UserPrincipal* getOwner() override;
	virtual $String* name() override;
	using ::jdk::nio::zipfs::ZipFileAttributeView::readAttributes;
	virtual ::java::nio::file::attribute::BasicFileAttributes* readAttributes() override;
	virtual void setGroup(::java::nio::file::attribute::GroupPrincipal* group) override;
	virtual void setOwner(::java::nio::file::attribute::UserPrincipal* owner) override;
	virtual void setPermissions(::java::util::Set* perms) override;
	virtual void setTimes(::java::nio::file::attribute::FileTime* lastModifiedTime, ::java::nio::file::attribute::FileTime* lastAccessTime, ::java::nio::file::attribute::FileTime* createTime) override;
	virtual $String* toString() override;
	bool isOwnerView = false;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipPosixFileAttributeView_h_
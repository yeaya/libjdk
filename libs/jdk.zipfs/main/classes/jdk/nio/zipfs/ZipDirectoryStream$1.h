#ifndef _jdk_nio_zipfs_ZipDirectoryStream$1_h_
#define _jdk_nio_zipfs_ZipDirectoryStream$1_h_
//$ class jdk.nio.zipfs.ZipDirectoryStream$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace jdk {
	namespace nio {
		namespace zipfs {
			class ZipDirectoryStream;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipDirectoryStream$1 : public ::java::util::Iterator {
	$class(ZipDirectoryStream$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ZipDirectoryStream$1();
	void init$(::jdk::nio::zipfs::ZipDirectoryStream* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::jdk::nio::zipfs::ZipDirectoryStream* this$0 = nullptr;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipDirectoryStream$1_h_
#ifndef _jdk_nio_zipfs_ZipPath$1_h_
#define _jdk_nio_zipfs_ZipPath$1_h_
//$ class jdk.nio.zipfs.ZipPath$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace jdk {
	namespace nio {
		namespace zipfs {
			class ZipPath;
		}
	}
}

namespace jdk {
	namespace nio {
		namespace zipfs {

class ZipPath$1 : public ::java::util::Iterator {
	$class(ZipPath$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ZipPath$1();
	void init$(::jdk::nio::zipfs::ZipPath* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::jdk::nio::zipfs::ZipPath* this$0 = nullptr;
	int32_t i = 0;
};

		} // zipfs
	} // nio
} // jdk

#endif // _jdk_nio_zipfs_ZipPath$1_h_
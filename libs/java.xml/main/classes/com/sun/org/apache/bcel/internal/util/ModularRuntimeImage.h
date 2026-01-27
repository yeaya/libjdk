#ifndef _com_sun_org_apache_bcel_internal_util_ModularRuntimeImage_h_
#define _com_sun_org_apache_bcel_internal_util_ModularRuntimeImage_h_
//$ class com.sun.org.apache.bcel.internal.util.ModularRuntimeImage
//$ extends java.io.Closeable

#include <java/io/Closeable.h>

#pragma push_macro("MODULES_PATH")
#undef MODULES_PATH
#pragma push_macro("PACKAGES_PATH")
#undef PACKAGES_PATH

namespace java {
	namespace net {
		class URLClassLoader;
	}
}
namespace java {
	namespace nio {
		namespace file {
			class FileSystem;
			class Path;
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace bcel {
					namespace internal {
						namespace util {

class ModularRuntimeImage : public ::java::io::Closeable {
	$class(ModularRuntimeImage, 0, ::java::io::Closeable)
public:
	ModularRuntimeImage();
	void init$();
	void init$($String* javaHome);
	void init$(::java::net::URLClassLoader* cl, ::java::nio::file::FileSystem* fs);
	virtual void close() override;
	virtual ::java::nio::file::FileSystem* getFileSystem();
	virtual ::java::util::List* list(::java::nio::file::Path* dirPath);
	virtual ::java::util::List* list($String* dirName);
	virtual ::java::util::List* modules();
	virtual ::java::util::List* packages();
	static $String* MODULES_PATH;
	static $String* PACKAGES_PATH;
	::java::net::URLClassLoader* classLoader = nullptr;
	::java::nio::file::FileSystem* fileSystem = nullptr;
};

						} // util
					} // internal
				} // bcel
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("MODULES_PATH")
#pragma pop_macro("PACKAGES_PATH")

#endif // _com_sun_org_apache_bcel_internal_util_ModularRuntimeImage_h_
#ifndef _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl$TransletClassLoader_h_
#define _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl$TransletClassLoader_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.trax.TemplatesImpl$TransletClassLoader
//$ extends java.lang.ClassLoader

#include <java/lang/Array.h>
#include <java/lang/ClassLoader.h>

namespace java {
	namespace security {
		class ProtectionDomain;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace trax {

class TemplatesImpl$TransletClassLoader : public ::java::lang::ClassLoader {
	$class(TemplatesImpl$TransletClassLoader, $NO_CLASS_INIT, ::java::lang::ClassLoader)
public:
	TemplatesImpl$TransletClassLoader();
	using ::java::lang::ClassLoader::defineClass;
	void init$(::java::lang::ClassLoader* parent);
	void init$(::java::lang::ClassLoader* parent, ::java::util::Map* mapEF);
	$Class* defineClass($bytes* b);
	$Class* defineClass($bytes* b, ::java::security::ProtectionDomain* pd);
	using ::java::lang::ClassLoader::loadClass;
	virtual $Class* loadClass($String* name) override;
	::java::util::Map* _loadedExternalExtensionFunctions = nullptr;
};

							} // trax
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_trax_TemplatesImpl$TransletClassLoader_h_
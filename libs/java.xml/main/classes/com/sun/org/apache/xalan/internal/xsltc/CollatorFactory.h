#ifndef _com_sun_org_apache_xalan_internal_xsltc_CollatorFactory_h_
#define _com_sun_org_apache_xalan_internal_xsltc_CollatorFactory_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.CollatorFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace text {
		class Collator;
	}
}
namespace java {
	namespace util {
		class Locale;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {

class CollatorFactory : public ::java::lang::Object {
	$interface(CollatorFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::text::Collator* getCollator($String* lang, $String* country) {return nullptr;}
	virtual ::java::text::Collator* getCollator(::java::util::Locale* locale) {return nullptr;}
};

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_CollatorFactory_h_
#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_CollatorFactoryBase_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_CollatorFactoryBase_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.CollatorFactoryBase
//$ extends com.sun.org.apache.xalan.internal.xsltc.CollatorFactory

#include <com/sun/org/apache/xalan/internal/xsltc/CollatorFactory.h>

#pragma push_macro("DEFAULT_COLLATOR")
#undef DEFAULT_COLLATOR
#pragma push_macro("DEFAULT_LOCALE")
#undef DEFAULT_LOCALE

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
							namespace dom {

class CollatorFactoryBase : public ::com::sun::org::apache::xalan::internal::xsltc::CollatorFactory {
	$class(CollatorFactoryBase, 0, ::com::sun::org::apache::xalan::internal::xsltc::CollatorFactory)
public:
	CollatorFactoryBase();
	void init$();
	virtual ::java::text::Collator* getCollator($String* lang, $String* country) override;
	virtual ::java::text::Collator* getCollator(::java::util::Locale* locale) override;
	static ::java::util::Locale* DEFAULT_LOCALE;
	static ::java::text::Collator* DEFAULT_COLLATOR;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEFAULT_COLLATOR")
#pragma pop_macro("DEFAULT_LOCALE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_CollatorFactoryBase_h_
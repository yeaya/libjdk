#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_SortSettings_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_SortSettings_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.SortSettings
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								class AbstractTranslet;
							}
						}
					}
				}
			}
		}
	}
}
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

class SortSettings : public ::java::lang::Object {
	$class(SortSettings, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SortSettings();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet, $ints* sortOrders, $ints* types, $Array<::java::util::Locale>* locales, $Array<::java::text::Collator>* collators, $StringArray* caseOrders);
	$StringArray* getCaseOrders();
	$Array<::java::text::Collator>* getCollators();
	$Array<::java::util::Locale>* getLocales();
	$ints* getSortOrders();
	::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* getTranslet();
	$ints* getTypes();
	::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* _translet = nullptr;
	$ints* _sortOrders = nullptr;
	$ints* _types = nullptr;
	$Array<::java::util::Locale>* _locales = nullptr;
	$Array<::java::text::Collator>* _collators = nullptr;
	$StringArray* _caseOrders = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_SortSettings_h_
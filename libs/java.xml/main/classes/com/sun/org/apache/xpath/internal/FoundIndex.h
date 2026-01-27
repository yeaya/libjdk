#ifndef _com_sun_org_apache_xpath_internal_FoundIndex_h_
#define _com_sun_org_apache_xpath_internal_FoundIndex_h_
//$ class com.sun.org.apache.xpath.internal.FoundIndex
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

class $export FoundIndex : public ::java::lang::RuntimeException {
	$class(FoundIndex, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	FoundIndex();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xBF8D490995292582;
	FoundIndex(const FoundIndex& e);
	virtual void throw$() override;
	inline FoundIndex* operator ->() {
		return (FoundIndex*)throwing$;
	}
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_FoundIndex_h_
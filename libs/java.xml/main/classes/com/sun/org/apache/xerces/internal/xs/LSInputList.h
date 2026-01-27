#ifndef _com_sun_org_apache_xerces_internal_xs_LSInputList_h_
#define _com_sun_org_apache_xerces_internal_xs_LSInputList_h_
//$ interface com.sun.org.apache.xerces.internal.xs.LSInputList
//$ extends java.util.List

#include <java/util/List.h>

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSInput;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

class LSInputList : public ::java::util::List {
	$interface(LSInputList, $NO_CLASS_INIT, ::java::util::List)
public:
	virtual int32_t getLength() {return 0;}
	virtual ::org::w3c::dom::ls::LSInput* item(int32_t index) {return nullptr;}
	using ::java::util::List::toArray;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_LSInputList_h_
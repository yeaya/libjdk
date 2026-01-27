#ifndef _com_sun_org_apache_xerces_internal_xs_XSNamespaceItemList_h_
#define _com_sun_org_apache_xerces_internal_xs_XSNamespaceItemList_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSNamespaceItemList
//$ extends java.util.List

#include <java/util/List.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSNamespaceItem;
						}
					}
				}
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

class XSNamespaceItemList : public ::java::util::List {
	$interface(XSNamespaceItemList, $NO_CLASS_INIT, ::java::util::List)
public:
	virtual int32_t getLength() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSNamespaceItem* item(int32_t index) {return nullptr;}
	using ::java::util::List::toArray;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSNamespaceItemList_h_
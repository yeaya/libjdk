#ifndef _com_sun_org_apache_xerces_internal_xs_XSObjectList_h_
#define _com_sun_org_apache_xerces_internal_xs_XSObjectList_h_
//$ interface com.sun.org.apache.xerces.internal.xs.XSObjectList
//$ extends java.util.List

#include <java/util/List.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							class XSObject;
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

class XSObjectList : public ::java::util::List {
	$interface(XSObjectList, $NO_CLASS_INIT, ::java::util::List)
public:
	virtual int32_t getLength() {return 0;}
	virtual ::com::sun::org::apache::xerces::internal::xs::XSObject* item(int32_t index) {return nullptr;}
	using ::java::util::List::toArray;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_XSObjectList_h_
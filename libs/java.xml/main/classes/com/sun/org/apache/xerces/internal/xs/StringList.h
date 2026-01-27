#ifndef _com_sun_org_apache_xerces_internal_xs_StringList_h_
#define _com_sun_org_apache_xerces_internal_xs_StringList_h_
//$ interface com.sun.org.apache.xerces.internal.xs.StringList
//$ extends java.util.List

#include <java/util/List.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

class StringList : public ::java::util::List {
	$interface(StringList, $NO_CLASS_INIT, ::java::util::List)
public:
	using ::java::util::List::contains;
	virtual bool contains($String* item) {return false;}
	virtual int32_t getLength() {return 0;}
	virtual $String* item(int32_t index) {return nullptr;}
	using ::java::util::List::toArray;
};

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_StringList_h_
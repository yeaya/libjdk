#ifndef _com_sun_org_apache_xerces_internal_xs_datatypes_ObjectList_h_
#define _com_sun_org_apache_xerces_internal_xs_datatypes_ObjectList_h_
//$ interface com.sun.org.apache.xerces.internal.xs.datatypes.ObjectList
//$ extends java.util.List

#include <java/util/List.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							namespace datatypes {

class ObjectList : public ::java::util::List {
	$interface(ObjectList, $NO_CLASS_INIT, ::java::util::List)
public:
	virtual bool contains(Object$* item) override {return false;}
	virtual int32_t getLength() {return 0;}
	virtual $Object* item(int32_t index) {return nullptr;}
	using ::java::util::List::toArray;
};

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_datatypes_ObjectList_h_
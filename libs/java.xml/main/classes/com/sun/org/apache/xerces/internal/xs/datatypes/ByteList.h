#ifndef _com_sun_org_apache_xerces_internal_xs_datatypes_ByteList_h_
#define _com_sun_org_apache_xerces_internal_xs_datatypes_ByteList_h_
//$ interface com.sun.org.apache.xerces.internal.xs.datatypes.ByteList
//$ extends java.util.List

#include <java/lang/Array.h>
#include <java/util/List.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {
							namespace datatypes {

class ByteList : public ::java::util::List {
	$interface(ByteList, $NO_CLASS_INIT, ::java::util::List)
public:
	using ::java::util::List::contains;
	virtual bool contains(int8_t item) {return false;}
	virtual int32_t getLength() {return 0;}
	virtual int8_t item(int32_t index) {return 0;}
	using ::java::util::List::toArray;
	virtual $bytes* toByteArray() {return nullptr;}
};

							} // datatypes
						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xs_datatypes_ByteList_h_
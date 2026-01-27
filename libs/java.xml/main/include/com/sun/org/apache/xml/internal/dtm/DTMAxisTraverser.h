#ifndef _com_sun_org_apache_xml_internal_dtm_DTMAxisTraverser_h_
#define _com_sun_org_apache_xml_internal_dtm_DTMAxisTraverser_h_
//$ class com.sun.org.apache.xml.internal.dtm.DTMAxisTraverser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

class $import DTMAxisTraverser : public ::java::lang::Object {
	$class(DTMAxisTraverser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DTMAxisTraverser();
	void init$();
	virtual int32_t first(int32_t context);
	virtual int32_t first(int32_t context, int32_t extendedTypeID);
	virtual int32_t next(int32_t context, int32_t current) {return 0;}
	virtual int32_t next(int32_t context, int32_t current, int32_t extendedTypeID) {return 0;}
};

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_DTMAxisTraverser_h_
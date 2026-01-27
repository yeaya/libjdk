#ifndef _com_sun_org_apache_xml_internal_dtm_DTMAxisIterator_h_
#define _com_sun_org_apache_xml_internal_dtm_DTMAxisIterator_h_
//$ interface com.sun.org.apache.xml.internal.dtm.DTMAxisIterator
//$ extends java.lang.Cloneable

#include <java/lang/Cloneable.h>

#pragma push_macro("END")
#undef END

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {

class $export DTMAxisIterator : public ::java::lang::Cloneable {
	$interface(DTMAxisIterator, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() {return nullptr;}
	virtual int32_t getLast() {return 0;}
	virtual int32_t getNodeByPosition(int32_t position) {return 0;}
	virtual int32_t getPosition() {return 0;}
	virtual int32_t getStartNode() {return 0;}
	virtual void gotoMark() {}
	virtual bool isReverse() {return false;}
	virtual int32_t next() {return 0;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() {return nullptr;}
	virtual void setMark() {}
	virtual void setRestartable(bool isRestartable) {}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) {return nullptr;}
	static const int32_t END = -1; // DTM.NULL
};

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("END")

#endif // _com_sun_org_apache_xml_internal_dtm_DTMAxisIterator_h_
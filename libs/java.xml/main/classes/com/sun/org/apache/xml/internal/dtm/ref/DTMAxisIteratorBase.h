#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMAxisIteratorBase_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMAxisIteratorBase_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase
//$ extends com.sun.org.apache.xml.internal.dtm.DTMAxisIterator

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class DTMAxisIteratorBase : public ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator {
	$class(DTMAxisIteratorBase, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator)
public:
	DTMAxisIteratorBase();
	void init$();
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	virtual int32_t getAxis();
	virtual int32_t getLast() override;
	virtual int32_t getNodeByPosition(int32_t position) override;
	virtual int32_t getPosition() override;
	virtual int32_t getStartNode() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* includeSelf();
	virtual bool isDocOrdered();
	virtual bool isReverse() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() override;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* resetPosition();
	int32_t returnNode(int32_t node);
	virtual void setRestartable(bool isRestartable) override;
	int32_t _last = 0;
	int32_t _position = 0;
	int32_t _markedNode = 0;
	int32_t _startNode = 0;
	bool _includeSelf = false;
	bool _isRestartable = false;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMAxisIteratorBase_h_
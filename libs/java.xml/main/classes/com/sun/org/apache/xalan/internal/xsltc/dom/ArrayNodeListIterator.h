#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_ArrayNodeListIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_ArrayNodeListIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.ArrayNodeListIterator
//$ extends com.sun.org.apache.xml.internal.dtm.DTMAxisIterator

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPTY")
#undef EMPTY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class ArrayNodeListIterator : public ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator {
	$class(ArrayNodeListIterator, 0, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator)
public:
	ArrayNodeListIterator();
	void init$($ints* nodes);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	virtual int32_t getLast() override;
	virtual int32_t getNodeByPosition(int32_t position) override;
	virtual int32_t getPosition() override;
	virtual int32_t getStartNode() override;
	virtual void gotoMark() override;
	virtual bool isReverse() override;
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() override;
	virtual void setMark() override;
	virtual void setRestartable(bool isRestartable) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	int32_t _pos = 0;
	int32_t _mark = 0;
	$ints* _nodes = nullptr;
	static $ints* EMPTY;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_ArrayNodeListIterator_h_
#ifndef _com_sun_org_apache_xml_internal_dtm_ref_EmptyIterator_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_EmptyIterator_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.EmptyIterator
//$ extends com.sun.org.apache.xml.internal.dtm.DTMAxisIterator

#include <com/sun/org/apache/xml/internal/dtm/DTMAxisIterator.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {

class EmptyIterator : public ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator {
	$class(EmptyIterator, 0, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator)
public:
	EmptyIterator();
	void init$();
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	static ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* getInstance();
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
	static ::com::sun::org::apache::xml::internal::dtm::ref::EmptyIterator* INSTANCE;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INSTANCE")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_EmptyIterator_h_
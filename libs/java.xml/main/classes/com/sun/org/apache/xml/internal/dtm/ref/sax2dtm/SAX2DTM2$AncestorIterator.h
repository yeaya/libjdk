#ifndef _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2$AncestorIterator_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2$AncestorIterator_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM2$AncestorIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators$InternalAxisIteratorBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators$InternalAxisIteratorBase.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
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
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								namespace sax2dtm {
									class SAX2DTM2;
								}
							}
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
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								namespace sax2dtm {

class SAX2DTM2$AncestorIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase {
	$class(SAX2DTM2$AncestorIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators$InternalAxisIteratorBase)
public:
	SAX2DTM2$AncestorIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2* this$0);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	virtual int32_t getStartNode() override;
	virtual void gotoMark() override;
	virtual bool isReverse() override;
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() override;
	virtual void setMark() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM2* this$0 = nullptr;
	static const int32_t m_blocksize = 32;
	$ints* m_ancestors = nullptr;
	int32_t m_size = 0;
	int32_t m_ancestorsPos = 0;
	int32_t m_markedPos = 0;
	int32_t m_realStartNode = 0;
};

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM2$AncestorIterator_h_
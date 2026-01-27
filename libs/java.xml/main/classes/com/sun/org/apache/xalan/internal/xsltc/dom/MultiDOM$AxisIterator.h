#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_MultiDOM$AxisIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_MultiDOM$AxisIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM$AxisIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class MultiDOM;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {

class MultiDOM$AxisIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase {
	$class(MultiDOM$AxisIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase)
public:
	MultiDOM$AxisIterator();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM* this$0, int32_t axis, int32_t type);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	virtual int32_t getLast() override;
	virtual int32_t getPosition() override;
	virtual void gotoMark() override;
	virtual bool isReverse() override;
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() override;
	virtual void setMark() override;
	virtual void setRestartable(bool flag) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	::com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM* this$0 = nullptr;
	int32_t _axis = 0;
	int32_t _type = 0;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* _source = nullptr;
	int32_t _dtmId = 0;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_MultiDOM$AxisIterator_h_
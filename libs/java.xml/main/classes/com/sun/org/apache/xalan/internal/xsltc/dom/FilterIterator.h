#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_FilterIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_FilterIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.FilterIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
							class DTMFilter;
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

class FilterIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase {
	$class(FilterIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase)
public:
	FilterIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* source, ::com::sun::org::apache::xml::internal::dtm::DTMFilter* filter);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	virtual void gotoMark() override;
	virtual bool isReverse() override;
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() override;
	virtual void setMark() override;
	virtual void setRestartable(bool isRestartable) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* _source = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTMFilter* _filter = nullptr;
	bool _isReverse = false;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_FilterIterator_h_
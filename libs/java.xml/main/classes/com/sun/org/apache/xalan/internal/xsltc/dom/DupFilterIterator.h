#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_DupFilterIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_DupFilterIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.DupFilterIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace util {
								class IntegerArray;
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

class DupFilterIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase {
	$class(DupFilterIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase)
public:
	DupFilterIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* source);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	virtual void gotoMark() override;
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() override;
	virtual void setMark() override;
	virtual void setRestartable(bool isRestartable) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* _source = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray* _nodes = nullptr;
	int32_t _current = 0;
	int32_t _nodesSize = 0;
	int32_t _lastNext = 0;
	int32_t _markedLastNext = 0;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_DupFilterIterator_h_
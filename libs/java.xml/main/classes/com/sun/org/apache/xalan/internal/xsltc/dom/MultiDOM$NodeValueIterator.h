#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_MultiDOM$NodeValueIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_MultiDOM$NodeValueIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.MultiDOM$NodeValueIterator
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

class MultiDOM$NodeValueIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase {
	$class(MultiDOM$NodeValueIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase)
public:
	MultiDOM$NodeValueIterator();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM* this$0, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* source, int32_t returnType, $String* value, bool op);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	virtual void gotoMark() override;
	virtual bool isReverse() override;
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() override;
	virtual void setMark() override;
	virtual void setRestartable(bool isRestartable) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	::com::sun::org::apache::xalan::internal::xsltc::dom::MultiDOM* this$0 = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* _source = nullptr;
	$String* _value = nullptr;
	bool _op = false;
	bool _isReverse = false;
	int32_t _returnType = 0;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_MultiDOM$NodeValueIterator_h_
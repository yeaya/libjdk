#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_SimpleResultTreeImpl$SimpleIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_SimpleResultTreeImpl$SimpleIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.SimpleResultTreeImpl$SimpleIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>

#pragma push_macro("DIRECTION_DOWN")
#undef DIRECTION_DOWN
#pragma push_macro("DIRECTION_UP")
#undef DIRECTION_UP
#pragma push_macro("NO_TYPE")
#undef NO_TYPE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class SimpleResultTreeImpl;
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

class SimpleResultTreeImpl$SimpleIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase {
	$class(SimpleResultTreeImpl$SimpleIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase)
public:
	SimpleResultTreeImpl$SimpleIterator();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::SimpleResultTreeImpl* this$0);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::SimpleResultTreeImpl* this$0, int32_t direction);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::SimpleResultTreeImpl* this$0, int32_t direction, int32_t type);
	virtual void gotoMark() override;
	virtual int32_t next() override;
	virtual void setMark() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t nodeHandle) override;
	::com::sun::org::apache::xalan::internal::xsltc::dom::SimpleResultTreeImpl* this$0 = nullptr;
	static const int32_t DIRECTION_UP = 0;
	static const int32_t DIRECTION_DOWN = 1;
	static const int32_t NO_TYPE = (-1);
	int32_t _direction = 0;
	int32_t _type = 0;
	int32_t _currentNode = 0;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DIRECTION_DOWN")
#pragma pop_macro("DIRECTION_UP")
#pragma pop_macro("NO_TYPE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_SimpleResultTreeImpl$SimpleIterator_h_
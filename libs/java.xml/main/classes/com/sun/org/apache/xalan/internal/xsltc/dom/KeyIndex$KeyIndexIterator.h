#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_KeyIndex$KeyIndexIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_KeyIndex$KeyIndexIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex$KeyIndexIterator
//$ extends com.sun.org.apache.xalan.internal.xsltc.dom.MultiValuedNodeHeapIterator

#include <com/sun/org/apache/xalan/internal/xsltc/dom/MultiValuedNodeHeapIterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class KeyIndex;
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

class KeyIndex$KeyIndexIterator : public ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator {
	$class(KeyIndex$KeyIndexIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xalan::internal::xsltc::dom::MultiValuedNodeHeapIterator)
public:
	KeyIndex$KeyIndexIterator();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex* this$0, $String* keyValue, bool isKeyIterator);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex* this$0, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* keyValues, bool isKeyIterator);
	virtual int32_t getLast() override;
	virtual int32_t getNodeByPosition(int32_t position) override;
	virtual void init() override;
	virtual ::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray* lookupNodes(int32_t root, $String* keyValue);
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex* this$0 = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray* _nodes = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* _keyValueIterator = nullptr;
	$String* _keyValue = nullptr;
	bool _isKeyIterator = false;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_KeyIndex$KeyIndexIterator_h_
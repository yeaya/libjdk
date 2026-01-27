#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_KeyIndex_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_KeyIndex_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.KeyIndex
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>

#pragma push_macro("EMPTY_NODES")
#undef EMPTY_NODES

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
							class DOMEnhancedForDTM;
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
								class KeyIndex$KeyIndexIterator;
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
namespace java {
	namespace util {
		class Map;
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

class KeyIndex : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase {
	$class(KeyIndex, 0, ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase)
public:
	KeyIndex();
	void init$(int32_t dummy);
	virtual void add($String* value, int32_t node, int32_t rootNode);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	virtual int32_t containsID(int32_t node, Object$* value);
	virtual int32_t containsKey(int32_t node, Object$* value);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray* getDOMNodeById($String* id);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex$KeyIndexIterator* getKeyIndexIterator(Object$* keyValue, bool isKeyCall);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex$KeyIndexIterator* getKeyIndexIterator($String* keyValue, bool isKeyCall);
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex$KeyIndexIterator* getKeyIndexIterator(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* keyValue, bool isKeyCall);
	virtual int32_t getLast() override;
	virtual int32_t getPosition() override;
	virtual int32_t getStartNode() override;
	virtual void gotoMark() override;
	virtual bool isReverse() override;
	virtual void lookupId(Object$* value);
	virtual void lookupKey(Object$* value);
	virtual void merge(::com::sun::org::apache::xalan::internal::xsltc::dom::KeyIndex* other);
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() override;
	virtual void setDom(::com::sun::org::apache::xalan::internal::xsltc::DOM* dom, int32_t node);
	virtual void setMark() override;
	virtual void setRestartable(bool flag) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t start) override;
	::java::util::Map* _index = nullptr;
	int32_t _currentDocumentNode = 0;
	::java::util::Map* _rootToIndexMap = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray* _nodes = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::DOM* _dom = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::DOMEnhancedForDTM* _enhancedDOM = nullptr;
	int32_t _markedPosition = 0;
	static ::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray* EMPTY_NODES;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("EMPTY_NODES")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_KeyIndex_h_
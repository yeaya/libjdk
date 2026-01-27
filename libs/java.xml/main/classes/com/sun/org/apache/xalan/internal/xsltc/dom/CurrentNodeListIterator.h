#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_CurrentNodeListIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_CurrentNodeListIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.CurrentNodeListIterator
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
								class CurrentNodeListFilter;
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
							namespace runtime {
								class AbstractTranslet;
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

class CurrentNodeListIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase {
	$class(CurrentNodeListIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase)
public:
	CurrentNodeListIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* source, ::com::sun::org::apache::xalan::internal::xsltc::dom::CurrentNodeListFilter* filter, int32_t currentNode, ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet);
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* source, bool docOrder, ::com::sun::org::apache::xalan::internal::xsltc::dom::CurrentNodeListFilter* filter, int32_t currentNode, ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	int32_t computePositionOfLast();
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* forceNaturalOrder();
	virtual int32_t getLast() override;
	virtual void gotoMark() override;
	virtual bool isReverse() override;
	virtual int32_t next() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* reset() override;
	virtual void setMark() override;
	virtual void setRestartable(bool isRestartable) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	bool _docOrder = false;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* _source = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::CurrentNodeListFilter* _filter = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::util::IntegerArray* _nodes = nullptr;
	int32_t _currentIndex = 0;
	int32_t _currentNode = 0;
	::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* _translet = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_CurrentNodeListIterator_h_
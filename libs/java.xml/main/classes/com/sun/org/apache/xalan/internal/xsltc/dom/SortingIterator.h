#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_SortingIterator_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_SortingIterator_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.SortingIterator
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMAxisIteratorBase

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMAxisIteratorBase.h>
#include <java/lang/Array.h>

#pragma push_macro("INIT_DATA_SIZE")
#undef INIT_DATA_SIZE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace dom {
								class NodeSortRecord;
								class NodeSortRecordFactory;
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

class SortingIterator : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase {
	$class(SortingIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMAxisIteratorBase)
public:
	SortingIterator();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* source, ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecordFactory* factory);
	void addRecord(::com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord* record);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* cloneIterator() override;
	virtual int32_t getLast() override;
	virtual int32_t getPosition() override;
	virtual void gotoMark() override;
	virtual int32_t next() override;
	int32_t partition(int32_t p, int32_t r);
	void quicksort(int32_t p, int32_t r);
	virtual void setMark() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* setStartNode(int32_t node) override;
	static const int32_t INIT_DATA_SIZE = 16;
	::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* _source = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecordFactory* _factory = nullptr;
	$Array<::com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord>* _data = nullptr;
	int32_t _free = 0;
	int32_t _current = 0;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INIT_DATA_SIZE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_SortingIterator_h_
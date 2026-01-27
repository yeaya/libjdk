#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_NodeSortRecordFactory_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_NodeSortRecordFactory_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.NodeSortRecordFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DESCENDING")
#undef DESCENDING
#pragma push_macro("NUMBER")
#undef NUMBER

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
							class Translet;
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
								class NodeSortRecord;
								class SortSettings;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace text {
		class Collator;
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

class NodeSortRecordFactory : public ::java::lang::Object {
	$class(NodeSortRecordFactory, 0, ::java::lang::Object)
public:
	NodeSortRecordFactory();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::DOM* dom, $String* className, ::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, $StringArray* order, $StringArray* type);
	void init$(::com::sun::org::apache::xalan::internal::xsltc::DOM* dom, $String* className, ::com::sun::org::apache::xalan::internal::xsltc::Translet* translet, $StringArray* order, $StringArray* type, $StringArray* lang, $StringArray* caseOrder);
	virtual $String* getClassName();
	virtual ::com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord* makeNodeSortRecord(int32_t node, int32_t last);
	void setLang($StringArray* lang);
	static int32_t DESCENDING;
	static int32_t NUMBER;
	::com::sun::org::apache::xalan::internal::xsltc::DOM* _dom = nullptr;
	$String* _className = nullptr;
	$Class* _class = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::SortSettings* _sortSettings = nullptr;
	::java::text::Collator* _collator = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DESCENDING")
#pragma pop_macro("NUMBER")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_NodeSortRecordFactory_h_
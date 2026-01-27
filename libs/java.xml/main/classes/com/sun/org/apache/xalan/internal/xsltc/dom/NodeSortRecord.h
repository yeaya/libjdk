#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_NodeSortRecord_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_NodeSortRecord_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.NodeSortRecord
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("COMPARE_ASCENDING")
#undef COMPARE_ASCENDING
#pragma push_macro("COMPARE_DESCENDING")
#undef COMPARE_DESCENDING
#pragma push_macro("COMPARE_NUMERIC")
#undef COMPARE_NUMERIC
#pragma push_macro("COMPARE_STRING")
#undef COMPARE_STRING
#pragma push_macro("DEFAULT_COLLATOR")
#undef DEFAULT_COLLATOR

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
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
								class SortSettings;
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
namespace java {
	namespace lang {
		class Comparable;
		class Double;
	}
}
namespace java {
	namespace text {
		class Collator;
	}
}
namespace java {
	namespace util {
		class Locale;
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

class NodeSortRecord : public ::java::lang::Object {
	$class(NodeSortRecord, 0, ::java::lang::Object)
public:
	NodeSortRecord();
	void init$(int32_t node);
	void init$();
	int32_t compareDocOrder(::com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord* other);
	virtual int32_t compareTo(::com::sun::org::apache::xalan::internal::xsltc::dom::NodeSortRecord* other);
	virtual $String* extractValueFromDOM(::com::sun::org::apache::xalan::internal::xsltc::DOM* dom, int32_t current, int32_t level, ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet, int32_t last) {return nullptr;}
	virtual $Array<::java::text::Collator>* getCollator();
	int32_t getNode();
	void initialize(int32_t node, int32_t last, ::com::sun::org::apache::xalan::internal::xsltc::DOM* dom, ::com::sun::org::apache::xalan::internal::xsltc::dom::SortSettings* settings);
	::java::lang::Double* numericValue(int32_t level);
	::java::lang::Comparable* stringValue(int32_t level);
	static const int32_t COMPARE_STRING = 0;
	static const int32_t COMPARE_NUMERIC = 1;
	static const int32_t COMPARE_ASCENDING = 0;
	static const int32_t COMPARE_DESCENDING = 1;
	static ::java::text::Collator* DEFAULT_COLLATOR;
	::java::text::Collator* _collator = nullptr;
	$Array<::java::text::Collator>* _collators = nullptr;
	::java::util::Locale* _locale = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::dom::SortSettings* _settings = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::DOM* _dom = nullptr;
	int32_t _node = 0;
	int32_t _last = 0;
	int32_t _scanned = 0;
	$ObjectArray* _values = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("COMPARE_ASCENDING")
#pragma pop_macro("COMPARE_DESCENDING")
#pragma pop_macro("COMPARE_NUMERIC")
#pragma pop_macro("COMPARE_STRING")
#pragma pop_macro("DEFAULT_COLLATOR")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_NodeSortRecord_h_
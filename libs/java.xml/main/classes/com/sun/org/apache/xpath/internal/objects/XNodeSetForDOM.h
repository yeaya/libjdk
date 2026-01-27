#ifndef _com_sun_org_apache_xpath_internal_objects_XNodeSetForDOM_h_
#define _com_sun_org_apache_xpath_internal_objects_XNodeSetForDOM_h_
//$ class com.sun.org.apache.xpath.internal.objects.XNodeSetForDOM
//$ extends com.sun.org.apache.xpath.internal.objects.XNodeSet

#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMManager;
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
				namespace xpath {
					namespace internal {
						class XPathContext;
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
			class NodeList;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {
				class NodeIterator;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace objects {

class $export XNodeSetForDOM : public ::com::sun::org::apache::xpath::internal::objects::XNodeSet {
	$class(XNodeSetForDOM, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::objects::XNodeSet)
public:
	XNodeSetForDOM();
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::bool$;
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::equals;
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::execute;
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::error;
	void init$(::org::w3c::dom::Node* node, ::com::sun::org::apache::xml::internal::dtm::DTMManager* dtmMgr);
	void init$(::com::sun::org::apache::xpath::internal::objects::XNodeSet* val);
	void init$(::org::w3c::dom::NodeList* nodeList, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	void init$(::org::w3c::dom::traversal::NodeIterator* nodeIter, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	virtual ::org::w3c::dom::NodeList* nodelist() override;
	virtual ::org::w3c::dom::traversal::NodeIterator* nodeset() override;
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::num;
	virtual $Object* object() override;
	using ::com::sun::org::apache::xpath::internal::objects::XNodeSet::xstr;
	static const int64_t serialVersionUID = (int64_t)0x8B7ABD07E038DD80;
	$Object* m_origObj = nullptr;
};

						} // objects
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_objects_XNodeSetForDOM_h_
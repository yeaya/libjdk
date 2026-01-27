#ifndef _com_sun_org_apache_xpath_internal_axes_ContextNodeList_h_
#define _com_sun_org_apache_xpath_internal_axes_ContextNodeList_h_
//$ interface com.sun.org.apache.xpath.internal.axes.ContextNodeList
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
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
						namespace axes {

class $import ContextNodeList : public ::java::lang::Object {
	$interface(ContextNodeList, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* clone() override;
	virtual ::org::w3c::dom::traversal::NodeIterator* cloneWithReset() {return nullptr;}
	virtual ::org::w3c::dom::Node* getCurrentNode() {return nullptr;}
	virtual int32_t getCurrentPos() {return 0;}
	virtual int32_t getLast() {return 0;}
	virtual bool isFresh() {return false;}
	virtual void reset() {}
	virtual void runTo(int32_t index) {}
	virtual void setCurrentPos(int32_t i) {}
	virtual void setLast(int32_t last) {}
	virtual void setShouldCacheNodes(bool b) {}
	virtual int32_t size() {return 0;}
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_ContextNodeList_h_
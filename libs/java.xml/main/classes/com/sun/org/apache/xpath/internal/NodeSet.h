#ifndef _com_sun_org_apache_xpath_internal_NodeSet_h_
#define _com_sun_org_apache_xpath_internal_NodeSet_h_
//$ class com.sun.org.apache.xpath.internal.NodeSet
//$ extends org.w3c.dom.NodeList
//$ implements org.w3c.dom.traversal.NodeIterator,java.lang.Cloneable,com.sun.org.apache.xpath.internal.axes.ContextNodeList

#include <com/sun/org/apache/xpath/internal/axes/ContextNodeList.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/traversal/NodeIterator.h>

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
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {
				class NodeFilter;
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

class $export NodeSet : public ::org::w3c::dom::NodeList, public ::org::w3c::dom::traversal::NodeIterator, public ::java::lang::Cloneable, public ::com::sun::org::apache::xpath::internal::axes::ContextNodeList {
	$class(NodeSet, $NO_CLASS_INIT, ::org::w3c::dom::NodeList, ::org::w3c::dom::traversal::NodeIterator, ::java::lang::Cloneable, ::com::sun::org::apache::xpath::internal::axes::ContextNodeList)
public:
	NodeSet();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t blocksize);
	void init$(::org::w3c::dom::NodeList* nodelist);
	void init$(::com::sun::org::apache::xpath::internal::NodeSet* nodelist);
	void init$(::org::w3c::dom::traversal::NodeIterator* ni);
	void init$(::org::w3c::dom::Node* node);
	virtual void addElement(::org::w3c::dom::Node* value);
	virtual void addNode(::org::w3c::dom::Node* n);
	virtual int32_t addNodeInDocOrder(::org::w3c::dom::Node* node, bool test, ::com::sun::org::apache::xpath::internal::XPathContext* support);
	virtual int32_t addNodeInDocOrder(::org::w3c::dom::Node* node, ::com::sun::org::apache::xpath::internal::XPathContext* support);
	virtual void addNodes(::org::w3c::dom::NodeList* nodelist);
	virtual void addNodes(::com::sun::org::apache::xpath::internal::NodeSet* ns);
	virtual void addNodes(::org::w3c::dom::traversal::NodeIterator* iterator);
	virtual void addNodesInDocOrder(::org::w3c::dom::NodeList* nodelist, ::com::sun::org::apache::xpath::internal::XPathContext* support);
	virtual void addNodesInDocOrder(::org::w3c::dom::traversal::NodeIterator* iterator, ::com::sun::org::apache::xpath::internal::XPathContext* support);
	bool addNodesInDocOrder(int32_t start, int32_t end, int32_t testIndex, ::org::w3c::dom::NodeList* nodelist, ::com::sun::org::apache::xpath::internal::XPathContext* support);
	virtual void appendNodes(::com::sun::org::apache::xpath::internal::NodeSet* nodes);
	virtual $Object* clone() override;
	virtual ::org::w3c::dom::traversal::NodeIterator* cloneWithReset() override;
	virtual bool contains(::org::w3c::dom::Node* s);
	virtual void detach() override;
	virtual ::org::w3c::dom::Node* elementAt(int32_t i);
	virtual ::org::w3c::dom::Node* getCurrentNode() override;
	virtual int32_t getCurrentPos() override;
	virtual bool getExpandEntityReferences() override;
	virtual ::org::w3c::dom::traversal::NodeFilter* getFilter() override;
	virtual int32_t getLast() override;
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Node* getRoot() override;
	virtual bool getShouldCacheNodes();
	virtual int32_t getWhatToShow() override;
	virtual int32_t indexOf(::org::w3c::dom::Node* elem, int32_t index);
	virtual int32_t indexOf(::org::w3c::dom::Node* elem);
	virtual void insertElementAt(::org::w3c::dom::Node* value, int32_t at);
	virtual void insertNode(::org::w3c::dom::Node* n, int32_t pos);
	virtual bool isFresh() override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	virtual ::org::w3c::dom::Node* nextNode() override;
	::org::w3c::dom::Node* peepOrNull();
	::org::w3c::dom::Node* peepTail();
	::org::w3c::dom::Node* peepTailSub1();
	::org::w3c::dom::Node* pop();
	::org::w3c::dom::Node* popAndTop();
	void popPair();
	void popQuick();
	virtual ::org::w3c::dom::Node* previousNode() override;
	void push(::org::w3c::dom::Node* value);
	void pushPair(::org::w3c::dom::Node* v1, ::org::w3c::dom::Node* v2);
	virtual void removeAllElements();
	virtual bool removeElement(::org::w3c::dom::Node* s);
	virtual void removeElementAt(int32_t i);
	virtual void removeNode(::org::w3c::dom::Node* n);
	virtual void reset() override;
	virtual void runTo(int32_t index) override;
	virtual void setCurrentPos(int32_t i) override;
	virtual void setElementAt(::org::w3c::dom::Node* node, int32_t index);
	virtual void setLast(int32_t last) override;
	virtual void setShouldCacheNodes(bool b) override;
	void setTail(::org::w3c::dom::Node* n);
	void setTailSub1(::org::w3c::dom::Node* n);
	virtual int32_t size() override;
	virtual $String* toString() override;
	int32_t m_next = 0;
	bool m_mutable = false;
	bool m_cacheNodes = false;
	int32_t m_last = 0;
	int32_t m_blocksize = 0;
	$Array<::org::w3c::dom::Node>* m_map = nullptr;
	int32_t m_firstFree = 0;
	int32_t m_mapSize = 0;
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_NodeSet_h_
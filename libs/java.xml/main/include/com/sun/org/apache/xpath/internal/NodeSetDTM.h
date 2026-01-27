#ifndef _com_sun_org_apache_xpath_internal_NodeSetDTM_h_
#define _com_sun_org_apache_xpath_internal_NodeSetDTM_h_
//$ class com.sun.org.apache.xpath.internal.NodeSetDTM
//$ extends com.sun.org.apache.xml.internal.utils.NodeVector
//$ implements com.sun.org.apache.xml.internal.dtm.DTMIterator

#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/utils/NodeVector.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
							class DTMFilter;
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

class $import NodeSetDTM : public ::com::sun::org::apache::xml::internal::utils::NodeVector, public ::com::sun::org::apache::xml::internal::dtm::DTMIterator {
	$class(NodeSetDTM, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::utils::NodeVector, ::com::sun::org::apache::xml::internal::dtm::DTMIterator)
public:
	NodeSetDTM();
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* dtmManager);
	void init$(int32_t blocksize, int32_t dummy, ::com::sun::org::apache::xml::internal::dtm::DTMManager* dtmManager);
	void init$(::com::sun::org::apache::xpath::internal::NodeSetDTM* nodelist);
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMIterator* ni);
	void init$(::org::w3c::dom::traversal::NodeIterator* iterator, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	void init$(::org::w3c::dom::NodeList* nodeList, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt);
	void init$(int32_t node, ::com::sun::org::apache::xml::internal::dtm::DTMManager* dtmManager);
	virtual void addElement(int32_t value) override;
	virtual void addNode(int32_t n);
	virtual int32_t addNodeInDocOrder(int32_t node, bool test, ::com::sun::org::apache::xpath::internal::XPathContext* support);
	virtual int32_t addNodeInDocOrder(int32_t node, ::com::sun::org::apache::xpath::internal::XPathContext* support);
	virtual void addNodes(::com::sun::org::apache::xml::internal::dtm::DTMIterator* iterator);
	virtual void addNodesInDocOrder(::com::sun::org::apache::xml::internal::dtm::DTMIterator* iterator, ::com::sun::org::apache::xpath::internal::XPathContext* support);
	virtual void allowDetachToRelease(bool allowRelease) override;
	virtual void appendNodes(::com::sun::org::apache::xml::internal::utils::NodeVector* nodes) override;
	virtual $Object* clone() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* cloneWithReset() override;
	virtual bool contains(int32_t s) override;
	virtual void detach() override;
	virtual int32_t elementAt(int32_t i) override;
	virtual int32_t getAxis() override;
	virtual int32_t getCurrentNode() override;
	virtual int32_t getCurrentPos() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(int32_t nodeHandle) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMManager* getDTMManager() override;
	virtual bool getExpandEntityReferences() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMFilter* getFilter();
	virtual int32_t getLast();
	virtual int32_t getLength() override;
	virtual int32_t getRoot() override;
	virtual bool getShouldCacheNodes();
	virtual int32_t getWhatToShow() override;
	virtual int32_t indexOf(int32_t elem, int32_t index) override;
	virtual int32_t indexOf(int32_t elem) override;
	virtual void insertElementAt(int32_t value, int32_t at) override;
	virtual void insertNode(int32_t n, int32_t pos);
	virtual bool isDocOrdered() override;
	virtual bool isFresh() override;
	virtual bool isMutable() override;
	virtual int32_t item(int32_t index) override;
	virtual int32_t nextNode() override;
	virtual int32_t previousNode() override;
	virtual void removeAllElements() override;
	virtual bool removeElement(int32_t s) override;
	virtual void removeElementAt(int32_t i) override;
	virtual void removeNode(int32_t n);
	virtual void reset() override;
	virtual void runTo(int32_t index) override;
	virtual void setCurrentPos(int32_t i) override;
	virtual void setElementAt(int32_t node, int32_t index) override;
	virtual void setEnvironment(Object$* environment);
	virtual void setItem(int32_t node, int32_t index) override;
	virtual void setLast(int32_t last);
	virtual void setRoot(int32_t context, Object$* environment) override;
	virtual void setShouldCacheNodes(bool b) override;
	virtual int32_t size() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x6AABDCF4E04F714E;
	::com::sun::org::apache::xml::internal::dtm::DTMManager* m_manager = nullptr;
	int32_t m_next = 0;
	bool m_mutable = false;
	bool m_cacheNodes = false;
	int32_t m_root = 0;
	int32_t m_last = 0;
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_NodeSetDTM_h_
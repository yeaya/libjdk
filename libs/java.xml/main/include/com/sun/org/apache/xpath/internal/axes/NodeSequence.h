#ifndef _com_sun_org_apache_xpath_internal_axes_NodeSequence_h_
#define _com_sun_org_apache_xpath_internal_axes_NodeSequence_h_
//$ class com.sun.org.apache.xpath.internal.axes.NodeSequence
//$ extends com.sun.org.apache.xpath.internal.objects.XObject
//$ implements com.sun.org.apache.xml.internal.dtm.DTMIterator,com.sun.org.apache.xpath.internal.axes.PathComponent

#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PathComponent.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
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
				namespace xml {
					namespace internal {
						namespace utils {
							class NodeVector;
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
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {
							class NodeSequence$IteratorCache;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace axes {

class $import NodeSequence : public ::com::sun::org::apache::xpath::internal::objects::XObject, public ::com::sun::org::apache::xml::internal::dtm::DTMIterator, public ::com::sun::org::apache::xpath::internal::axes::PathComponent {
	$class(NodeSequence, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::objects::XObject, ::com::sun::org::apache::xml::internal::dtm::DTMIterator, ::com::sun::org::apache::xpath::internal::axes::PathComponent)
public:
	NodeSequence();
	using ::com::sun::org::apache::xpath::internal::objects::XObject::execute;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::bool$;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::equals;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::error;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMIterator* iter, int32_t context, ::com::sun::org::apache::xpath::internal::XPathContext* xctxt, bool shouldCacheNodes);
	void init$(Object$* nodeVector);
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* dtmMgr);
	void init$();
	virtual void SetVector(::com::sun::org::apache::xml::internal::utils::NodeVector* v);
	virtual int32_t addNodeInDocOrder(int32_t node);
	virtual void allowDetachToRelease(bool allowRelease) override;
	bool cacheComplete();
	virtual $Object* clone() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* cloneWithReset() override;
	virtual void detach() override;
	virtual void fixupVariables(::java::util::List* vars, int32_t globalsSize) override;
	virtual int32_t getAnalysisBits() override;
	virtual int32_t getAxis() override;
	::com::sun::org::apache::xpath::internal::axes::NodeSequence$IteratorCache* getCache();
	::com::sun::org::apache::xml::internal::dtm::DTMIterator* getContainedIter();
	virtual int32_t getCurrentNode() override;
	virtual int32_t getCurrentPos() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(int32_t nodeHandle) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMManager* getDTMManager() override;
	virtual bool getExpandEntityReferences() override;
	virtual ::com::sun::org::apache::xpath::internal::axes::NodeSequence$IteratorCache* getIteratorCache();
	virtual int32_t getLength() override;
	virtual int32_t getRoot() override;
	virtual ::com::sun::org::apache::xml::internal::utils::NodeVector* getVector();
	virtual int32_t getWhatToShow() override;
	virtual bool hasCache();
	virtual bool isDocOrdered() override;
	virtual bool isFresh() override;
	virtual bool isMutable() override;
	virtual int32_t item(int32_t index) override;
	void markCacheComplete();
	virtual int32_t nextNode() override;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::num;
	virtual int32_t previousNode() override;
	virtual void reset() override;
	virtual void runTo(int32_t index) override;
	virtual void setCurrentPos(int32_t i) override;
	virtual void setItem(int32_t node, int32_t index) override;
	void setIter(::com::sun::org::apache::xml::internal::dtm::DTMIterator* iter);
	virtual void setObject(Object$* obj) override;
	virtual void setRoot(int32_t nodeHandle, Object$* environment) override;
	virtual void setShouldCacheNodes(bool b) override;
	using ::com::sun::org::apache::xpath::internal::objects::XObject::xstr;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x35A7B8BECBFE0B34;
	int32_t m_last = 0;
	int32_t m_next = 0;
	::com::sun::org::apache::xpath::internal::axes::NodeSequence$IteratorCache* m_cache = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTMIterator* m_iter = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTMManager* m_dtmMgr = nullptr;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_NodeSequence_h_
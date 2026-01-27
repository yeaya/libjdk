#ifndef _com_sun_org_apache_xpath_internal_axes_LocPathIterator_h_
#define _com_sun_org_apache_xpath_internal_axes_LocPathIterator_h_
//$ class com.sun.org.apache.xpath.internal.axes.LocPathIterator
//$ extends com.sun.org.apache.xpath.internal.axes.PredicatedNodeTest
//$ implements java.lang.Cloneable,com.sun.org.apache.xml.internal.dtm.DTMIterator,com.sun.org.apache.xpath.internal.axes.PathComponent

#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/PathComponent.h>
#include <com/sun/org/apache/xpath/internal/axes/PredicatedNodeTest.h>
#include <java/lang/Cloneable.h>

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
				namespace xml {
					namespace internal {
						namespace utils {
							class PrefixResolver;
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
						class ExpressionOwner;
						class XPathContext;
						class XPathVisitor;
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
							class IteratorPool;
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
						namespace compiler {
							class Compiler;
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
						namespace objects {
							class XObject;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class ContentHandler;
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

class LocPathIterator : public ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest, public ::java::lang::Cloneable, public ::com::sun::org::apache::xml::internal::dtm::DTMIterator, public ::com::sun::org::apache::xpath::internal::axes::PathComponent {
	$class(LocPathIterator, $NO_CLASS_INIT, ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest, ::java::lang::Cloneable, ::com::sun::org::apache::xml::internal::dtm::DTMIterator, ::com::sun::org::apache::xpath::internal::axes::PathComponent)
public:
	LocPathIterator();
	using ::com::sun::org::apache::xpath::internal::axes::PredicatedNodeTest::execute;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::com::sun::org::apache::xml::internal::utils::PrefixResolver* nscontext);
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis);
	void init$(::com::sun::org::apache::xpath::internal::compiler::Compiler* compiler, int32_t opPos, int32_t analysis, bool shouldLoadWalkers);
	virtual void allowDetachToRelease(bool allowRelease) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* asIterator(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, int32_t contextNode) override;
	virtual int32_t asNode(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual bool bool$(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void callVisitors(::com::sun::org::apache::xpath::internal::ExpressionOwner* owner, ::com::sun::org::apache::xpath::internal::XPathVisitor* visitor) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* cloneWithReset() override;
	virtual void detach() override;
	virtual ::com::sun::org::apache::xpath::internal::objects::XObject* execute(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual void executeCharsToContentHandler(::com::sun::org::apache::xpath::internal::XPathContext* xctxt, ::org::xml::sax::ContentHandler* handler) override;
	virtual int32_t getAnalysisBits() override;
	virtual int32_t getAxis() override;
	int32_t getContext();
	int32_t getCurrentContextNode();
	virtual int32_t getCurrentNode() override;
	virtual int32_t getCurrentPos() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(int32_t nodeHandle) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMManager* getDTMManager() override;
	virtual bool getExpandEntityReferences() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMFilter* getFilter();
	bool getFoundLast();
	virtual bool getIsTopLevel();
	virtual int32_t getLastPos(::com::sun::org::apache::xpath::internal::XPathContext* xctxt) override;
	virtual int32_t getLength() override;
	::com::sun::org::apache::xml::internal::utils::PrefixResolver* getPrefixResolver();
	virtual int32_t getRoot() override;
	virtual int32_t getWhatToShow() override;
	::com::sun::org::apache::xpath::internal::XPathContext* getXPathContext();
	virtual void incrementCurrentPos();
	virtual bool isDocOrdered() override;
	virtual bool isFresh() override;
	virtual bool isMutable() override;
	virtual bool isNodesetExpr() override;
	virtual int32_t item(int32_t index) override;
	virtual int32_t nextNode() override {return 0;}
	virtual int32_t previousNode() override;
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void reset() override;
	virtual int32_t returnNextNode(int32_t nextNode);
	virtual void runTo(int32_t index) override;
	void setCurrentContextNode(int32_t n);
	virtual void setCurrentPos(int32_t i) override;
	virtual void setEnvironment(Object$* environment);
	virtual void setIsTopLevel(bool b);
	virtual void setItem(int32_t node, int32_t index) override;
	virtual void setNextPosition(int32_t next);
	virtual void setRoot(int32_t context, Object$* environment) override;
	virtual void setShouldCacheNodes(bool b) override;
	virtual int32_t size();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0xC020B82355E20206;
	bool m_allowDetach = false;
	::com::sun::org::apache::xpath::internal::axes::IteratorPool* m_clones = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTM* m_cdtm = nullptr;
	int32_t m_stackFrame = 0;
	bool m_isTopLevel = false;
	int32_t m_lastFetched = 0;
	int32_t m_context = 0;
	int32_t m_currentContextNode = 0;
	int32_t m_pos = 0;
	int32_t m_length = 0;
	::com::sun::org::apache::xml::internal::utils::PrefixResolver* m_prefixResolver = nullptr;
	::com::sun::org::apache::xpath::internal::XPathContext* m_execContext = nullptr;
};

						} // axes
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xpath_internal_axes_LocPathIterator_h_
#ifndef _com_sun_org_apache_xpath_internal_XPathContext_h_
#define _com_sun_org_apache_xpath_internal_XPathContext_h_
//$ class com.sun.org.apache.xpath.internal.XPathContext
//$ extends com.sun.org.apache.xml.internal.dtm.DTMManager

#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>

#pragma push_macro("RECURSIONLIMIT")
#undef RECURSIONLIMIT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace extensions {
							class ExpressionContext;
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
							class DTM;
							class DTMFilter;
							class DTMIterator;
							class DTMWSFilter;
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
							namespace ref {
								namespace sax2dtm {
									class SAX2RTFDTM;
								}
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
						namespace utils {
							class IntStack;
							class NodeVector;
							class ObjectStack;
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
						class VariableStack;
						class XPathContext$XPathExpressionContext;
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
							class SubContextList;
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
							class DTMXRTreeFrag;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Method;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Stack;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class ErrorListener;
			class Source;
			class SourceLocator;
			class URIResolver;
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
	namespace xml {
		namespace sax {
			class XMLReader;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

class $export XPathContext : public ::com::sun::org::apache::xml::internal::dtm::DTMManager {
	$class(XPathContext, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::DTMManager)
public:
	XPathContext();
	void init$();
	void init$(bool overrideDefaultParser);
	void init$(Object$* owner);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* createDTMIterator(Object$* xpathCompiler, int32_t pos) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* createDTMIterator($String* xpathString, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* presolver) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* createDTMIterator(int32_t whatToShow, ::com::sun::org::apache::xml::internal::dtm::DTMFilter* filter, bool entityReferenceExpansion) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* createDTMIterator(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* createDocumentFragment() override;
	virtual ::java::util::Stack* getAxesIteratorStackStacks();
	int32_t getContextNode();
	::com::sun::org::apache::xml::internal::dtm::DTMIterator* getContextNodeList();
	virtual ::java::util::Stack* getContextNodeListsStack();
	::com::sun::org::apache::xml::internal::dtm::DTMIterator* getContextNodes();
	int32_t getCurrentExpressionNode();
	virtual ::com::sun::org::apache::xml::internal::utils::IntStack* getCurrentExpressionNodeStack();
	int32_t getCurrentNode();
	virtual ::com::sun::org::apache::xpath::internal::axes::SubContextList* getCurrentNodeList();
	virtual ::com::sun::org::apache::xml::internal::utils::IntStack* getCurrentNodeStack();
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(::javax::xml::transform::Source* source, bool unique, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* wsfilter, bool incremental, bool doIndexing) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(int32_t nodeHandle) override;
	virtual int32_t getDTMHandleFromNode(::org::w3c::dom::Node* node) override;
	virtual int32_t getDTMIdentity(::com::sun::org::apache::xml::internal::dtm::DTM* dtm) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMManager* getDTMManager();
	virtual ::com::sun::org::apache::xpath::internal::objects::DTMXRTreeFrag* getDTMXRTreeFrag(int32_t dtmIdentity);
	::javax::xml::transform::ErrorListener* getErrorListener();
	virtual ::com::sun::org::apache::xalan::internal::extensions::ExpressionContext* getExpressionContext();
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getGlobalRTFDTM();
	int32_t getIteratorRoot();
	::com::sun::org::apache::xml::internal::utils::PrefixResolver* getNamespaceContext();
	virtual $Object* getOwnerObject();
	int32_t getPredicatePos();
	int32_t getPredicateRoot();
	::org::xml::sax::XMLReader* getPrimaryReader();
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getRTFDTM();
	virtual ::javax::xml::transform::SourceLocator* getSAXLocator();
	virtual ::com::sun::org::apache::xpath::internal::axes::SubContextList* getSubContextList();
	::javax::xml::transform::URIResolver* getURIResolver();
	::com::sun::org::apache::xpath::internal::VariableStack* getVarStack();
	void init(bool overrideDefaultParser);
	virtual bool isSecureProcessing();
	void popContextNodeList();
	void popCurrentExpressionNode();
	void popCurrentNode();
	void popCurrentNodeAndExpression();
	void popExpressionState();
	void popIteratorRoot();
	void popNamespaceContext();
	void popPredicatePos();
	void popPredicateRoot();
	virtual void popRTFContext();
	virtual void popSAXLocator();
	void popSubContextList();
	void pushContextNodeList(::com::sun::org::apache::xml::internal::dtm::DTMIterator* nl);
	void pushCurrentExpressionNode(int32_t n);
	void pushCurrentNode(int32_t n);
	void pushCurrentNodeAndExpression(int32_t cn, int32_t en);
	void pushExpressionState(int32_t cn, int32_t en, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* nc);
	void pushIteratorRoot(int32_t n);
	void pushNamespaceContext(::com::sun::org::apache::xml::internal::utils::PrefixResolver* pr);
	void pushNamespaceContextNull();
	void pushPredicatePos(int32_t n);
	void pushPredicateRoot(int32_t n);
	virtual void pushRTFContext();
	virtual void pushSAXLocator(::javax::xml::transform::SourceLocator* location);
	virtual void pushSAXLocatorNull();
	void pushSubContextList(::com::sun::org::apache::xpath::internal::axes::SubContextList* iter);
	virtual bool release(::com::sun::org::apache::xml::internal::dtm::DTM* dtm, bool shouldHardDelete) override;
	void releaseDTMXRTreeFrags();
	virtual void reset();
	virtual void setAxesIteratorStackStacks(::java::util::Stack* s);
	virtual void setContextNodeListsStack(::java::util::Stack* s);
	virtual void setCurrentExpressionNodeStack(::com::sun::org::apache::xml::internal::utils::IntStack* nv);
	virtual void setCurrentNodeStack(::com::sun::org::apache::xml::internal::utils::IntStack* nv);
	virtual void setErrorListener(::javax::xml::transform::ErrorListener* listener);
	void setNamespaceContext(::com::sun::org::apache::xml::internal::utils::PrefixResolver* pr);
	virtual void setPrimaryReader(::org::xml::sax::XMLReader* reader);
	virtual void setSAXLocator(::javax::xml::transform::SourceLocator* location);
	virtual void setSecureProcessing(bool flag);
	virtual void setURIResolver(::javax::xml::transform::URIResolver* resolver);
	void setVarStack(::com::sun::org::apache::xpath::internal::VariableStack* varStack);
	::com::sun::org::apache::xml::internal::utils::IntStack* m_last_pushed_rtfdtm = nullptr;
	::java::util::List* m_rtfdtm_stack = nullptr;
	int32_t m_which_rtfdtm = 0;
	::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2RTFDTM* m_global_rtfdtm = nullptr;
	::java::util::Map* m_DTMXRTreeFrags = nullptr;
	bool m_isSecureProcessing = false;
	bool m_overrideDefaultParser = false;
	::com::sun::org::apache::xml::internal::dtm::DTMManager* m_dtmManager = nullptr;
	::com::sun::org::apache::xml::internal::utils::ObjectStack* m_saxLocations = nullptr;
	$Object* m_owner = nullptr;
	::java::lang::reflect::Method* m_ownerGetErrorListener = nullptr;
	::com::sun::org::apache::xpath::internal::VariableStack* m_variableStacks = nullptr;
	::javax::xml::transform::ErrorListener* m_errorListener = nullptr;
	::javax::xml::transform::ErrorListener* m_defaultErrorListener = nullptr;
	::javax::xml::transform::URIResolver* m_uriResolver = nullptr;
	::org::xml::sax::XMLReader* m_primaryReader = nullptr;
	::java::util::Stack* m_contextNodeLists = nullptr;
	static const int32_t RECURSIONLIMIT = 4096; // (1024 * 4)
	::com::sun::org::apache::xml::internal::utils::IntStack* m_currentNodes = nullptr;
	::com::sun::org::apache::xml::internal::utils::NodeVector* m_iteratorRoots = nullptr;
	::com::sun::org::apache::xml::internal::utils::NodeVector* m_predicateRoots = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntStack* m_currentExpressionNodes = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntStack* m_predicatePos = nullptr;
	::com::sun::org::apache::xml::internal::utils::ObjectStack* m_prefixResolvers = nullptr;
	::java::util::Stack* m_axesIteratorStack = nullptr;
	::com::sun::org::apache::xpath::internal::XPathContext$XPathExpressionContext* expressionContext = nullptr;
};

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("RECURSIONLIMIT")

#endif // _com_sun_org_apache_xpath_internal_XPathContext_h_
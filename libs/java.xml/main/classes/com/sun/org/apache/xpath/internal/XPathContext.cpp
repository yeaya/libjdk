#include <com/sun/org/apache/xpath/internal/XPathContext.h>

#include <com/sun/org/apache/xalan/internal/extensions/ExpressionContext.h>
#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMIterator.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBase.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseTraversers.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2RTFDTM.h>
#include <com/sun/org/apache/xml/internal/utils/DefaultErrorHandler.h>
#include <com/sun/org/apache/xml/internal/utils/IntStack.h>
#include <com/sun/org/apache/xml/internal/utils/NodeVector.h>
#include <com/sun/org/apache/xml/internal/utils/ObjectStack.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/XMLStringFactory.h>
#include <com/sun/org/apache/xpath/internal/VariableStack.h>
#include <com/sun/org/apache/xpath/internal/XPathContext$XPathExpressionContext.h>
#include <com/sun/org/apache/xpath/internal/axes/BasicTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/ChildTestIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/LocPathIterator.h>
#include <com/sun/org/apache/xpath/internal/axes/OneStepIteratorForward.h>
#include <com/sun/org/apache/xpath/internal/axes/SubContextList.h>
#include <com/sun/org/apache/xpath/internal/objects/DTMXRTreeFrag.h>
#include <com/sun/org/apache/xpath/internal/objects/XMLStringFactoryImpl.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Stack.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/SourceLocator.h>
#include <javax/xml/transform/URIResolver.h>
#include <org/w3c/dom/Node.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

#undef ER_NULL_ERROR_HANDLER
#undef NULL
#undef RECURSIONLIMIT
#undef SELF

using $ExpressionContext = ::com::sun::org::apache::xalan::internal::extensions::ExpressionContext;
using $XSLMessages = ::com::sun::org::apache::xalan::internal::res::XSLMessages;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMFilter = ::com::sun::org::apache::xml::internal::dtm::DTMFilter;
using $DTMIterator = ::com::sun::org::apache::xml::internal::dtm::DTMIterator;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $DTMWSFilter = ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter;
using $DTMDefaultBase = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBase;
using $DTMDefaultBaseIterators = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators;
using $DTMDefaultBaseTraversers = ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseTraversers;
using $SAX2DTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM;
using $SAX2RTFDTM = ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2RTFDTM;
using $DefaultErrorHandler = ::com::sun::org::apache::xml::internal::utils::DefaultErrorHandler;
using $IntStack = ::com::sun::org::apache::xml::internal::utils::IntStack;
using $NodeVector = ::com::sun::org::apache::xml::internal::utils::NodeVector;
using $ObjectStack = ::com::sun::org::apache::xml::internal::utils::ObjectStack;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $VariableStack = ::com::sun::org::apache::xpath::internal::VariableStack;
using $XPathContext$XPathExpressionContext = ::com::sun::org::apache::xpath::internal::XPathContext$XPathExpressionContext;
using $BasicTestIterator = ::com::sun::org::apache::xpath::internal::axes::BasicTestIterator;
using $ChildTestIterator = ::com::sun::org::apache::xpath::internal::axes::ChildTestIterator;
using $LocPathIterator = ::com::sun::org::apache::xpath::internal::axes::LocPathIterator;
using $OneStepIteratorForward = ::com::sun::org::apache::xpath::internal::axes::OneStepIteratorForward;
using $SubContextList = ::com::sun::org::apache::xpath::internal::axes::SubContextList;
using $DTMXRTreeFrag = ::com::sun::org::apache::xpath::internal::objects::DTMXRTreeFrag;
using $XMLStringFactoryImpl = ::com::sun::org::apache::xpath::internal::objects::XMLStringFactoryImpl;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Method = ::java::lang::reflect::Method;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Stack = ::java::util::Stack;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $Source = ::javax::xml::transform::Source;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
using $URIResolver = ::javax::xml::transform::URIResolver;
using $Node = ::org::w3c::dom::Node;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {

$FieldInfo _XPathContext_FieldInfo_[] = {
	{"m_last_pushed_rtfdtm", "Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, 0, $field(XPathContext, m_last_pushed_rtfdtm)},
	{"m_rtfdtm_stack", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/dtm/DTM;>;", $PRIVATE, $field(XPathContext, m_rtfdtm_stack)},
	{"m_which_rtfdtm", "I", nullptr, $PRIVATE, $field(XPathContext, m_which_rtfdtm)},
	{"m_global_rtfdtm", "Lcom/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2RTFDTM;", nullptr, $PRIVATE, $field(XPathContext, m_global_rtfdtm)},
	{"m_DTMXRTreeFrags", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Integer;Lcom/sun/org/apache/xpath/internal/objects/DTMXRTreeFrag;>;", $PRIVATE, $field(XPathContext, m_DTMXRTreeFrags)},
	{"m_isSecureProcessing", "Z", nullptr, $PRIVATE, $field(XPathContext, m_isSecureProcessing)},
	{"m_overrideDefaultParser", "Z", nullptr, $PRIVATE, $field(XPathContext, m_overrideDefaultParser)},
	{"m_dtmManager", "Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PROTECTED, $field(XPathContext, m_dtmManager)},
	{"m_saxLocations", "Lcom/sun/org/apache/xml/internal/utils/ObjectStack;", nullptr, 0, $field(XPathContext, m_saxLocations)},
	{"m_owner", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(XPathContext, m_owner)},
	{"m_ownerGetErrorListener", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $field(XPathContext, m_ownerGetErrorListener)},
	{"m_variableStacks", "Lcom/sun/org/apache/xpath/internal/VariableStack;", nullptr, $PRIVATE, $field(XPathContext, m_variableStacks)},
	{"m_errorListener", "Ljavax/xml/transform/ErrorListener;", nullptr, $PRIVATE, $field(XPathContext, m_errorListener)},
	{"m_defaultErrorListener", "Ljavax/xml/transform/ErrorListener;", nullptr, $PRIVATE, $field(XPathContext, m_defaultErrorListener)},
	{"m_uriResolver", "Ljavax/xml/transform/URIResolver;", nullptr, $PRIVATE, $field(XPathContext, m_uriResolver)},
	{"m_primaryReader", "Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC, $field(XPathContext, m_primaryReader)},
	{"m_contextNodeLists", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;>;", $PRIVATE, $field(XPathContext, m_contextNodeLists)},
	{"RECURSIONLIMIT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPathContext, RECURSIONLIMIT)},
	{"m_currentNodes", "Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, $PRIVATE, $field(XPathContext, m_currentNodes)},
	{"m_iteratorRoots", "Lcom/sun/org/apache/xml/internal/utils/NodeVector;", nullptr, $PRIVATE, $field(XPathContext, m_iteratorRoots)},
	{"m_predicateRoots", "Lcom/sun/org/apache/xml/internal/utils/NodeVector;", nullptr, $PRIVATE, $field(XPathContext, m_predicateRoots)},
	{"m_currentExpressionNodes", "Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, $PRIVATE, $field(XPathContext, m_currentExpressionNodes)},
	{"m_predicatePos", "Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, $PRIVATE, $field(XPathContext, m_predicatePos)},
	{"m_prefixResolvers", "Lcom/sun/org/apache/xml/internal/utils/ObjectStack;", nullptr, $PRIVATE, $field(XPathContext, m_prefixResolvers)},
	{"m_axesIteratorStack", "Ljava/util/Stack;", "Ljava/util/Stack<Lcom/sun/org/apache/xpath/internal/axes/SubContextList;>;", $PRIVATE, $field(XPathContext, m_axesIteratorStack)},
	{"expressionContext", "Lcom/sun/org/apache/xpath/internal/XPathContext$XPathExpressionContext;", nullptr, 0, $field(XPathContext, expressionContext)},
	{}
};

$MethodInfo _XPathContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XPathContext, init$, void)},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(XPathContext, init$, void, bool)},
	{"<init>", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(XPathContext, init$, void, Object$*)},
	{"createDTMIterator", "(Ljava/lang/Object;I)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(XPathContext, createDTMIterator, $DTMIterator*, Object$*, int32_t)},
	{"createDTMIterator", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(XPathContext, createDTMIterator, $DTMIterator*, $String*, $PrefixResolver*)},
	{"createDTMIterator", "(ILcom/sun/org/apache/xml/internal/dtm/DTMFilter;Z)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(XPathContext, createDTMIterator, $DTMIterator*, int32_t, $DTMFilter*, bool)},
	{"createDTMIterator", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC, $virtualMethod(XPathContext, createDTMIterator, $DTMIterator*, int32_t)},
	{"createDocumentFragment", "()Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(XPathContext, createDocumentFragment, $DTM*)},
	{"getAxesIteratorStackStacks", "()Ljava/util/Stack;", "()Ljava/util/Stack<Lcom/sun/org/apache/xpath/internal/axes/SubContextList;>;", $PUBLIC, $virtualMethod(XPathContext, getAxesIteratorStackStacks, $Stack*)},
	{"getContextNode", "()I", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getContextNode, int32_t)},
	{"getContextNodeList", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getContextNodeList, $DTMIterator*)},
	{"getContextNodeListsStack", "()Ljava/util/Stack;", "()Ljava/util/Stack<Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;>;", $PUBLIC, $virtualMethod(XPathContext, getContextNodeListsStack, $Stack*)},
	{"getContextNodes", "()Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getContextNodes, $DTMIterator*)},
	{"getCurrentExpressionNode", "()I", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getCurrentExpressionNode, int32_t)},
	{"getCurrentExpressionNodeStack", "()Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getCurrentExpressionNodeStack, $IntStack*)},
	{"getCurrentNode", "()I", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getCurrentNode, int32_t)},
	{"getCurrentNodeList", "()Lcom/sun/org/apache/xpath/internal/axes/SubContextList;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getCurrentNodeList, $SubContextList*)},
	{"getCurrentNodeStack", "()Lcom/sun/org/apache/xml/internal/utils/IntStack;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getCurrentNodeStack, $IntStack*)},
	{"getDTM", "(Ljavax/xml/transform/Source;ZLcom/sun/org/apache/xml/internal/dtm/DTMWSFilter;ZZ)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getDTM, $DTM*, $Source*, bool, $DTMWSFilter*, bool, bool)},
	{"getDTM", "(I)Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getDTM, $DTM*, int32_t)},
	{"getDTMHandleFromNode", "(Lorg/w3c/dom/Node;)I", nullptr, $PUBLIC, $virtualMethod(XPathContext, getDTMHandleFromNode, int32_t, $Node*)},
	{"getDTMIdentity", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;)I", nullptr, $PUBLIC, $virtualMethod(XPathContext, getDTMIdentity, int32_t, $DTM*)},
	{"getDTMManager", "()Lcom/sun/org/apache/xml/internal/dtm/DTMManager;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getDTMManager, $DTMManager*)},
	{"getDTMXRTreeFrag", "(I)Lcom/sun/org/apache/xpath/internal/objects/DTMXRTreeFrag;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getDTMXRTreeFrag, $DTMXRTreeFrag*, int32_t)},
	{"getErrorListener", "()Ljavax/xml/transform/ErrorListener;", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getErrorListener, $ErrorListener*)},
	{"getExpressionContext", "()Lcom/sun/org/apache/xalan/internal/extensions/ExpressionContext;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getExpressionContext, $ExpressionContext*)},
	{"getGlobalRTFDTM", "()Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getGlobalRTFDTM, $DTM*)},
	{"getIteratorRoot", "()I", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getIteratorRoot, int32_t)},
	{"getNamespaceContext", "()Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getNamespaceContext, $PrefixResolver*)},
	{"getOwnerObject", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getOwnerObject, $Object*)},
	{"getPredicatePos", "()I", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getPredicatePos, int32_t)},
	{"getPredicateRoot", "()I", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getPredicateRoot, int32_t)},
	{"getPrimaryReader", "()Lorg/xml/sax/XMLReader;", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getPrimaryReader, $XMLReader*)},
	{"getRTFDTM", "()Lcom/sun/org/apache/xml/internal/dtm/DTM;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getRTFDTM, $DTM*)},
	{"getSAXLocator", "()Ljavax/xml/transform/SourceLocator;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getSAXLocator, $SourceLocator*)},
	{"getSubContextList", "()Lcom/sun/org/apache/xpath/internal/axes/SubContextList;", nullptr, $PUBLIC, $virtualMethod(XPathContext, getSubContextList, $SubContextList*)},
	{"getURIResolver", "()Ljavax/xml/transform/URIResolver;", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getURIResolver, $URIResolver*)},
	{"getVarStack", "()Lcom/sun/org/apache/xpath/internal/VariableStack;", nullptr, $PUBLIC | $FINAL, $method(XPathContext, getVarStack, $VariableStack*)},
	{"init", "(Z)V", nullptr, $PRIVATE, $method(XPathContext, init, void, bool)},
	{"isSecureProcessing", "()Z", nullptr, $PUBLIC, $virtualMethod(XPathContext, isSecureProcessing, bool)},
	{"popContextNodeList", "()V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, popContextNodeList, void)},
	{"popCurrentExpressionNode", "()V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, popCurrentExpressionNode, void)},
	{"popCurrentNode", "()V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, popCurrentNode, void)},
	{"popCurrentNodeAndExpression", "()V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, popCurrentNodeAndExpression, void)},
	{"popExpressionState", "()V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, popExpressionState, void)},
	{"popIteratorRoot", "()V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, popIteratorRoot, void)},
	{"popNamespaceContext", "()V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, popNamespaceContext, void)},
	{"popPredicatePos", "()V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, popPredicatePos, void)},
	{"popPredicateRoot", "()V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, popPredicateRoot, void)},
	{"popRTFContext", "()V", nullptr, $PUBLIC, $virtualMethod(XPathContext, popRTFContext, void)},
	{"popSAXLocator", "()V", nullptr, $PUBLIC, $virtualMethod(XPathContext, popSAXLocator, void)},
	{"popSubContextList", "()V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, popSubContextList, void)},
	{"pushContextNodeList", "(Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;)V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, pushContextNodeList, void, $DTMIterator*)},
	{"pushCurrentExpressionNode", "(I)V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, pushCurrentExpressionNode, void, int32_t)},
	{"pushCurrentNode", "(I)V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, pushCurrentNode, void, int32_t)},
	{"pushCurrentNodeAndExpression", "(II)V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, pushCurrentNodeAndExpression, void, int32_t, int32_t)},
	{"pushExpressionState", "(IILcom/sun/org/apache/xml/internal/utils/PrefixResolver;)V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, pushExpressionState, void, int32_t, int32_t, $PrefixResolver*)},
	{"pushIteratorRoot", "(I)V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, pushIteratorRoot, void, int32_t)},
	{"pushNamespaceContext", "(Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, pushNamespaceContext, void, $PrefixResolver*)},
	{"pushNamespaceContextNull", "()V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, pushNamespaceContextNull, void)},
	{"pushPredicatePos", "(I)V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, pushPredicatePos, void, int32_t)},
	{"pushPredicateRoot", "(I)V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, pushPredicateRoot, void, int32_t)},
	{"pushRTFContext", "()V", nullptr, $PUBLIC, $virtualMethod(XPathContext, pushRTFContext, void)},
	{"pushSAXLocator", "(Ljavax/xml/transform/SourceLocator;)V", nullptr, $PUBLIC, $virtualMethod(XPathContext, pushSAXLocator, void, $SourceLocator*)},
	{"pushSAXLocatorNull", "()V", nullptr, $PUBLIC, $virtualMethod(XPathContext, pushSAXLocatorNull, void)},
	{"pushSubContextList", "(Lcom/sun/org/apache/xpath/internal/axes/SubContextList;)V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, pushSubContextList, void, $SubContextList*)},
	{"release", "(Lcom/sun/org/apache/xml/internal/dtm/DTM;Z)Z", nullptr, $PUBLIC, $virtualMethod(XPathContext, release, bool, $DTM*, bool)},
	{"releaseDTMXRTreeFrags", "()V", nullptr, $PRIVATE | $FINAL, $method(XPathContext, releaseDTMXRTreeFrags, void)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(XPathContext, reset, void)},
	{"setAxesIteratorStackStacks", "(Ljava/util/Stack;)V", "(Ljava/util/Stack<Lcom/sun/org/apache/xpath/internal/axes/SubContextList;>;)V", $PUBLIC, $virtualMethod(XPathContext, setAxesIteratorStackStacks, void, $Stack*)},
	{"setContextNodeListsStack", "(Ljava/util/Stack;)V", "(Ljava/util/Stack<Lcom/sun/org/apache/xml/internal/dtm/DTMIterator;>;)V", $PUBLIC, $virtualMethod(XPathContext, setContextNodeListsStack, void, $Stack*)},
	{"setCurrentExpressionNodeStack", "(Lcom/sun/org/apache/xml/internal/utils/IntStack;)V", nullptr, $PUBLIC, $virtualMethod(XPathContext, setCurrentExpressionNodeStack, void, $IntStack*)},
	{"setCurrentNodeStack", "(Lcom/sun/org/apache/xml/internal/utils/IntStack;)V", nullptr, $PUBLIC, $virtualMethod(XPathContext, setCurrentNodeStack, void, $IntStack*)},
	{"setErrorListener", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $virtualMethod(XPathContext, setErrorListener, void, $ErrorListener*), "java.lang.IllegalArgumentException"},
	{"setNamespaceContext", "(Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, setNamespaceContext, void, $PrefixResolver*)},
	{"setPrimaryReader", "(Lorg/xml/sax/XMLReader;)V", nullptr, $PUBLIC, $virtualMethod(XPathContext, setPrimaryReader, void, $XMLReader*)},
	{"setSAXLocator", "(Ljavax/xml/transform/SourceLocator;)V", nullptr, $PUBLIC, $virtualMethod(XPathContext, setSAXLocator, void, $SourceLocator*)},
	{"setSecureProcessing", "(Z)V", nullptr, $PUBLIC, $virtualMethod(XPathContext, setSecureProcessing, void, bool)},
	{"setURIResolver", "(Ljavax/xml/transform/URIResolver;)V", nullptr, $PUBLIC, $virtualMethod(XPathContext, setURIResolver, void, $URIResolver*)},
	{"setVarStack", "(Lcom/sun/org/apache/xpath/internal/VariableStack;)V", nullptr, $PUBLIC | $FINAL, $method(XPathContext, setVarStack, void, $VariableStack*)},
	{}
};

$InnerClassInfo _XPathContext_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xpath.internal.XPathContext$XPathExpressionContext", "com.sun.org.apache.xpath.internal.XPathContext", "XPathExpressionContext", $PUBLIC},
	{}
};

$ClassInfo _XPathContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.XPathContext",
	"com.sun.org.apache.xml.internal.dtm.DTMManager",
	nullptr,
	_XPathContext_FieldInfo_,
	_XPathContext_MethodInfo_,
	nullptr,
	nullptr,
	_XPathContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xpath.internal.XPathContext$XPathExpressionContext"
};

$Object* allocate$XPathContext($Class* clazz) {
	return $of($alloc(XPathContext));
}

$DTMManager* XPathContext::getDTMManager() {
	return this->m_dtmManager;
}

void XPathContext::setSecureProcessing(bool flag) {
	this->m_isSecureProcessing = flag;
}

bool XPathContext::isSecureProcessing() {
	return this->m_isSecureProcessing;
}

$DTM* XPathContext::getDTM($Source* source, bool unique, $DTMWSFilter* wsfilter, bool incremental, bool doIndexing) {
	return $nc(this->m_dtmManager)->getDTM(source, unique, wsfilter, incremental, doIndexing);
}

$DTM* XPathContext::getDTM(int32_t nodeHandle) {
	return $nc(this->m_dtmManager)->getDTM(nodeHandle);
}

int32_t XPathContext::getDTMHandleFromNode($Node* node) {
	return $nc(this->m_dtmManager)->getDTMHandleFromNode(node);
}

int32_t XPathContext::getDTMIdentity($DTM* dtm) {
	return $nc(this->m_dtmManager)->getDTMIdentity(dtm);
}

$DTM* XPathContext::createDocumentFragment() {
	return $nc(this->m_dtmManager)->createDocumentFragment();
}

bool XPathContext::release($DTM* dtm, bool shouldHardDelete) {
	if (this->m_rtfdtm_stack != nullptr && $nc(this->m_rtfdtm_stack)->contains(dtm)) {
		return false;
	}
	return $nc(this->m_dtmManager)->release(dtm, shouldHardDelete);
}

$DTMIterator* XPathContext::createDTMIterator(Object$* xpathCompiler, int32_t pos) {
	return $nc(this->m_dtmManager)->createDTMIterator(xpathCompiler, pos);
}

$DTMIterator* XPathContext::createDTMIterator($String* xpathString, $PrefixResolver* presolver) {
	return $nc(this->m_dtmManager)->createDTMIterator(xpathString, presolver);
}

$DTMIterator* XPathContext::createDTMIterator(int32_t whatToShow, $DTMFilter* filter, bool entityReferenceExpansion) {
	return $nc(this->m_dtmManager)->createDTMIterator(whatToShow, filter, entityReferenceExpansion);
}

$DTMIterator* XPathContext::createDTMIterator(int32_t node) {
	$var($DTMIterator, iter, $new($OneStepIteratorForward, $Axis::SELF));
	iter->setRoot(node, this);
	return iter;
}

void XPathContext::init$() {
	XPathContext::init$(false);
}

void XPathContext::init$(bool overrideDefaultParser) {
	$DTMManager::init$();
	$set(this, m_last_pushed_rtfdtm, $new($IntStack));
	$set(this, m_rtfdtm_stack, nullptr);
	this->m_which_rtfdtm = -1;
	$set(this, m_global_rtfdtm, nullptr);
	$set(this, m_DTMXRTreeFrags, nullptr);
	this->m_isSecureProcessing = false;
	$set(this, m_dtmManager, nullptr);
	$set(this, m_saxLocations, $new($ObjectStack, XPathContext::RECURSIONLIMIT));
	$set(this, m_variableStacks, $new($VariableStack));
	$set(this, m_contextNodeLists, $new($Stack));
	$set(this, m_currentNodes, $new($IntStack, XPathContext::RECURSIONLIMIT));
	$set(this, m_iteratorRoots, $new($NodeVector));
	$set(this, m_predicateRoots, $new($NodeVector));
	$set(this, m_currentExpressionNodes, $new($IntStack, XPathContext::RECURSIONLIMIT));
	$set(this, m_predicatePos, $new($IntStack));
	$set(this, m_prefixResolvers, $new($ObjectStack, XPathContext::RECURSIONLIMIT));
	$set(this, m_axesIteratorStack, $new($Stack));
	$set(this, expressionContext, $new($XPathContext$XPathExpressionContext, this));
	init(overrideDefaultParser);
}

void XPathContext::init$(Object$* owner) {
	$beforeCallerSensitive();
	$DTMManager::init$();
	$set(this, m_last_pushed_rtfdtm, $new($IntStack));
	$set(this, m_rtfdtm_stack, nullptr);
	this->m_which_rtfdtm = -1;
	$set(this, m_global_rtfdtm, nullptr);
	$set(this, m_DTMXRTreeFrags, nullptr);
	this->m_isSecureProcessing = false;
	$set(this, m_dtmManager, nullptr);
	$set(this, m_saxLocations, $new($ObjectStack, XPathContext::RECURSIONLIMIT));
	$set(this, m_variableStacks, $new($VariableStack));
	$set(this, m_contextNodeLists, $new($Stack));
	$set(this, m_currentNodes, $new($IntStack, XPathContext::RECURSIONLIMIT));
	$set(this, m_iteratorRoots, $new($NodeVector));
	$set(this, m_predicateRoots, $new($NodeVector));
	$set(this, m_currentExpressionNodes, $new($IntStack, XPathContext::RECURSIONLIMIT));
	$set(this, m_predicatePos, $new($IntStack));
	$set(this, m_prefixResolvers, $new($ObjectStack, XPathContext::RECURSIONLIMIT));
	$set(this, m_axesIteratorStack, $new($Stack));
	$set(this, expressionContext, $new($XPathContext$XPathExpressionContext, this));
	$set(this, m_owner, owner);
	try {
		$set(this, m_ownerGetErrorListener, $nc($of(this->m_owner))->getClass()->getMethod("getErrorListener"_s, $$new($ClassArray, 0)));
	} catch ($NoSuchMethodException& nsme) {
	}
	init(false);
}

void XPathContext::init(bool overrideDefaultParser) {
	$nc(this->m_prefixResolvers)->push(nullptr);
	$nc(this->m_currentNodes)->push($DTM::NULL);
	$nc(this->m_currentExpressionNodes)->push($DTM::NULL);
	$nc(this->m_saxLocations)->push(nullptr);
	this->m_overrideDefaultParser = overrideDefaultParser;
	$set(this, m_dtmManager, $DTMManager::newInstance($($XMLStringFactoryImpl::getFactory())));
}

void XPathContext::reset() {
	$useLocalCurrentObjectStackCache();
	releaseDTMXRTreeFrags();
	if (this->m_rtfdtm_stack != nullptr) {
		{
			$var($Iterator, i$, $nc(this->m_rtfdtm_stack)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($DTM, dtm, $cast($DTM, i$->next()));
				{
					$nc(this->m_dtmManager)->release(dtm, true);
				}
			}
		}
	}
	$set(this, m_rtfdtm_stack, nullptr);
	this->m_which_rtfdtm = -1;
	if (this->m_global_rtfdtm != nullptr) {
		$nc(this->m_dtmManager)->release(this->m_global_rtfdtm, true);
	}
	$set(this, m_global_rtfdtm, nullptr);
	$set(this, m_dtmManager, $DTMManager::newInstance($($XMLStringFactoryImpl::getFactory())));
	$nc(this->m_saxLocations)->removeAllElements();
	$nc(this->m_axesIteratorStack)->removeAllElements();
	$nc(this->m_contextNodeLists)->removeAllElements();
	$nc(this->m_currentExpressionNodes)->removeAllElements();
	$nc(this->m_currentNodes)->removeAllElements();
	$nc(this->m_iteratorRoots)->RemoveAllNoClear();
	$nc(this->m_predicatePos)->removeAllElements();
	$nc(this->m_predicateRoots)->RemoveAllNoClear();
	$nc(this->m_prefixResolvers)->removeAllElements();
	$nc(this->m_prefixResolvers)->push(nullptr);
	$nc(this->m_currentNodes)->push($DTM::NULL);
	$nc(this->m_currentExpressionNodes)->push($DTM::NULL);
	$nc(this->m_saxLocations)->push(nullptr);
}

void XPathContext::setSAXLocator($SourceLocator* location) {
	$nc(this->m_saxLocations)->setTop(location);
}

void XPathContext::pushSAXLocator($SourceLocator* location) {
	$nc(this->m_saxLocations)->push(location);
}

void XPathContext::pushSAXLocatorNull() {
	$nc(this->m_saxLocations)->push(nullptr);
}

void XPathContext::popSAXLocator() {
	$nc(this->m_saxLocations)->pop();
}

$SourceLocator* XPathContext::getSAXLocator() {
	return $cast($SourceLocator, $nc(this->m_saxLocations)->peek());
}

$Object* XPathContext::getOwnerObject() {
	return $of(this->m_owner);
}

$VariableStack* XPathContext::getVarStack() {
	return this->m_variableStacks;
}

void XPathContext::setVarStack($VariableStack* varStack) {
	$set(this, m_variableStacks, varStack);
}

$ErrorListener* XPathContext::getErrorListener() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if (nullptr != this->m_errorListener) {
		return this->m_errorListener;
	}
	$var($ErrorListener, retval, nullptr);
	try {
		if (nullptr != this->m_ownerGetErrorListener) {
			$assign(retval, $cast($ErrorListener, $nc(this->m_ownerGetErrorListener)->invoke(this->m_owner, $$new($ObjectArray, 0))));
		}
	} catch ($Exception& e) {
	}
	if (nullptr == retval) {
		if (nullptr == this->m_defaultErrorListener) {
			$set(this, m_defaultErrorListener, $new($DefaultErrorHandler));
		}
		$assign(retval, this->m_defaultErrorListener);
	}
	return retval;
}

void XPathContext::setErrorListener($ErrorListener* listener) {
	if (listener == nullptr) {
		$init($XPATHErrorResources);
		$throwNew($IllegalArgumentException, $($XSLMessages::createXPATHMessage($XPATHErrorResources::ER_NULL_ERROR_HANDLER, nullptr)));
	}
	$set(this, m_errorListener, listener);
}

$URIResolver* XPathContext::getURIResolver() {
	return this->m_uriResolver;
}

void XPathContext::setURIResolver($URIResolver* resolver) {
	$set(this, m_uriResolver, resolver);
}

$XMLReader* XPathContext::getPrimaryReader() {
	return this->m_primaryReader;
}

void XPathContext::setPrimaryReader($XMLReader* reader) {
	$set(this, m_primaryReader, reader);
}

$Stack* XPathContext::getContextNodeListsStack() {
	return this->m_contextNodeLists;
}

void XPathContext::setContextNodeListsStack($Stack* s) {
	$set(this, m_contextNodeLists, s);
}

$DTMIterator* XPathContext::getContextNodeList() {
	if ($nc(this->m_contextNodeLists)->size() > 0) {
		return $cast($DTMIterator, $nc(this->m_contextNodeLists)->peek());
	} else {
		return nullptr;
	}
}

void XPathContext::pushContextNodeList($DTMIterator* nl) {
	$nc(this->m_contextNodeLists)->push(nl);
}

void XPathContext::popContextNodeList() {
	if ($nc(this->m_contextNodeLists)->isEmpty()) {
		$nc($System::err)->println("Warning: popContextNodeList when stack is empty!"_s);
	} else {
		$nc(this->m_contextNodeLists)->pop();
	}
}

$IntStack* XPathContext::getCurrentNodeStack() {
	return this->m_currentNodes;
}

void XPathContext::setCurrentNodeStack($IntStack* nv) {
	$set(this, m_currentNodes, nv);
}

int32_t XPathContext::getCurrentNode() {
	return $nc(this->m_currentNodes)->peek();
}

void XPathContext::pushCurrentNodeAndExpression(int32_t cn, int32_t en) {
	$nc(this->m_currentNodes)->push(cn);
	$nc(this->m_currentExpressionNodes)->push(cn);
}

void XPathContext::popCurrentNodeAndExpression() {
	$nc(this->m_currentNodes)->quickPop(1);
	$nc(this->m_currentExpressionNodes)->quickPop(1);
}

void XPathContext::pushExpressionState(int32_t cn, int32_t en, $PrefixResolver* nc) {
	$nc(this->m_currentNodes)->push(cn);
	$nc(this->m_currentExpressionNodes)->push(cn);
	$nc(this->m_prefixResolvers)->push(nc);
}

void XPathContext::popExpressionState() {
	$nc(this->m_currentNodes)->quickPop(1);
	$nc(this->m_currentExpressionNodes)->quickPop(1);
	$nc(this->m_prefixResolvers)->pop();
}

void XPathContext::pushCurrentNode(int32_t n) {
	$nc(this->m_currentNodes)->push(n);
}

void XPathContext::popCurrentNode() {
	$nc(this->m_currentNodes)->quickPop(1);
}

void XPathContext::pushPredicateRoot(int32_t n) {
	$nc(this->m_predicateRoots)->push(n);
}

void XPathContext::popPredicateRoot() {
	$nc(this->m_predicateRoots)->popQuick();
}

int32_t XPathContext::getPredicateRoot() {
	return $nc(this->m_predicateRoots)->peepOrNull();
}

void XPathContext::pushIteratorRoot(int32_t n) {
	$nc(this->m_iteratorRoots)->push(n);
}

void XPathContext::popIteratorRoot() {
	$nc(this->m_iteratorRoots)->popQuick();
}

int32_t XPathContext::getIteratorRoot() {
	return $nc(this->m_iteratorRoots)->peepOrNull();
}

$IntStack* XPathContext::getCurrentExpressionNodeStack() {
	return this->m_currentExpressionNodes;
}

void XPathContext::setCurrentExpressionNodeStack($IntStack* nv) {
	$set(this, m_currentExpressionNodes, nv);
}

int32_t XPathContext::getPredicatePos() {
	return $nc(this->m_predicatePos)->peek();
}

void XPathContext::pushPredicatePos(int32_t n) {
	$nc(this->m_predicatePos)->push(n);
}

void XPathContext::popPredicatePos() {
	$nc(this->m_predicatePos)->pop();
}

int32_t XPathContext::getCurrentExpressionNode() {
	return $nc(this->m_currentExpressionNodes)->peek();
}

void XPathContext::pushCurrentExpressionNode(int32_t n) {
	$nc(this->m_currentExpressionNodes)->push(n);
}

void XPathContext::popCurrentExpressionNode() {
	$nc(this->m_currentExpressionNodes)->quickPop(1);
}

$PrefixResolver* XPathContext::getNamespaceContext() {
	return $cast($PrefixResolver, $nc(this->m_prefixResolvers)->peek());
}

void XPathContext::setNamespaceContext($PrefixResolver* pr) {
	$nc(this->m_prefixResolvers)->setTop(pr);
}

void XPathContext::pushNamespaceContext($PrefixResolver* pr) {
	$nc(this->m_prefixResolvers)->push(pr);
}

void XPathContext::pushNamespaceContextNull() {
	$nc(this->m_prefixResolvers)->push(nullptr);
}

void XPathContext::popNamespaceContext() {
	$nc(this->m_prefixResolvers)->pop();
}

$Stack* XPathContext::getAxesIteratorStackStacks() {
	return this->m_axesIteratorStack;
}

void XPathContext::setAxesIteratorStackStacks($Stack* s) {
	$set(this, m_axesIteratorStack, s);
}

void XPathContext::pushSubContextList($SubContextList* iter) {
	$nc(this->m_axesIteratorStack)->push(iter);
}

void XPathContext::popSubContextList() {
	$nc(this->m_axesIteratorStack)->pop();
}

$SubContextList* XPathContext::getSubContextList() {
	return $nc(this->m_axesIteratorStack)->isEmpty() ? ($SubContextList*)nullptr : $cast($SubContextList, $nc(this->m_axesIteratorStack)->peek());
}

$SubContextList* XPathContext::getCurrentNodeList() {
	return $nc(this->m_axesIteratorStack)->isEmpty() ? ($SubContextList*)nullptr : $cast($SubContextList, $nc(this->m_axesIteratorStack)->get(0));
}

int32_t XPathContext::getContextNode() {
	return this->getCurrentNode();
}

$DTMIterator* XPathContext::getContextNodes() {
	try {
		$var($DTMIterator, cnl, getContextNodeList());
		if (nullptr != cnl) {
			return cnl->cloneWithReset();
		} else {
			return nullptr;
		}
	} catch ($CloneNotSupportedException& cnse) {
		return nullptr;
	}
	$shouldNotReachHere();
}

$ExpressionContext* XPathContext::getExpressionContext() {
	return this->expressionContext;
}

$DTM* XPathContext::getGlobalRTFDTM() {
	if (this->m_global_rtfdtm == nullptr || $nc(this->m_global_rtfdtm)->isTreeIncomplete()) {
		$set(this, m_global_rtfdtm, $cast($SAX2RTFDTM, $nc(this->m_dtmManager)->getDTM(nullptr, true, nullptr, false, false)));
	}
	return this->m_global_rtfdtm;
}

$DTM* XPathContext::getRTFDTM() {
	$var($SAX2RTFDTM, rtfdtm, nullptr);
	if (this->m_rtfdtm_stack == nullptr) {
		$set(this, m_rtfdtm_stack, $new($ArrayList));
		$assign(rtfdtm, $cast($SAX2RTFDTM, $nc(this->m_dtmManager)->getDTM(nullptr, true, nullptr, false, false)));
		$nc(this->m_rtfdtm_stack)->add(rtfdtm);
		++this->m_which_rtfdtm;
	} else if (this->m_which_rtfdtm < 0) {
		$assign(rtfdtm, $cast($SAX2RTFDTM, $nc(this->m_rtfdtm_stack)->get(++this->m_which_rtfdtm)));
	} else {
		$assign(rtfdtm, $cast($SAX2RTFDTM, $nc(this->m_rtfdtm_stack)->get(this->m_which_rtfdtm)));
		if ($nc(rtfdtm)->isTreeIncomplete()) {
			if (++this->m_which_rtfdtm < $nc(this->m_rtfdtm_stack)->size()) {
				$assign(rtfdtm, $cast($SAX2RTFDTM, $nc(this->m_rtfdtm_stack)->get(this->m_which_rtfdtm)));
			} else {
				$assign(rtfdtm, $cast($SAX2RTFDTM, $nc(this->m_dtmManager)->getDTM(nullptr, true, nullptr, false, false)));
				$nc(this->m_rtfdtm_stack)->add(rtfdtm);
			}
		}
	}
	return rtfdtm;
}

void XPathContext::pushRTFContext() {
	$nc(this->m_last_pushed_rtfdtm)->push(this->m_which_rtfdtm);
	if (nullptr != this->m_rtfdtm_stack) {
		$nc((($cast($SAX2RTFDTM, $(getRTFDTM())))))->pushRewindMark();
	}
}

void XPathContext::popRTFContext() {
	$useLocalCurrentObjectStackCache();
	int32_t previous = $nc(this->m_last_pushed_rtfdtm)->pop();
	if (nullptr == this->m_rtfdtm_stack) {
		return;
	}
	if (this->m_which_rtfdtm == previous) {
		if (previous >= 0) {
			bool isEmpty = $nc((($cast($SAX2RTFDTM, $($nc(this->m_rtfdtm_stack)->get(previous))))))->popRewindMark();
		}
	} else {
		while (this->m_which_rtfdtm != previous) {
			bool isEmpty = $nc((($cast($SAX2RTFDTM, $($nc(this->m_rtfdtm_stack)->get(this->m_which_rtfdtm))))))->popRewindMark();
			--this->m_which_rtfdtm;
		}
	}
}

$DTMXRTreeFrag* XPathContext::getDTMXRTreeFrag(int32_t dtmIdentity) {
	$useLocalCurrentObjectStackCache();
	if (this->m_DTMXRTreeFrags == nullptr) {
		$set(this, m_DTMXRTreeFrags, $new($HashMap));
	}
	if ($nc(this->m_DTMXRTreeFrags)->containsKey($($Integer::valueOf(dtmIdentity)))) {
		return $cast($DTMXRTreeFrag, $nc(this->m_DTMXRTreeFrags)->get($($Integer::valueOf(dtmIdentity))));
	} else {
		$var($DTMXRTreeFrag, frag, $new($DTMXRTreeFrag, dtmIdentity, this));
		$nc(this->m_DTMXRTreeFrags)->put($($Integer::valueOf(dtmIdentity)), frag);
		return frag;
	}
}

void XPathContext::releaseDTMXRTreeFrags() {
	$useLocalCurrentObjectStackCache();
	if (this->m_DTMXRTreeFrags == nullptr) {
		return;
	}
	$var($Iterator, iter, $nc(($($nc(this->m_DTMXRTreeFrags)->values())))->iterator());
	while ($nc(iter)->hasNext()) {
		$var($DTMXRTreeFrag, frag, $cast($DTMXRTreeFrag, iter->next()));
		$nc(frag)->destruct();
		iter->remove();
	}
	$set(this, m_DTMXRTreeFrags, nullptr);
}

XPathContext::XPathContext() {
}

$Class* XPathContext::load$($String* name, bool initialize) {
	$loadClass(XPathContext, name, initialize, &_XPathContext_ClassInfo_, allocate$XPathContext);
	return class$;
}

$Class* XPathContext::class$ = nullptr;

					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com
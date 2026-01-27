#include <com/sun/org/apache/xerces/internal/xni/XMLDTDHandler.h>

#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLLocator.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource.h>
#include <jcpp.h>

#undef CONDITIONAL_IGNORE
#undef CONDITIONAL_INCLUDE

using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLLocator = ::com::sun::org::apache::xerces::internal::xni::XMLLocator;
using $XMLResourceIdentifier = ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLDTDSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDSource;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

$FieldInfo _XMLDTDHandler_FieldInfo_[] = {
	{"CONDITIONAL_INCLUDE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLDTDHandler, CONDITIONAL_INCLUDE)},
	{"CONDITIONAL_IGNORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLDTDHandler, CONDITIONAL_IGNORE)},
	{}
};

$MethodInfo _XMLDTDHandler_MethodInfo_[] = {
	{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, attributeDecl, void, $String*, $String*, $String*, $StringArray*, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"comment", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, comment, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, elementDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endAttlist", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, endAttlist, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endConditional", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, endConditional, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endDTD", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, endDTD, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, endExternalSubset, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, endParameterEntity, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"externalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, externalEntityDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDTDSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, getDTDSource, $XMLDTDSource*)},
	{"ignoredCharacters", "(Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, ignoredCharacters, void, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"internalEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, internalEntityDecl, void, $String*, $XMLString*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"notationDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, notationDecl, void, $String*, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"processingInstruction", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLString;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, processingInstruction, void, $String*, $XMLString*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDSource;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, setDTDSource, void, $XMLDTDSource*)},
	{"startAttlist", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, startAttlist, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startConditional", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, startConditional, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startDTD", "(Lcom/sun/org/apache/xerces/internal/xni/XMLLocator;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, startDTD, void, $XMLLocator*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startExternalSubset", "(Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, startExternalSubset, void, $XMLResourceIdentifier*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startParameterEntity", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, startParameterEntity, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"textDecl", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, textDecl, void, $String*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"unparsedEntityDecl", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/XMLResourceIdentifier;Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDHandler, unparsedEntityDecl, void, $String*, $XMLResourceIdentifier*, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XMLDTDHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.XMLDTDHandler",
	nullptr,
	nullptr,
	_XMLDTDHandler_FieldInfo_,
	_XMLDTDHandler_MethodInfo_
};

$Object* allocate$XMLDTDHandler($Class* clazz) {
	return $of($alloc(XMLDTDHandler));
}

$Class* XMLDTDHandler::load$($String* name, bool initialize) {
	$loadClass(XMLDTDHandler, name, initialize, &_XMLDTDHandler_ClassInfo_, allocate$XMLDTDHandler);
	return class$;
}

$Class* XMLDTDHandler::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
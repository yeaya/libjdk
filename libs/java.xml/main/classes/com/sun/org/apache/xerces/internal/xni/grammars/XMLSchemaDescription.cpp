#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLSchemaDescription.h>

#include <com/sun/org/apache/xerces/internal/xni/QName.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLAttributes.h>
#include <jcpp.h>

#undef CONTEXT_ATTRIBUTE
#undef CONTEXT_ELEMENT
#undef CONTEXT_IMPORT
#undef CONTEXT_INCLUDE
#undef CONTEXT_INSTANCE
#undef CONTEXT_PREPARSE
#undef CONTEXT_REDEFINE
#undef CONTEXT_XSITYPE

using $QName = ::com::sun::org::apache::xerces::internal::xni::QName;
using $XMLAttributes = ::com::sun::org::apache::xerces::internal::xni::XMLAttributes;
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
							namespace grammars {

$FieldInfo _XMLSchemaDescription_FieldInfo_[] = {
	{"CONTEXT_INCLUDE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSchemaDescription, CONTEXT_INCLUDE)},
	{"CONTEXT_REDEFINE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSchemaDescription, CONTEXT_REDEFINE)},
	{"CONTEXT_IMPORT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSchemaDescription, CONTEXT_IMPORT)},
	{"CONTEXT_PREPARSE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSchemaDescription, CONTEXT_PREPARSE)},
	{"CONTEXT_INSTANCE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSchemaDescription, CONTEXT_INSTANCE)},
	{"CONTEXT_ELEMENT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSchemaDescription, CONTEXT_ELEMENT)},
	{"CONTEXT_ATTRIBUTE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSchemaDescription, CONTEXT_ATTRIBUTE)},
	{"CONTEXT_XSITYPE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLSchemaDescription, CONTEXT_XSITYPE)},
	{}
};

$MethodInfo _XMLSchemaDescription_MethodInfo_[] = {
	{"getAttributes", "()Lcom/sun/org/apache/xerces/internal/xni/XMLAttributes;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSchemaDescription, getAttributes, $XMLAttributes*)},
	{"getContextType", "()S", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSchemaDescription, getContextType, int16_t)},
	{"getEnclosingElementName", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSchemaDescription, getEnclosingElementName, $QName*)},
	{"getLocationHints", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSchemaDescription, getLocationHints, $StringArray*)},
	{"getTargetNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSchemaDescription, getTargetNamespace, $String*)},
	{"getTriggeringComponent", "()Lcom/sun/org/apache/xerces/internal/xni/QName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLSchemaDescription, getTriggeringComponent, $QName*)},
	{}
};

$ClassInfo _XMLSchemaDescription_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLSchemaDescription",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarDescription",
	_XMLSchemaDescription_FieldInfo_,
	_XMLSchemaDescription_MethodInfo_
};

$Object* allocate$XMLSchemaDescription($Class* clazz) {
	return $of($alloc(XMLSchemaDescription));
}

$Class* XMLSchemaDescription::load$($String* name, bool initialize) {
	$loadClass(XMLSchemaDescription, name, initialize, &_XMLSchemaDescription_ClassInfo_, allocate$XMLSchemaDescription);
	return class$;
}

$Class* XMLSchemaDescription::class$ = nullptr;

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
#include <com/sun/org/apache/xerces/internal/xni/XMLDTDContentModelHandler.h>

#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource.h>
#include <jcpp.h>

#undef OCCURS_ONE_OR_MORE
#undef OCCURS_ZERO_OR_MORE
#undef OCCURS_ZERO_OR_ONE
#undef SEPARATOR_CHOICE
#undef SEPARATOR_SEQUENCE

using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLDTDContentModelSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLDTDContentModelSource;
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

$FieldInfo _XMLDTDContentModelHandler_FieldInfo_[] = {
	{"SEPARATOR_CHOICE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLDTDContentModelHandler, SEPARATOR_CHOICE)},
	{"SEPARATOR_SEQUENCE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLDTDContentModelHandler, SEPARATOR_SEQUENCE)},
	{"OCCURS_ZERO_OR_ONE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLDTDContentModelHandler, OCCURS_ZERO_OR_ONE)},
	{"OCCURS_ZERO_OR_MORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLDTDContentModelHandler, OCCURS_ZERO_OR_MORE)},
	{"OCCURS_ONE_OR_MORE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XMLDTDContentModelHandler, OCCURS_ONE_OR_MORE)},
	{}
};

$MethodInfo _XMLDTDContentModelHandler_MethodInfo_[] = {
	{"any", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelHandler, any, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"element", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelHandler, element, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"empty", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelHandler, empty, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endContentModel", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelHandler, endContentModel, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"endGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelHandler, endGroup, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"getDTDContentModelSource", "()Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelHandler, getDTDContentModelSource, $XMLDTDContentModelSource*)},
	{"occurrence", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelHandler, occurrence, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"pcdata", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelHandler, pcdata, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"separator", "(SLcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelHandler, separator, void, int16_t, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"setDTDContentModelSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLDTDContentModelSource;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelHandler, setDTDContentModelSource, void, $XMLDTDContentModelSource*)},
	{"startContentModel", "(Ljava/lang/String;Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelHandler, startContentModel, void, $String*, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{"startGroup", "(Lcom/sun/org/apache/xerces/internal/xni/Augmentations;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDContentModelHandler, startGroup, void, $Augmentations*), "com.sun.org.apache.xerces.internal.xni.XNIException"},
	{}
};

$ClassInfo _XMLDTDContentModelHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.XMLDTDContentModelHandler",
	nullptr,
	nullptr,
	_XMLDTDContentModelHandler_FieldInfo_,
	_XMLDTDContentModelHandler_MethodInfo_
};

$Object* allocate$XMLDTDContentModelHandler($Class* clazz) {
	return $of($alloc(XMLDTDContentModelHandler));
}

$Class* XMLDTDContentModelHandler::load$($String* name, bool initialize) {
	$loadClass(XMLDTDContentModelHandler, name, initialize, &_XMLDTDContentModelHandler_ClassInfo_, allocate$XMLDTDContentModelHandler);
	return class$;
}

$Class* XMLDTDContentModelHandler::class$ = nullptr;

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
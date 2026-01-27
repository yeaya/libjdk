#include <com/sun/org/apache/xml/internal/serializer/XSLOutputAttributes.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _XSLOutputAttributes_MethodInfo_[] = {
	{"getDoctypePublic", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, getDoctypePublic, $String*)},
	{"getDoctypeSystem", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, getDoctypeSystem, $String*)},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, getEncoding, $String*)},
	{"getIndent", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, getIndent, bool)},
	{"getIndentAmount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, getIndentAmount, int32_t)},
	{"getMediaType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, getMediaType, $String*)},
	{"getOmitXMLDeclaration", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, getOmitXMLDeclaration, bool)},
	{"getOutputProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, getOutputProperty, $String*, $String*)},
	{"getOutputPropertyDefault", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, getOutputPropertyDefault, $String*, $String*)},
	{"getStandalone", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, getStandalone, $String*)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, getVersion, $String*)},
	{"setCdataSectionElements", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, setCdataSectionElements, void, $List*)},
	{"setDoctype", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, setDoctype, void, $String*, $String*)},
	{"setDoctypePublic", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, setDoctypePublic, void, $String*)},
	{"setDoctypeSystem", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, setDoctypeSystem, void, $String*)},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, setEncoding, void, $String*)},
	{"setIndent", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, setIndent, void, bool)},
	{"setMediaType", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, setMediaType, void, $String*)},
	{"setOmitXMLDeclaration", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, setOmitXMLDeclaration, void, bool)},
	{"setOutputProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, setOutputProperty, void, $String*, $String*)},
	{"setOutputPropertyDefault", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, setOutputPropertyDefault, void, $String*, $String*)},
	{"setStandalone", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, setStandalone, void, $String*)},
	{"setVersion", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLOutputAttributes, setVersion, void, $String*)},
	{}
};

$ClassInfo _XSLOutputAttributes_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.serializer.XSLOutputAttributes",
	nullptr,
	nullptr,
	nullptr,
	_XSLOutputAttributes_MethodInfo_
};

$Object* allocate$XSLOutputAttributes($Class* clazz) {
	return $of($alloc(XSLOutputAttributes));
}

$Class* XSLOutputAttributes::load$($String* name, bool initialize) {
	$loadClass(XSLOutputAttributes, name, initialize, &_XSLOutputAttributes_ClassInfo_, allocate$XSLOutputAttributes);
	return class$;
}

$Class* XSLOutputAttributes::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
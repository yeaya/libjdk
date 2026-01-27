#include <com/sun/org/apache/xerces/internal/xni/grammars/XMLDTDDescription.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace grammars {

$MethodInfo _XMLDTDDescription_MethodInfo_[] = {
	{"getRootName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XMLDTDDescription, getRootName, $String*)},
	{}
};

$ClassInfo _XMLDTDDescription_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLDTDDescription",
	nullptr,
	"com.sun.org.apache.xerces.internal.xni.grammars.XMLGrammarDescription",
	nullptr,
	_XMLDTDDescription_MethodInfo_
};

$Object* allocate$XMLDTDDescription($Class* clazz) {
	return $of($alloc(XMLDTDDescription));
}

$Class* XMLDTDDescription::load$($String* name, bool initialize) {
	$loadClass(XMLDTDDescription, name, initialize, &_XMLDTDDescription_ClassInfo_, allocate$XMLDTDDescription);
	return class$;
}

$Class* XMLDTDDescription::class$ = nullptr;

							} // grammars
						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
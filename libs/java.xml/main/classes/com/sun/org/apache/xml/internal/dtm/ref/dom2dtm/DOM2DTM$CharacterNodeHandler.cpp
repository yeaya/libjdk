#include <com/sun/org/apache/xml/internal/dtm/ref/dom2dtm/DOM2DTM$CharacterNodeHandler.h>

#include <com/sun/org/apache/xml/internal/dtm/ref/dom2dtm/DOM2DTM.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								namespace dom2dtm {

$MethodInfo _DOM2DTM$CharacterNodeHandler_MethodInfo_[] = {
	{"characters", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DOM2DTM$CharacterNodeHandler, characters, void, $Node*), "org.xml.sax.SAXException"},
	{}
};

$InnerClassInfo _DOM2DTM$CharacterNodeHandler_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.DOM2DTM$CharacterNodeHandler", "com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.DOM2DTM", "CharacterNodeHandler", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DOM2DTM$CharacterNodeHandler_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.DOM2DTM$CharacterNodeHandler",
	nullptr,
	nullptr,
	nullptr,
	_DOM2DTM$CharacterNodeHandler_MethodInfo_,
	nullptr,
	nullptr,
	_DOM2DTM$CharacterNodeHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.DOM2DTM"
};

$Object* allocate$DOM2DTM$CharacterNodeHandler($Class* clazz) {
	return $of($alloc(DOM2DTM$CharacterNodeHandler));
}

$Class* DOM2DTM$CharacterNodeHandler::load$($String* name, bool initialize) {
	$loadClass(DOM2DTM$CharacterNodeHandler, name, initialize, &_DOM2DTM$CharacterNodeHandler_ClassInfo_, allocate$DOM2DTM$CharacterNodeHandler);
	return class$;
}

$Class* DOM2DTM$CharacterNodeHandler::class$ = nullptr;

								} // dom2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
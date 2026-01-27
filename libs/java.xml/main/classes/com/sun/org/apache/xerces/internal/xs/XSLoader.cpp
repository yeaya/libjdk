#include <com/sun/org/apache/xerces/internal/xs/XSLoader.h>

#include <com/sun/org/apache/xerces/internal/xs/LSInputList.h>
#include <com/sun/org/apache/xerces/internal/xs/StringList.h>
#include <com/sun/org/apache/xerces/internal/xs/XSModel.h>
#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <jcpp.h>

using $LSInputList = ::com::sun::org::apache::xerces::internal::xs::LSInputList;
using $StringList = ::com::sun::org::apache::xerces::internal::xs::StringList;
using $XSModel = ::com::sun::org::apache::xerces::internal::xs::XSModel;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $LSInput = ::org::w3c::dom::ls::LSInput;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xs {

$MethodInfo _XSLoader_MethodInfo_[] = {
	{"getConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLoader, getConfig, $DOMConfiguration*)},
	{"load", "(Lorg/w3c/dom/ls/LSInput;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLoader, load, $XSModel*, $LSInput*)},
	{"loadInputList", "(Lcom/sun/org/apache/xerces/internal/xs/LSInputList;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLoader, loadInputList, $XSModel*, $LSInputList*)},
	{"loadURI", "(Ljava/lang/String;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLoader, loadURI, $XSModel*, $String*)},
	{"loadURIList", "(Lcom/sun/org/apache/xerces/internal/xs/StringList;)Lcom/sun/org/apache/xerces/internal/xs/XSModel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(XSLoader, loadURIList, $XSModel*, $StringList*)},
	{}
};

$ClassInfo _XSLoader_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xerces.internal.xs.XSLoader",
	nullptr,
	nullptr,
	nullptr,
	_XSLoader_MethodInfo_
};

$Object* allocate$XSLoader($Class* clazz) {
	return $of($alloc(XSLoader));
}

$Class* XSLoader::load$($String* name, bool initialize) {
	$loadClass(XSLoader, name, initialize, &_XSLoader_ClassInfo_, allocate$XSLoader);
	return class$;
}

$Class* XSLoader::class$ = nullptr;

						} // xs
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
#include <org/w3c/dom/ls/LSSerializer.h>

#include <org/w3c/dom/DOMConfiguration.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ls/LSOutput.h>
#include <org/w3c/dom/ls/LSSerializerFilter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMConfiguration = ::org::w3c::dom::DOMConfiguration;
using $Node = ::org::w3c::dom::Node;
using $LSOutput = ::org::w3c::dom::ls::LSOutput;
using $LSSerializerFilter = ::org::w3c::dom::ls::LSSerializerFilter;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$MethodInfo _LSSerializer_MethodInfo_[] = {
	{"getDomConfig", "()Lorg/w3c/dom/DOMConfiguration;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSSerializer, getDomConfig, $DOMConfiguration*)},
	{"getFilter", "()Lorg/w3c/dom/ls/LSSerializerFilter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSSerializer, getFilter, $LSSerializerFilter*)},
	{"getNewLine", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSSerializer, getNewLine, $String*)},
	{"setFilter", "(Lorg/w3c/dom/ls/LSSerializerFilter;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSSerializer, setFilter, void, $LSSerializerFilter*)},
	{"setNewLine", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSSerializer, setNewLine, void, $String*)},
	{"write", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/ls/LSOutput;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSSerializer, write, bool, $Node*, $LSOutput*), "org.w3c.dom.ls.LSException"},
	{"writeToString", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSSerializer, writeToString, $String*, $Node*), "org.w3c.dom.DOMException,org.w3c.dom.ls.LSException"},
	{"writeToURI", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSSerializer, writeToURI, bool, $Node*, $String*), "org.w3c.dom.ls.LSException"},
	{}
};

$ClassInfo _LSSerializer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ls.LSSerializer",
	nullptr,
	nullptr,
	nullptr,
	_LSSerializer_MethodInfo_
};

$Object* allocate$LSSerializer($Class* clazz) {
	return $of($alloc(LSSerializer));
}

$Class* LSSerializer::load$($String* name, bool initialize) {
	$loadClass(LSSerializer, name, initialize, &_LSSerializer_ClassInfo_, allocate$LSSerializer);
	return class$;
}

$Class* LSSerializer::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org
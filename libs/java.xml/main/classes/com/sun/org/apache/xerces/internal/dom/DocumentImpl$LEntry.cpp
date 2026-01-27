#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl$LEntry.h>

#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <org/w3c/dom/events/EventListener.h>
#include <jcpp.h>

using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::org::w3c::dom::events::EventListener;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DocumentImpl$LEntry_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl;", nullptr, $FINAL | $SYNTHETIC, $field(DocumentImpl$LEntry, this$0)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocumentImpl$LEntry, serialVersionUID)},
	{"type", "Ljava/lang/String;", nullptr, 0, $field(DocumentImpl$LEntry, type)},
	{"listener", "Lorg/w3c/dom/events/EventListener;", nullptr, 0, $field(DocumentImpl$LEntry, listener)},
	{"useCapture", "Z", nullptr, 0, $field(DocumentImpl$LEntry, useCapture)},
	{}
};

$MethodInfo _DocumentImpl$LEntry_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl;Ljava/lang/String;Lorg/w3c/dom/events/EventListener;Z)V", nullptr, 0, $method(DocumentImpl$LEntry, init$, void, $DocumentImpl*, $String*, $EventListener*, bool)},
	{}
};

$InnerClassInfo _DocumentImpl$LEntry_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.dom.DocumentImpl$LEntry", "com.sun.org.apache.xerces.internal.dom.DocumentImpl", "LEntry", 0},
	{}
};

$ClassInfo _DocumentImpl$LEntry_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DocumentImpl$LEntry",
	"java.lang.Object",
	"java.io.Serializable",
	_DocumentImpl$LEntry_FieldInfo_,
	_DocumentImpl$LEntry_MethodInfo_,
	nullptr,
	nullptr,
	_DocumentImpl$LEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.dom.DocumentImpl"
};

$Object* allocate$DocumentImpl$LEntry($Class* clazz) {
	return $of($alloc(DocumentImpl$LEntry));
}

void DocumentImpl$LEntry::init$($DocumentImpl* this$0, $String* type, $EventListener* listener, bool useCapture) {
	$set(this, this$0, this$0);
	$set(this, type, type);
	$set(this, listener, listener);
	this->useCapture = useCapture;
}

DocumentImpl$LEntry::DocumentImpl$LEntry() {
}

$Class* DocumentImpl$LEntry::load$($String* name, bool initialize) {
	$loadClass(DocumentImpl$LEntry, name, initialize, &_DocumentImpl$LEntry_ClassInfo_, allocate$DocumentImpl$LEntry);
	return class$;
}

$Class* DocumentImpl$LEntry::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
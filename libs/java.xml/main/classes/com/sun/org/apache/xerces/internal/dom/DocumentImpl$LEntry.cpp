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

void DocumentImpl$LEntry::init$($DocumentImpl* this$0, $String* type, $EventListener* listener, bool useCapture) {
	$set(this, this$0, this$0);
	$set(this, type, type);
	$set(this, listener, listener);
	this->useCapture = useCapture;
}

DocumentImpl$LEntry::DocumentImpl$LEntry() {
}

$Class* DocumentImpl$LEntry::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl;", nullptr, $FINAL | $SYNTHETIC, $field(DocumentImpl$LEntry, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocumentImpl$LEntry, serialVersionUID)},
		{"type", "Ljava/lang/String;", nullptr, 0, $field(DocumentImpl$LEntry, type)},
		{"listener", "Lorg/w3c/dom/events/EventListener;", nullptr, 0, $field(DocumentImpl$LEntry, listener)},
		{"useCapture", "Z", nullptr, 0, $field(DocumentImpl$LEntry, useCapture)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl;Ljava/lang/String;Lorg/w3c/dom/events/EventListener;Z)V", nullptr, 0, $method(DocumentImpl$LEntry, init$, void, $DocumentImpl*, $String*, $EventListener*, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.dom.DocumentImpl$LEntry", "com.sun.org.apache.xerces.internal.dom.DocumentImpl", "LEntry", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.DocumentImpl$LEntry",
		"java.lang.Object",
		"java.io.Serializable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.org.apache.xerces.internal.dom.DocumentImpl"
	};
	$loadClass(DocumentImpl$LEntry, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentImpl$LEntry);
	});
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
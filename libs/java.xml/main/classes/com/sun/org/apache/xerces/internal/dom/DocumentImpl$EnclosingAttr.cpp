#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl$EnclosingAttr.h>
#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>
#include <jcpp.h>

using $DocumentImpl = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

void DocumentImpl$EnclosingAttr::init$($DocumentImpl* this$0) {
	$set(this, this$0, this$0);
}

DocumentImpl$EnclosingAttr::DocumentImpl$EnclosingAttr() {
}

$Class* DocumentImpl$EnclosingAttr::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl;", nullptr, $FINAL | $SYNTHETIC, $field(DocumentImpl$EnclosingAttr, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DocumentImpl$EnclosingAttr, serialVersionUID)},
		{"node", "Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;", nullptr, 0, $field(DocumentImpl$EnclosingAttr, node)},
		{"oldvalue", "Ljava/lang/String;", nullptr, 0, $field(DocumentImpl$EnclosingAttr, oldvalue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl;)V", nullptr, 0, $method(DocumentImpl$EnclosingAttr, init$, void, $DocumentImpl*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.dom.DocumentImpl$EnclosingAttr", "com.sun.org.apache.xerces.internal.dom.DocumentImpl", "EnclosingAttr", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.DocumentImpl$EnclosingAttr",
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
	$loadClass(DocumentImpl$EnclosingAttr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DocumentImpl$EnclosingAttr);
	});
	return class$;
}

$Class* DocumentImpl$EnclosingAttr::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
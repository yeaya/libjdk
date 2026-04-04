#include <com/sun/org/apache/xerces/internal/dom/ParentNode$UserDataRecord.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <jcpp.h>

using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

void ParentNode$UserDataRecord::init$($ParentNode* this$0, Object$* data, $UserDataHandler* handler) {
	$set(this, this$0, this$0);
	$set(this, fData, data);
	$set(this, fHandler, handler);
}

ParentNode$UserDataRecord::ParentNode$UserDataRecord() {
}

$Class* ParentNode$UserDataRecord::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/org/apache/xerces/internal/dom/ParentNode;", nullptr, $FINAL | $SYNTHETIC, $field(ParentNode$UserDataRecord, this$0)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ParentNode$UserDataRecord, serialVersionUID)},
		{"fData", "Ljava/lang/Object;", nullptr, 0, $field(ParentNode$UserDataRecord, fData)},
		{"fHandler", "Lorg/w3c/dom/UserDataHandler;", nullptr, 0, $field(ParentNode$UserDataRecord, fHandler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/org/apache/xerces/internal/dom/ParentNode;Ljava/lang/Object;Lorg/w3c/dom/UserDataHandler;)V", nullptr, 0, $method(ParentNode$UserDataRecord, init$, void, $ParentNode*, Object$*, $UserDataHandler*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xerces.internal.dom.ParentNode$UserDataRecord", "com.sun.org.apache.xerces.internal.dom.ParentNode", "UserDataRecord", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.dom.ParentNode$UserDataRecord",
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
		"com.sun.org.apache.xerces.internal.dom.ParentNode"
	};
	$loadClass(ParentNode$UserDataRecord, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ParentNode$UserDataRecord);
	});
	return class$;
}

$Class* ParentNode$UserDataRecord::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
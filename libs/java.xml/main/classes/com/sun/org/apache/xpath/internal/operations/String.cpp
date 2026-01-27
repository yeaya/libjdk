#include <com/sun/org/apache/xpath/internal/operations/String.h>

#include <com/sun/org/apache/xml/internal/utils/XMLString.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/objects/XString.h>
#include <com/sun/org/apache/xpath/internal/operations/UnaryOperation.h>
#include <jcpp.h>

using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XString = ::com::sun::org::apache::xpath::internal::objects::XString;
using $UnaryOperation = ::com::sun::org::apache::xpath::internal::operations::UnaryOperation;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace operations {

$FieldInfo _String_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(String, serialVersionUID)},
	{}
};

$MethodInfo _String_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(String, init$, void)},
	{"operate", "(Lcom/sun/org/apache/xpath/internal/objects/XObject;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, $virtualMethod(String, operate, $XObject*, $XObject*), "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _String_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.operations.String",
	"com.sun.org.apache.xpath.internal.operations.UnaryOperation",
	nullptr,
	_String_FieldInfo_,
	_String_MethodInfo_
};

$Object* allocate$String($Class* clazz) {
	return $of($alloc(String));
}

void String::init$() {
	$UnaryOperation::init$();
}

$XObject* String::operate($XObject* right) {
	return $cast($XString, $nc(right)->xstr());
}

String::String() {
}

$Class* String::load$($String* name, bool initialize) {
	$loadClass(String, name, initialize, &_String_ClassInfo_, allocate$String);
	return class$;
}

$Class* String::class$ = nullptr;

						} // operations
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com
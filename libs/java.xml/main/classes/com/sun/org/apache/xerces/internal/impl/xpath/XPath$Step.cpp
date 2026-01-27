#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Step.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Axis.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$NodeTest.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef CHILD
#undef DESCENDANT
#undef SELF

using $XPath$Axis = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Axis;
using $XPath$NodeTest = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$NodeTest;
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
						namespace impl {
							namespace xpath {

$FieldInfo _XPath$Step_FieldInfo_[] = {
	{"axis", "Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$Axis;", nullptr, $PUBLIC | $FINAL, $field(XPath$Step, axis)},
	{"nodeTest", "Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$NodeTest;", nullptr, $PUBLIC | $FINAL, $field(XPath$Step, nodeTest)},
	{}
};

$MethodInfo _XPath$Step_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$Axis;Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$NodeTest;)V", nullptr, $PUBLIC, $method(XPath$Step, init$, void, $XPath$Axis*, $XPath$NodeTest*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$Step;)V", nullptr, $PROTECTED, $method(XPath$Step, init$, void, XPath$Step*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPath$Step, clone, $Object*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XPath$Step, toString, $String*)},
	{}
};

$InnerClassInfo _XPath$Step_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Step", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "Step", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XPath$Step_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Step",
	"java.lang.Object",
	"java.lang.Cloneable",
	_XPath$Step_FieldInfo_,
	_XPath$Step_MethodInfo_,
	nullptr,
	nullptr,
	_XPath$Step_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath"
};

$Object* allocate$XPath$Step($Class* clazz) {
	return $of($alloc(XPath$Step));
}

void XPath$Step::init$($XPath$Axis* axis, $XPath$NodeTest* nodeTest) {
	$set(this, axis, axis);
	$set(this, nodeTest, nodeTest);
}

void XPath$Step::init$(XPath$Step* step) {
	$set(this, axis, $cast($XPath$Axis, $nc($nc(step)->axis)->clone()));
	$set(this, nodeTest, $cast($XPath$NodeTest, $nc(step->nodeTest)->clone()));
}

$String* XPath$Step::toString() {
	$useLocalCurrentObjectStackCache();
	if ($nc(this->axis)->type == $XPath$Axis::SELF) {
		return "."_s;
	}
	if ($nc(this->axis)->type == $XPath$Axis::ATTRIBUTE) {
		return $str({"@"_s, $($nc(this->nodeTest)->toString())});
	}
	if ($nc(this->axis)->type == $XPath$Axis::CHILD) {
		return $nc(this->nodeTest)->toString();
	}
	if ($nc(this->axis)->type == $XPath$Axis::DESCENDANT) {
		return "//"_s;
	}
	return $str({"??? ("_s, $$str($nc(this->axis)->type), $$str(u')')});
}

$Object* XPath$Step::clone() {
	return $of($new(XPath$Step, this));
}

XPath$Step::XPath$Step() {
}

$Class* XPath$Step::load$($String* name, bool initialize) {
	$loadClass(XPath$Step, name, initialize, &_XPath$Step_ClassInfo_, allocate$XPath$Step);
	return class$;
}

$Class* XPath$Step::class$ = nullptr;

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
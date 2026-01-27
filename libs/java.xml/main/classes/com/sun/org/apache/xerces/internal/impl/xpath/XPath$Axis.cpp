#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Axis.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <jcpp.h>

#undef ATTRIBUTE
#undef CHILD
#undef DESCENDANT
#undef SELF

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

$FieldInfo _XPath$Axis_FieldInfo_[] = {
	{"CHILD", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Axis, CHILD)},
	{"ATTRIBUTE", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Axis, ATTRIBUTE)},
	{"SELF", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Axis, SELF)},
	{"DESCENDANT", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(XPath$Axis, DESCENDANT)},
	{"type", "S", nullptr, $PUBLIC | $FINAL, $field(XPath$Axis, type)},
	{}
};

$MethodInfo _XPath$Axis_MethodInfo_[] = {
	{"<init>", "(S)V", nullptr, $PUBLIC, $method(XPath$Axis, init$, void, int16_t)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$Axis;)V", nullptr, $PROTECTED, $method(XPath$Axis, init$, void, XPath$Axis*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPath$Axis, clone, $Object*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XPath$Axis, toString, $String*)},
	{}
};

$InnerClassInfo _XPath$Axis_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Axis", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "Axis", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XPath$Axis_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath$Axis",
	"java.lang.Object",
	"java.lang.Cloneable",
	_XPath$Axis_FieldInfo_,
	_XPath$Axis_MethodInfo_,
	nullptr,
	nullptr,
	_XPath$Axis_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath"
};

$Object* allocate$XPath$Axis($Class* clazz) {
	return $of($alloc(XPath$Axis));
}

void XPath$Axis::init$(int16_t type) {
	this->type = type;
}

void XPath$Axis::init$(XPath$Axis* axis) {
	this->type = $nc(axis)->type;
}

$String* XPath$Axis::toString() {
	switch (this->type) {
	case XPath$Axis::CHILD:
		{
			return "child"_s;
		}
	case XPath$Axis::ATTRIBUTE:
		{
			return "attribute"_s;
		}
	case XPath$Axis::SELF:
		{
			return "self"_s;
		}
	case XPath$Axis::DESCENDANT:
		{
			return "descendant"_s;
		}
	}
	return "???"_s;
}

$Object* XPath$Axis::clone() {
	return $of($new(XPath$Axis, this));
}

XPath$Axis::XPath$Axis() {
}

$Class* XPath$Axis::load$($String* name, bool initialize) {
	$loadClass(XPath$Axis, name, initialize, &_XPath$Axis_ClassInfo_, allocate$XPath$Axis);
	return class$;
}

$Class* XPath$Axis::class$ = nullptr;

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
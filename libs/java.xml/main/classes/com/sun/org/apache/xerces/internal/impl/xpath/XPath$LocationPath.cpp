#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath.h>

#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Axis.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath$Step.h>
#include <com/sun/org/apache/xerces/internal/impl/xpath/XPath.h>
#include <java/lang/StringBuffer.h>
#include <jcpp.h>

#undef DESCENDANT

using $XPath$StepArray = $Array<::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Step>;
using $XPath$Axis = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Axis;
using $XPath$Step = ::com::sun::org::apache::xerces::internal::impl::xpath::XPath$Step;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xpath {

$FieldInfo _XPath$LocationPath_FieldInfo_[] = {
	{"steps", "[Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$Step;", nullptr, $PUBLIC | $FINAL, $field(XPath$LocationPath, steps)},
	{}
};

$MethodInfo _XPath$LocationPath_MethodInfo_[] = {
	{"<init>", "([Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$Step;)V", nullptr, $PUBLIC, $method(XPath$LocationPath, init$, void, $XPath$StepArray*)},
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/impl/xpath/XPath$LocationPath;)V", nullptr, $PROTECTED, $method(XPath$LocationPath, init$, void, XPath$LocationPath*)},
	{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(XPath$LocationPath, clone, $Object*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XPath$LocationPath, toString, $String*)},
	{}
};

$InnerClassInfo _XPath$LocationPath_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.xpath.XPath$LocationPath", "com.sun.org.apache.xerces.internal.impl.xpath.XPath", "LocationPath", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XPath$LocationPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath$LocationPath",
	"java.lang.Object",
	"java.lang.Cloneable",
	_XPath$LocationPath_FieldInfo_,
	_XPath$LocationPath_MethodInfo_,
	nullptr,
	nullptr,
	_XPath$LocationPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.xpath.XPath"
};

$Object* allocate$XPath$LocationPath($Class* clazz) {
	return $of($alloc(XPath$LocationPath));
}

void XPath$LocationPath::init$($XPath$StepArray* steps) {
	$set(this, steps, steps);
}

void XPath$LocationPath::init$(XPath$LocationPath* path) {
	$useLocalCurrentObjectStackCache();
	$set(this, steps, $new($XPath$StepArray, $nc($nc(path)->steps)->length));
	for (int32_t i = 0; i < $nc(this->steps)->length; ++i) {
		$nc(this->steps)->set(i, $cast($XPath$Step, $($nc($nc(path->steps)->get(i))->clone())));
	}
}

$String* XPath$LocationPath::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, str, $new($StringBuffer));
	for (int32_t i = 0; i < $nc(this->steps)->length; ++i) {
		if (i > 0 && ($nc($nc($nc(this->steps)->get(i - 1))->axis)->type != $XPath$Axis::DESCENDANT && $nc($nc($nc(this->steps)->get(i))->axis)->type != $XPath$Axis::DESCENDANT)) {
			str->append(u'/');
		}
		str->append($($nc($nc(this->steps)->get(i))->toString()));
	}
	return str->toString();
}

$Object* XPath$LocationPath::clone() {
	return $of($new(XPath$LocationPath, this));
}

XPath$LocationPath::XPath$LocationPath() {
}

$Class* XPath$LocationPath::load$($String* name, bool initialize) {
	$loadClass(XPath$LocationPath, name, initialize, &_XPath$LocationPath_ClassInfo_, allocate$XPath$LocationPath);
	return class$;
}

$Class* XPath$LocationPath::class$ = nullptr;

							} // xpath
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
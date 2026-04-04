#include <TestObjectView$UserElement$1.h>
#include <TestObjectView$UserElement.h>
#include <TestObjectView$UserJComponent.h>
#include <TestObjectView.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/util/Enumeration.h>
#include <javax/swing/text/AttributeSet.h>
#include <javax/swing/text/html/HTML$Attribute.h>
#include <jcpp.h>

#undef CLASSID

using $TestObjectView$UserElement = ::TestObjectView$UserElement;
using $TestObjectView$UserJComponent = ::TestObjectView$UserJComponent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Enumeration = ::java::util::Enumeration;
using $AttributeSet = ::javax::swing::text::AttributeSet;
using $HTML$Attribute = ::javax::swing::text::html::HTML$Attribute;

void TestObjectView$UserElement$1::init$($TestObjectView$UserElement* this$0) {
	$set(this, this$0, this$0);
}

int32_t TestObjectView$UserElement$1::getAttributeCount() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bool TestObjectView$UserElement$1::isDefined(Object$* attrName) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bool TestObjectView$UserElement$1::isEqual($AttributeSet* attr) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$AttributeSet* TestObjectView$UserElement$1::copyAttributes() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Object* TestObjectView$UserElement$1::getAttribute(Object$* key) {
	$init($HTML$Attribute);
	if ($nc($of(key))->equals($HTML$Attribute::CLASSID)) {
		$load($TestObjectView$UserJComponent);
		return $of($TestObjectView$UserJComponent::class$->getName());
	}
	return nullptr;
}

$Enumeration* TestObjectView$UserElement$1::getAttributeNames() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bool TestObjectView$UserElement$1::containsAttribute(Object$* name, Object$* value) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

bool TestObjectView$UserElement$1::containsAttributes($AttributeSet* attributes) {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$AttributeSet* TestObjectView$UserElement$1::getResolveParent() {
	$throwNew($UnsupportedOperationException, "Not supported yet."_s);
	$shouldNotReachHere();
}

TestObjectView$UserElement$1::TestObjectView$UserElement$1() {
}

$Class* TestObjectView$UserElement$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestObjectView$UserElement;", nullptr, $FINAL | $SYNTHETIC, $field(TestObjectView$UserElement$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestObjectView$UserElement;)V", nullptr, 0, $method(TestObjectView$UserElement$1, init$, void, $TestObjectView$UserElement*)},
		{"containsAttribute", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement$1, containsAttribute, bool, Object$*, Object$*)},
		{"containsAttributes", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement$1, containsAttributes, bool, $AttributeSet*)},
		{"copyAttributes", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement$1, copyAttributes, $AttributeSet*)},
		{"getAttribute", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement$1, getAttribute, $Object*, Object$*)},
		{"getAttributeCount", "()I", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement$1, getAttributeCount, int32_t)},
		{"getAttributeNames", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<*>;", $PUBLIC, $virtualMethod(TestObjectView$UserElement$1, getAttributeNames, $Enumeration*)},
		{"getResolveParent", "()Ljavax/swing/text/AttributeSet;", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement$1, getResolveParent, $AttributeSet*)},
		{"isDefined", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement$1, isDefined, bool, Object$*)},
		{"isEqual", "(Ljavax/swing/text/AttributeSet;)Z", nullptr, $PUBLIC, $virtualMethod(TestObjectView$UserElement$1, isEqual, bool, $AttributeSet*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestObjectView$UserElement",
		"getAttributes",
		"()Ljavax/swing/text/AttributeSet;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestObjectView$UserElement", "TestObjectView", "UserElement", $PUBLIC | $STATIC},
		{"TestObjectView$UserElement$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestObjectView$UserElement$1",
		"java.lang.Object",
		"javax.swing.text.AttributeSet",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestObjectView"
	};
	$loadClass(TestObjectView$UserElement$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestObjectView$UserElement$1);
	});
	return class$;
}

$Class* TestObjectView$UserElement$1::class$ = nullptr;
#include <javax/swing/SpringLayout$SpringProxy.h>
#include <java/awt/Component.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout$Constraints.h>
#include <javax/swing/SpringLayout.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Spring = ::javax::swing::Spring;
using $SpringLayout = ::javax::swing::SpringLayout;

namespace javax {
	namespace swing {

void SpringLayout$SpringProxy::init$($String* edgeName, $Component* c, $SpringLayout* l) {
	$Spring::init$();
	$set(this, edgeName, edgeName);
	$set(this, c, c);
	$set(this, l, l);
}

$Spring* SpringLayout$SpringProxy::getConstraint() {
	return $$nc($nc(this->l)->getConstraints(this->c))->getConstraint(this->edgeName);
}

int32_t SpringLayout$SpringProxy::getMinimumValue() {
	return $$nc(getConstraint())->getMinimumValue();
}

int32_t SpringLayout$SpringProxy::getPreferredValue() {
	return $$nc(getConstraint())->getPreferredValue();
}

int32_t SpringLayout$SpringProxy::getMaximumValue() {
	return $$nc(getConstraint())->getMaximumValue();
}

int32_t SpringLayout$SpringProxy::getValue() {
	return $$nc(getConstraint())->getValue();
}

void SpringLayout$SpringProxy::setValue(int32_t size) {
	$$nc(getConstraint())->setValue(size);
}

bool SpringLayout$SpringProxy::isCyclic($SpringLayout* l) {
	return $nc(l)->isCyclic($(getConstraint()));
}

$String* SpringLayout$SpringProxy::toString() {
	return $str({"SpringProxy for "_s, this->edgeName, " edge of "_s, $($nc(this->c)->getName()), "."_s});
}

SpringLayout$SpringProxy::SpringLayout$SpringProxy() {
}

$Class* SpringLayout$SpringProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"edgeName", "Ljava/lang/String;", nullptr, $PRIVATE, $field(SpringLayout$SpringProxy, edgeName)},
		{"c", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(SpringLayout$SpringProxy, c)},
		{"l", "Ljavax/swing/SpringLayout;", nullptr, $PRIVATE, $field(SpringLayout$SpringProxy, l)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/awt/Component;Ljavax/swing/SpringLayout;)V", nullptr, $PUBLIC, $method(SpringLayout$SpringProxy, init$, void, $String*, $Component*, $SpringLayout*)},
		{"getConstraint", "()Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(SpringLayout$SpringProxy, getConstraint, $Spring*)},
		{"getMaximumValue", "()I", nullptr, $PUBLIC, $virtualMethod(SpringLayout$SpringProxy, getMaximumValue, int32_t)},
		{"getMinimumValue", "()I", nullptr, $PUBLIC, $virtualMethod(SpringLayout$SpringProxy, getMinimumValue, int32_t)},
		{"getPreferredValue", "()I", nullptr, $PUBLIC, $virtualMethod(SpringLayout$SpringProxy, getPreferredValue, int32_t)},
		{"getValue", "()I", nullptr, $PUBLIC, $virtualMethod(SpringLayout$SpringProxy, getValue, int32_t)},
		{"isCyclic", "(Ljavax/swing/SpringLayout;)Z", nullptr, 0, $virtualMethod(SpringLayout$SpringProxy, isCyclic, bool, $SpringLayout*)},
		{"setValue", "(I)V", nullptr, $PUBLIC, $virtualMethod(SpringLayout$SpringProxy, setValue, void, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SpringLayout$SpringProxy, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.SpringLayout$SpringProxy", "javax.swing.SpringLayout", "SpringProxy", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.SpringLayout$SpringProxy",
		"javax.swing.Spring",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.SpringLayout"
	};
	$loadClass(SpringLayout$SpringProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpringLayout$SpringProxy);
	});
	return class$;
}

$Class* SpringLayout$SpringProxy::class$ = nullptr;

	} // swing
} // javax